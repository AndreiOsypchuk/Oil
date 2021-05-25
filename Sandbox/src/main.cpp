#include <Oil.h>

class Sandbox: public oil::Application {
    public:
    Sandbox() {};
    ~Sandbox() {};
};

oil::Application* oil::CreateApplication() {
    return new Sandbox();
}