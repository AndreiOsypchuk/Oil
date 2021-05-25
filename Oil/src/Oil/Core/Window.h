#pragma once

namespace oil {
    struct WindowProps
    {
        const char *Title;
        uint32_t Width;
        uint32_t Height;
        WindowProps(uint32_t width = 750, uint32_t height = 450, const char *title = "New Window")
            : Width(width), Height(height), Title(title) {};
    };

    class Window
    {
    public:
        Window() = default;
        virtual ~Window() = default;
        virtual void Begin() = 0;
        virtual void End() = 0;
        static std::shared_ptr<Window> Create(const WindowProps &props = WindowProps());
    };
}