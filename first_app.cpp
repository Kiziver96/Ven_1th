#include "first_app.hpp"

namespace lve {

    void FirstApp::run() {
        while (!LveEnWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}