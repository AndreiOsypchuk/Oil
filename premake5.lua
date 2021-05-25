workspace "Oil"
    architecture "x86_64"
    configurations {
        "Debug",
        "Release"
    }


    include "Oil/vendor/GLFW"
    include "Oil/vendor/GLAD"
    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
    includeDirs = {}
    includeDirs["Oil"] = "%{wks.location}/Oil/src"
    includeDirs["spd"] = "%{wks.location}/Oil/vendor/spdlog/include"
    includeDirs["GLFW"] = "%{wks.location}/Oil/vendor/GLFW/include"
    includeDirs["GLAD"] = "%{wks.location}/Oil/vendor/GLAD/include"
    project "Oil"
        location "Oil"
        language "C++"
        cppdialect "C++17"
        kind "StaticLib"
        staticruntime "off"

        targetdir ("%{wks.location}/bin/"..outputdir.."/%{prj.name}")
        objdir ("%{wks.location}/bin-int/"..outputdir.."/%{prj.name}")
        pchheader "pch.h"
        pchsource "%{prj.location}/src/pch.cpp"

        files {
            "%{prj.location}/src/**.cpp",
            "%{prj.location}/src/**.h",
        }

        defines {
            "GLFW_INCLUDE_NONE"
        }

        includedirs {
            "%{includeDirs.Oil}",
            "%{includeDirs.spd}",
            "%{includeDirs.GLFW}",
            "%{includeDirs.GLAD}",
        }

        links {
            "X11",
            "dl",
            "pthread",
            "GLFW",
            "GLAD",
        }

    project "Sandbox"
        location "Sandbox"
        language "C++"
        cppdialect "C++17"
        kind "ConsoleApp"
        staticruntime "on"

        targetdir("%{wks.location}/bin/".. outputdir.."/%{prj.name}")
        objdir("%{wks.location}/bin-int/".. outputdir.."/%{prj.name}")

        files {
            "%{prj.location}/src/**.cpp",
            "%{prj.location}/src/**.h",
        }

        includedirs {
            "%{includeDirs.Oil}"
        }

        links {
            "Oil"
        }



