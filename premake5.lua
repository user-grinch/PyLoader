
----------------------------
-- Project Generator
----------------------------
-- Environment vars
PSDK_DIR = os.getenv("PLUGIN_SDK_DIR")
PYTHON_DIR = "C:/Program Files (x86)/Python38-32"
GTASA_DIR = "F:/GTASanAndreas"

if (PSDK_DIR == nil) then
    error("PLUGIN_SDK_DIR environment variable not set")
end

if (PSDK_DIR == nil) then
    error("PLUGIN_SDK_DIR environment variable not set")
end
----------------------------

workspace "PyLoader"
    configurations { "Debug", "Release" }
    architecture "x86"
    platforms "Win32"
    language "C++"
    cppdialect "C++20"
    characterset "MBCS"
    staticruntime "On"
    location "build"
    linkoptions "/SAFESEH:NO"
    
project "PyLoader"
    kind "SharedLib"
    targetdir (GTASA_DIR)
    targetextension ".asi"
    
    files { 
        "src/**.h", 
        "src/**.hpp", 
        "src/**.cpp" 
    }
    includedirs {
        PSDK_DIR .. "/plugin_sa/",
        PSDK_DIR .. "/plugin_sa/game_sa/",
        PSDK_DIR .. "/shared/",
        PSDK_DIR .. "/shared/game/",
        PYTHON_DIR .. "/include/"
    }
    libdirs {
        PSDK_DIR .. "/output/lib",
        "src/depend/",
        PYTHON_DIR .. "/libs/"
    }

    defines { 
        "NDEBUG",
        "GTASA",
        "PLUGIN_SGV_10US",
        "_CRT_SECURE_NO_WARNINGS",
        "_CRT_NON_CONFORMING_SWPRINTFS",
    }

    filter "configurations:Debug"
        symbols "On"
        links { 
            "plugin_d.lib",
            "bass.lib",
            "urlmon" 
        }

    filter "configurations:Release"
        optimize "On"
        links { 
            "plugin.lib",
            "bass.lib",
            "urlmon"  
        }
        