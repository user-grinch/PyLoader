#pragma once
#include <filesystem>
#include <chrono>
#include <thread>
#include <unordered_map>
#include <string>
#include <functional>

enum class eFileStatus 
{
    created, // applies for each file on first run
    modified, 
    removed
};

class FileWatcher 
{
private:
    std::unordered_map<std::string, std::filesystem::file_time_type> paths_;

public:
    std::string path_to_watch;

    FileWatcher(std::string path_to_watch) : path_to_watch{path_to_watch}{}

    // Monitor "path_to_watch" for changes and in case of a change execute the user supplied "action" function
    // Must be called each time
    void update(const std::function<void (const std::string&, eFileStatus)>& action)
    {
        if (!std::filesystem::exists(path_to_watch))
        {
            return;
        }

        auto it = paths_.begin();
        while (it != paths_.end()) 
        {
            if (!std::filesystem::exists(it->first)) 
            {
                action(it->first, eFileStatus::removed);
                it = paths_.erase(it);
            }
            else 
            {
                it++;
            }
        }

        // Check if a file was created or modified
        for(auto &file : std::filesystem::recursive_directory_iterator(path_to_watch)) 
        {
            auto current_file_last_write_time = std::filesystem::last_write_time(file);

            // File creation
            if(!paths_.contains(file.path().string())) 
            {
                paths_[file.path().string()] = current_file_last_write_time;
                action(file.path().string(), eFileStatus::created);
            } 
            else // File modification
            {
                if(paths_[file.path().string()] != current_file_last_write_time) 
                {
                    paths_[file.path().string()] = current_file_last_write_time;
                    action(file.path().string(), eFileStatus::modified);
                }
            }
        }
    }
};