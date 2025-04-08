#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stella::Application* Stella::CreateApplication();

int main(int argc, char** argv) 
{

	Stella::Log::Init();
	ST_CORE_WARN("Initialized Log!");
	ST_INFO("Hello!");

	auto app = Stella::CreateApplication();
	app->Run();
	delete app;
}

#endif