#pragma once

namespace oil
{
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();

    private:
        bool m_Running = false;
    };

    Application *CreateApplication();
}