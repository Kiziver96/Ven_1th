#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"
#include "lve_device.hpp"
#include "swap_chain.hpp"
#include "memory"
#include "vector"
namespace lve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		FirstApp();
		~FirstApp();

		FirstApp(const FirstApp&) = delete;
		FirstApp& operator=(const FirstApp&) = delete;

		void run();

	private:
		void createPipelineLayout();
		void createPipeline();
		void createCommandBuffers();
		void drawFrame();

		LveEnWindow lveEnWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
		LveEnDevice lveDevice{ lveEnWindow };
		LveEnSwapChain lveEnSwapChain{ lveDevice,lveEnWindow.getExtend()};
		std::unique_ptr<LvePipeline> lvePipeline;
		VkPipelineLayout pipelineLayout;
		std::vector<VkCommandBuffer> commandBuffers;
		
		
	};
}