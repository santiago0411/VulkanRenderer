include "Dependencies.lua"

workspace "VulkanRenderer"
	architecture "x86_64"
	startproject "VulkanRenderer"

	configurations
	{
		"Debug",
		"Release"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	include "VulkanRenderer/vendor/GLFW"
group ""

include "VulkanRenderer"