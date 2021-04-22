project "Game"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    staticruntime "On"

    targetdir "bin/%{prj.name}"
    objdir "bin-int/%{prj.name}"

    files { "src/**.h", "src/**.hpp", "src/**.c", "src/**.cpp" }

    defines {  }

    includedirs { "%{wks.location}/PengYou/src" }

    links{ "PengYou" }

    filter "configurations:Debug"
        defines { "PY_DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "PY_RELEASE" }
        optimize "On"