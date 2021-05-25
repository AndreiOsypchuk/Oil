project "GLAD"
	architecture "x64"
	configurations { "Debug", "Release" }
	language "C"
	kind "StaticLib"
	staticruntime "on"

	targetdir ("bin/%{cfg.system}-%{cfg.buildcfg}/%{prj.name}")
	objdir ("bin-int/%{cfg.system}-%{cfg.buildcfg}/%{prj.name}")

	files
	{
		"src/glad.c",
		"include/glad/glad.h",
		"include/KHR/khrplatform.h"
	}
	includedirs
	{
		"include"
	}


	filter "configurations:Debug"
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        runtime "Release"
        optimize "on"
