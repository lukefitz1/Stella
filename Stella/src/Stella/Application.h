#pragma once

#include "Core.h"

namespace Stella {

	class STELLA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}