/*
    Definately !NOT stolen from plugin-sdk
    Credits: Plugin-SDK Team
*/
#pragma once
#include <sstream>
#include <vector>

class CRunningScriptSA 
{
public:
    CRunningScriptSA *m_pNext;
    CRunningScriptSA *m_pPrev;
    char             m_szName[8];
    unsigned char   *m_pBaseIP;
    unsigned char   *m_pCurrentIP;
    unsigned char   *m_apStack[8];
    unsigned short  m_nSP;
    char            _pad3A[2];
    void*       	m_aLocalVars[32];
    int             m_anTimers[2];
    bool            m_bIsActive;
    bool            m_bCondResult;
    bool            m_bUseMissionCleanup;
    bool            m_bIsExternal;
    bool            m_bTextBlockOverride;
    char            _padC9[3];
    int             m_nWakeTime;
    unsigned short  m_nLogicalOp;
    bool            m_bNotFlag;
    bool            m_bWastedBustedCheck;
    bool            m_bWastedOrBusted;
    char            _padD5[3];
    unsigned char  *m_pSceneSkipIP;
    bool            m_bIsMission;
    char            _padDD[3];
    
    void Init()
    {
        ((void(*__fastcall)(int))0x4648E0)((int)this);
    }

    void ProcessOneCommand()
    {
        ((void(*__fastcall)(int))0x469EB0)((int)this);
    }
};

class CRunningScript 
{
public:
    CRunningScript *m_pNext;
    CRunningScript *m_pPrev;
    char            m_szName[8];
    int             m_nIp;
    int             m_anStack[6];
    unsigned short  m_nSP;
    char            _pad2E[2];
    void*            m_aLocalVars[16];
    int             m_anTimers[2];
    bool            m_bIsActive;
    bool            m_bCondResult;
    bool            m_bUseMissionCleanup;
    bool            m_bAwake;
    int             m_nWakeTime;
    unsigned short  m_nLogicalOp;
    bool            m_bNotFlag;
    bool            m_bWastedBustedCheck;
    bool            m_bWastedOrBusted;
    bool            m_bIsMission;
    char _pad86[2];

    char ProcessOneCommand();
};

class OpcodeHandler
{
private: 
    static inline size_t size = 0;

public:
    OpcodeHandler() = delete;
    OpcodeHandler(const OpcodeHandler&) = delete;

    template <typename Type>
    static void mem_cpy(unsigned char*& des, Type value) 
    {
        if (typeid(value) == typeid(int))
        {   
            memset(&des[size], 0x1, 1);
        }
        if (typeid(value) == typeid(short))
        {
            memset(&des[size], 0x5, 1);
        }
        if (typeid(value) == typeid(float))
        {
            memset(&des[size], 0x6, 1);
        }
        if (typeid(value) == typeid(bool))
        {
            memset(&des[size], 0x4, 1);
        }
        size += 1;
        memcpy(&des[size], &value, sizeof(value));
        size += sizeof(value);
    }

    template <typename First, typename... Rest>
    static void mem_cpy(unsigned char*& des, First firstValue, Rest... rest) {
        mem_cpy(des, firstValue);
        mem_cpy(des, rest...);
    }

    template<typename... ArgTypes>
    static bool call(unsigned int commandId,  ArgTypes... arguments)
    {
        static unsigned char *buf = new unsigned char[256];
        static CRunningScriptSA script;
        memset(&script, 0, sizeof(CRunningScriptSA));
        memset(buf, 0, 256);

        strcpy(script.m_szName, "py-load");
        script.m_bIsMission = false;
        script.m_bUseMissionCleanup = false;
        script.m_bNotFlag = (commandId >> 15) & 1;

        // Copy opcodeID & args to buffer
        memcpy(&buf[0], &commandId, 2);
        size = 2;
        mem_cpy(buf, arguments...);
        buf[size] = '\0';

        if (gGameVer == eGameVer::SA)
        {
            static unsigned short &commands_executed = *reinterpret_cast<unsigned short*>(0xA447F4);
            typedef char (__thiscall* opcodeTable)(CRunningScriptSA*, int);

            script.m_pBaseIP = script.m_pCurrentIP = buf;

            // Calling processOneCommand directly seems to crash?
            ++commands_executed;
            script.m_pCurrentIP += 2;
            script.m_bNotFlag = (commandId & 0x8000) != 0;
            opcodeTable* f = (opcodeTable*)0x8A6168;
            f[(commandId & 0x7FFF) / 100](&script, commandId & 0x7FFF);
        }
        else
        {
            script.m_bWastedBustedCheck = true;
            // script.m_nIp = reinterpret_cast<int>(code.GetData()) - reinterpret_cast<int>(CRunningScript::GetScriptSpaceBase());
        }
        
        return script.m_bCondResult ? true : false;
    }
};