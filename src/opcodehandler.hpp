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
    
    // Calls CRunningScript on a memory buffer
    static bool call_script_on_buf(unsigned int command_id, unsigned char* buf)
    {
        static CRunningScriptSA script;
        memset(&script, 0, sizeof(CRunningScriptSA));
        strcpy(script.m_szName, "py-load");
        script.m_bIsMission = false;
        script.m_bUseMissionCleanup = false;
        script.m_bNotFlag = (command_id >> 15) & 1;

        if (gGameVer == eGameVer::SA)
        {
            static unsigned short &commands_executed = *reinterpret_cast<unsigned short*>(0xA447F4);
            typedef char (__thiscall* opcodeTable)(CRunningScriptSA*, int);

            script.m_pBaseIP = script.m_pCurrentIP = buf;

            // Calling CRunningScript::ProcessOneCommand directly seems to crash
            ++commands_executed;
            script.m_pCurrentIP += 2;
            script.m_bNotFlag = (command_id & 0x8000) != 0;
            opcodeTable* f = (opcodeTable*)0x8A6168;
            f[(command_id & 0x7FFF) / 100](&script, command_id & 0x7FFF);
        }
        else
        {
            // TODO: VC & III
            script.m_bWastedBustedCheck = true;
            // script.m_nIp = reinterpret_cast<int>(code.GetData()) - reinterpret_cast<int>(CRunningScript::GetScriptSpaceBase());
        }

        return script.m_bCondResult ? true : false;
    }

    template <typename Type>
    static void mem_cpy(unsigned char*& des, size_t& size, Type value) 
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
    static void mem_cpy(unsigned char*& des, size_t& size, First firstValue, Rest... rest) {
        mem_cpy(des, size, firstValue);
        mem_cpy(des, size, rest...);
    }

public:
    OpcodeHandler() = delete;
    OpcodeHandler(const OpcodeHandler&) = delete;
    
    // call opcodes using a external buffer
    static bool call(unsigned int command_id, unsigned char* buf)
    {
        return call_script_on_buf(command_id, buf);
    }

    // call opcode using a python tuple
    static bool call(PyObject* args)
    {
        static size_t size = 0;
        static unsigned char* buf = new unsigned char[256]; // 256 should be more than enough
        Py_ssize_t total_args = PyTuple_Size(args);

        unsigned int command_id = PyLong_AsLong(PyNumber_Long(PyTuple_GetItem(args, 0)));

        // copy args to buffer
        memset(buf, 0, 256);
        memcpy(&buf[0], &command_id, 2);
        size = 2;

        for (size_t i = 1; i < total_args; i++)
        {
            PyObject *ptemp = PyTuple_GetItem(args, i);
            if (ptemp)
            {
                if (PyNumber_Check(ptemp))
                {
                    if (PyFloat_Check(ptemp))
                    {
                        float val = (float)PyFloat_AsDouble(PyNumber_Float(ptemp));
                        memset(&buf[size], 0x6, 1);
                        size += 1;
                        memcpy(&buf[size], &val, sizeof(val));
                        size += sizeof(val);
                    }
                    else
                    {
                        int val = PyLong_AsLong(PyNumber_Long(ptemp));
                        memset(&buf[size], 0x1, 1);
                        size += 1;
                        memcpy(&buf[size], &val, sizeof(val));
                        size += sizeof(val);
                    }
                }
                else
                {
                    // char *val = PyBytes_AsString(PyUnicode_AsUTF8String(ptemp));
                    // memcpy((void*)(int(pArr) + i*4), &val, 4);
                }
            }
        }

        return call_script_on_buf(command_id, buf);
    }

    // call opcode using param pack
    template<typename... ArgTypes>
    static bool call(unsigned int command_id, ArgTypes... arguments)
    {
        static size_t size = 0;
        unsigned char* buf = new unsigned char[256]; // 256 should be more than enough
        memset(buf, 0, 256);

        // We do the buffer handling ourselves here
        memcpy(&buf[0], &command_id, 2);
        size = 2;
        mem_cpy(buf, size, arguments...);
        buf[size] = '\0';

        bool rtn = call_script_on_buf(command_id, buf);
        delete[] buf;

        return rtn;
    }
};