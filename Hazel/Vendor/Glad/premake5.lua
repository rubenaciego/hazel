project "Glad"
   	kind "StaticLib"
	language "C"
	cdialect "C11"
    
    	targetdir ("Binaries/" .. outputdir .. "/%{prj.name}")
   	objdir ("Intermediates/" .. outputdir .. "/%{prj.name}")

	files
	{
           "include/glad/glad.h",
           "include/KHR/khrplatform.h",
           "src/glad.c",
    	}

	includedirs
	{
	   "include"
	}
    
	filter "system:windows"
        systemversion "latest"
        staticruntime "On"

    	filter { "system:windows", "configurations:Release" }
        buildoptions "/MD"
