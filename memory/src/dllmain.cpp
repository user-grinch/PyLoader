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
      register_command("free_library", "memory", _free_library);
      register_command("get_proc_address", "memory", _get_proc_address);
      register_command("load_library", "memory", _load_library);
      register_command("call_function", "memory", call_function);
      register_command("call_method", "memory", call_method);
      register_command("get_raw", "memory", get_raw);
      register_command("nop", "memory", nop);
      register_command("put_retn", "memory", put_retn);
      register_command("read_float", "memory", read_float);
      register_command("read", "memory", read_memory);
      register_command("set_raw", "memory", set_raw);
      register_command("write_float", "memory", write_float);
      register_command("write", "memory", write_memory);
    }
    else
    {
      py_log("Unsupported game/ version. Only GTA III, VC & SA (Not DE) are supported.");
    }
  }

  return TRUE;
}
