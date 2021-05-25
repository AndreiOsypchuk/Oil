#pragma once
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include <spdlog/sinks/stdout_color_sinks.h>
namespace oil
{
    class Log
    {
    public:
        static void Init();
        static const std::shared_ptr<spdlog::logger> &CoreLogger() { return s_CoreLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
    };
};

#define CORE_TRACE(...) ::oil::Log::CoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...) ::oil::Log::CoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...) ::oil::Log::CoreLogger()->warn(__VA_ARGS__)
#define CORE_ERR(...) ::oil::Log::CoreLogger()->error(__VA_ARGS__)