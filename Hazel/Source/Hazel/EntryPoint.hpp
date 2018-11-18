#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, const char* argv[])
{
	Hazel::Log::Init();
	HZ_CORE_ERROR("Initialized Log!");
	HZ_INFO("Hello!");
	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();

	delete app;
	return 0;
}

#endif
