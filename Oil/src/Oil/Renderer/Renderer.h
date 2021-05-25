#pragma once
#include "RenderingApi.h"
namespace oil {
    class Renderer
    {
    public:
        enum API {
            None = 0,
            OpenGL,
            Vulkan
        };

        static void Init();
        static void Begin() {};
        static void End() {};
        static API GetApi() { return s_Api; };


    private:
        static API s_Api;
        static std::shared_ptr<RenderingApi> s_RenderingApi;
    };
}