#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Stella {

	class STELLA_API Log
	{
		public:
			static void Init();

			inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
			inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

		private:
			static std::shared_ptr<spdlog::logger> s_CoreLogger;
			static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// what the fuck is this
// core log macros
#define ST_CORE_TRACE(...) ::Stella::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ST_CORE_INFO(...) ::Stella::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_WARN(...) ::Stella::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_ERROR(...) ::Stella::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_FATAL(...) ::Stella::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ST_TRACE(...) ::Stella::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ST_INFO(...) ::Stella::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_WARN(...) ::Stella::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_ERROR(...) ::Stella::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_FATAL(...) ::Stella::Log::GetClientLogger()->fatal(__VA_ARGS__)