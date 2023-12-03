#include "Application.h"

Application::Application()
{
}

Application::~Application()
{
}

void Application::Init()
{
}

void Application::DeInit()
{
}

void Application::Update(double deltaTime)
{
}

void Application::Render()
{
}

void Application::ProcessInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}


int main(int argc, char** argv) {
	Application app = Application();
	app.Start("Empty CG Project", 800, 600, false, false);
}