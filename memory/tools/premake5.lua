
----------------------------
-- Premake Project Generator
----------------------------
-- Environment vars
PYTHON_DIR = "C:/Program Files (x86)/Python310-32"

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

project "Memory"
    kind "SharedLib"
    targetextension ".dll"
    
    files { 
        "../include/**", 
        "../src/**"
    }
    includedirs {
        "../include/",
        PYTHON_DIR .. "/include/", 
    }

    libdirs {
        "../lib/",
        PYTHON_DIR .. "/libs/"
    }

    links {
        "PyLoader.lib",
    }

    filter "configurations:Debug"
        symbols "On"

    filter "configurations:Release"
        optimize "On"
        