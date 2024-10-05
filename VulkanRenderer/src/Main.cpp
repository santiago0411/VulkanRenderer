#include <iostream>

#include <GLFW/glfw3.h>

constexpr int WINDOW_WIDTH = 1920;
constexpr int WINDOW_HEIGHT = 1080;

int main()
{
	if (!glfwInit())
	{
		std::cerr << "Failed to initialize glfw!!\n";
		return -1;
	}

	if (!glfwVulkanSupported())
	{
		std::cerr << "Vulkan is not supported!!\n";
		return -1;
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	GLFWwindow* window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Vulkan Renderer", nullptr, nullptr);

	if (!window)
	{
		std::cerr << "Failed to create glfw window!!\n";
		return -1;
	}

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}