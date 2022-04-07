
----------------------------
-- Premake Project Generator
----------------------------
-- Environment vars
PYTHON_DIR = "C:/Program Files (x86)/Python310-32"

----------------------------
workspace "PyLoader"
    configurations { "Debug", "Release" }
    architecture "x86"
    platforms "Win32"
    language "C++"
    cppdialect "C++20"
    characterset "MBCS"
    staticruntime "On"
    location "../build"
    targetdir "../build/bin"
        
project "PyLoader"
    kind "SharedLib"
    targetextension ".asi"
    
    files { 
        "../depend/**",
        "../src/**", 
    }
    removefiles { 
        "../src/sdk/**"
    }
    includedirs {
        "../depend/",
        PYTHON_DIR .. "/include/", 
    }

    libdirs {
        "../depend/libs/",
        PYTHON_DIR .. "/libs/"
    }
    
    pchheader "pch.h"
    pchsource "../src/pch.cpp"

    filter "configurations:Debug"
        symbols "On"

    filter "configurations:Release"
        optimize "On"