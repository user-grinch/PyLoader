#define WIN32_LEAN_AND_MEAN 
#include "windows.h"
#include "pyloader_sdk.h"

PyObject* _free_library(PyObject* self, PyObject* args);
PyObject* _get_proc_address(PyObject* self, PyObject* args);
PyObject* _load_library(PyObject* self, PyObject* args);
PyObject* call_function(PyObject* self, PyObject* args);
PyObject* call_method(PyObject* self, PyObject* args);
PyObject* get_raw(PyObject* self, PyObject* args);
PyObject* nop(PyObject* self, PyObject* args);
PyObject* put_retn(PyObject* self, PyObject* args);
PyObject* read_float(PyObject* self, PyObject* args);
PyObject* read_memory(PyObject *self, PyObject *args);
PyObject* set_raw(PyObject* self, PyObject* args);
PyObject* write_float(PyObject* self, PyObject* args);
PyObject* write_memory(PyObject *self, PyObject *args);

BOOL WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
  if (nReason == DLL_PROCESS_ATTACH)
  {
    // II, VC & SA
    if (get_game_id() <= eGame::SA)
    {
      register_command("free_library", "Memory", _free_library);
      register_command("get_proc_address", "Memory", _get_proc_address);
      register_command("load_library", "Memory", _load_library);
      register_command("call_function", "Memory", call_function);
      register_command("call_method", "Memory", call_method);
      register_command("get_raw", "Memory", get_raw);
      register_command("nop", "Memory", nop);
      register_command("put_retn", "Memory", put_retn);
      register_command("read_float", "Memory", read_float);
      register_command("read_memory", "Memory", read_memory);
      register_command("set_raw", "Memory", set_raw);
      register_command("write_float", "Memory", write_float);
      register_command("write_memory", "Memory", write_memory);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA III, VC & SA (Not DE) are supported.");
    }
  }

  return TRUE;
}
