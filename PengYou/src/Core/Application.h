#pragma once
#include "PengYou.h"

int main(int argc, char* argv[]);

namespace PY {
    class Application {
    public:
        Application(std::string configFile = "");
        virtual ~Application();
        

        static constexpr inline Application* const get() { return s_instance; }

    private:
        Application& operator=(const Application& app) = delete;
        Application&& operator=(Application&& app) = delete;
        
    private:
        bool start();
        bool pause();
        bool stop();

    private:
        const std::string_view m_configFile;
        bool isRunning = false;
        float m_LastFrameTime = 0.0f;

    private:
        static Application* s_instance;
        friend int ::main(int argc, char *argv[]);
    };

    //Defined in Client
    Application* CreateApplication();
}