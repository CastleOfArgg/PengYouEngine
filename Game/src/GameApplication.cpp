
#include<PengYou.h>
#include<Core/EntryPoint.h>

class Game : public PY::Application {
public:
	Game() {}
	~Game() {}
};

PY::Application* PY::CreateApplication()
{
	return new Game();
}