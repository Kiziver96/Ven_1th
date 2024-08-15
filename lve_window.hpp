#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>
namespace lve {

	class LveEnWindow {
	public:
		LveEnWindow(int w, int h, std::string name);
		~LveEnWindow();

		LveEnWindow(const LveEnWindow&) = delete;
		LveEnWindow& operator=(const LveEnWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }

		void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

	private:
		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;
	};
}