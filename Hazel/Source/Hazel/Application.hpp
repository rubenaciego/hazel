#pragma once

#include <Hazel/Core.hpp>

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	/* Defined in client */
	Application* CreateApplication();
}
