#version 460

#extension GL_KHR_vulkan_glsl : enable

layout (location = 0) out vec4 outColor;

void main() {
  outColor = vec4(1.0, 0.0, 0.0, 1.0);
}