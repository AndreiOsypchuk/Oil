#include "pch.h"
#include "Renderer.h"


namespace oil {
    Renderer::API Renderer::s_Api = Renderer::API::OpenGL;
    void Renderer::Init()
    {
        switch (s_Api)
        {
        case API::OpenGL: break;
        case API::Vulkan: break;
        }
    }
}