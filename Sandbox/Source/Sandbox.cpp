#include "Sandbox.hpp"

using namespace Hazel;

Sandbox::Sandbox()
{

}

Sandbox::~Sandbox()
{

}

Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
