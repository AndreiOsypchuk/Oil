
extern oil::Application *oil::CreateApplication();

int main()
{
    auto app = oil::CreateApplication();
    app->Run();
    delete app;
}