#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stella::Application* Stella::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Stella::CreateApplication();
	app->Run();
	delete app;
}

#endif