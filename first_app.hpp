#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"
#include "lve_device.hpp"
#include "swap_chain.hpp"
namespace lve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		LveEnWindow lveEnWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
		LveEnDevice lveDevice{ lveEnWindow };
		LveEnSwapChain LveEnSwapChain{ lveDevice,lveEnWindow.getExtend()};
		LvePipeline lvePipeline{lveDevice, "shader.vert.spv", "shader.frag.spv", LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
		
	};
}