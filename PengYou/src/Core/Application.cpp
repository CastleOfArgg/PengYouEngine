#include "Application.h"


namespace PY {

    Application* Application::s_instance = nullptr;


    Application::Application(std::string configFile): m_configFile(configFile){
        s_instance = this;
    }


    Application::~Application() {}


    bool Application::start() {
        std::cout << "Start\n";
        return true;
    }


    bool Application::pause() {
        std::cout << "Pause\n";
        return true;
    }


    bool Application::stop() {
        std::cout << "Stop\n";
        return true;
    }

}