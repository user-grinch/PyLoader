#pragma once
#include "pch.h"
#include "filewatcher.hpp"

class PyLoader
{
private:
    static inline bool initialized; // PyLoader init flag
    static inline FileWatcher watcher{"./PyLoader/"};


    /*
        Does necessary cleanup to exit PyLoader
        Unlikely to be ever called!

        TODO: Implement PyLoader closing on game termination
    */
    static void cleanup();
    /*
        Callback function for file watcher
        Handles script load, reload & unload events
        Based on file status
    */
    static void f_watcher(const std::string& file_path, eFileStatus state);
    /*
        Does the necessary setup to start PyLoader
    */
    static void init();
    /*
        Loads a script from file name
        Relative from the PyLoader directory
    */
    static void load_script(std::string& file_name);
    static void unload_script(std::string& file_name){};

public:
    PyLoader() = delete;
    PyLoader(const PyLoader&&) = delete;
 
    /*
        PyLoader process loop, needs to run each frame
        Must be called in a separate thread to avoid block
    */
    static void process();
};