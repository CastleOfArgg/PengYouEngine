#pragma once
#include "PengYou.h"

extern PY::Application *PY::CreateApplication();

int main(int argc, char *argv[]) {
	auto app = PY::CreateApplication();

	app->start();

	delete app;
}