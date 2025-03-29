#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STELLA_API __declspec(dllexport)
	#else
		#define STELLA_API __declspec(dllimport)
	#endif
#else
	#error Stella only supports Windows!
#endif