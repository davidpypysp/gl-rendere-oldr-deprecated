#ifndef GL_EXAMPLES
#define GL_EXAMPLES
#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

namespace gl_examples
{
    void framebuffer_size_callback(GLFWwindow *window, int width, int height);
    void processInput(GLFWwindow *window);

    int HelloWindow();
    int HelloTriangle();
    int Shaders();
    int TexturesCombined();
    int Transformations();
} // namespace gl_examples

#endif