#pragma once

#include <string>
#include <vector>
#include "lve_device.hpp"

namespace lve {

	struct PipelineConfigInfo
	{

	};


	class LvePipeline {
	public:
		LvePipeline(
			LveEnDevice &device,
			const std::string& vertFilepath,
			const std::string& fragFilepath, 
			const PipelineConfigInfo & configinfo);
		~LvePipeline() {}

		LvePipeline(const LvePipeline&) = delete;
		void operator= (const LvePipeline&) = delete;

		static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);

	private:
		static std::vector<char> readFile(const std::string& filepath);

		void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath, const PipelineConfigInfo &configinfo);
		
		void createShaderModule(const std::vector<char>& code, VkShaderModule *shaderModule);

		LveEnDevice& lveDevice;
		VkPipeline graphicsPipeline;
		VkShaderModule vertShaderModule;
		VkShaderModule fragShaderModule;


	};

}  // namespace lve