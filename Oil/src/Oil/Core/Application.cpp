#include "pch.h"
#include "Application.h"

namespace oil
{
    Application::Application()
    {
        Log::Init();
        CORE_INFO("Application initialized");
    };
    Application::~Application(){

    };
    void Application::Run()
    {
        CORE_INFO("Running");
        while (m_Running)
        {
        }
    };
}