#pragma once
#include <memory>
namespace oil {
    class RenderingApi
    {
        RenderingApi() = default;
        virtual ~RenderingApi() = default;
        virtual std::shared_ptr<RenderingApi> Init() = 0;
    };
}