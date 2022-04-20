
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
    linkoptions "/SAFESEH:NO"
    
project "opcodes"
    kind "SharedLib"
    targetextension ".dll"
    
    defines { 
        "IS_PLATFORM_WIN",
        "_CRT_SECURE_NO_WARNINGS",
        "_CRT_NON_CONFORMING_SWPRINTFS",
        "GTASA",
        "PLUGIN_SGV_10US"
    }

    files { 
        "../include/**", 
        "../src/**"
    }
    includedirs {
        "../include/",
        PYTHON_DIR .. "/include/", 
        PSDK_DIR .. "/plugin_sa/",
        PSDK_DIR .. "/plugin_sa/game_sa/",
        PSDK_DIR .. "/shared/",
        PSDK_DIR .. "/shared/game/"
    }

    libdirs {
        "../libs",
        PYTHON_DIR .. "/libs/",
        PSDK_DIR .. "/output/lib"
    }

    filter "configurations:Debug"
        symbols "On"
        links {
            "PyLoader",
            "plugin_d"
        }

    filter "configurations:Release"
        optimize "On"
        links {
            "PyLoader",
            "plugin"
        }
        