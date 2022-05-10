
----------------------------
-- Premake Project Generator
----------------------------
-- Environment vars
PYTHON_DIR = "C:/Program Files (x86)/Python310-32"
PSDK_DIR = os.getenv("PLUGIN_SDK_DIR")

if (PSDK_DIR == nil) then
    error("PLUGIN_SDK_DIR environment variable not set")
end

----------------------------
workspace "plugin"
    configurations { "Debug", "Release" }
    architecture "x86"
    platforms "Win32"
    language "C++"
    cppdialect "C++20"
    characterset "MBCS"
    staticruntime "On"
    location "../build"
    targetdir "../build/bin"

project "Misc"
    kind "SharedLib"
    targetextension ".dll"
    
    defines { 
        "GTASA",
        "PLUGIN_SGV_10US"
    }

    files { 
        "../src/**"
    }
    includedirs {
        PYTHON_DIR .. "/include/", 
        PSDK_DIR .. "/plugin_sa/",
        PSDK_DIR .. "/plugin_sa/game_sa/",
        PSDK_DIR .. "/shared/",
        PSDK_DIR .. "/shared/game/"
    }

    libdirs {
        "../lib",
        PYTHON_DIR .. "/libs/",
        PSDK_DIR .. "/output/lib"
    }

    filter "configurations:Debug"
        symbols "On"
        links {
            "plugin_d",
            "PyLoader"
        }

    filter "configurations:Release"
        optimize "On"
        links {
            "plugin",
            "PyLoader"
        }
        