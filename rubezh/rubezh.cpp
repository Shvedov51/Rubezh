#include <iostream>
#include <glad/glad.h> //https://www.reddit.com/r/cpp_questions/comments/ryr3fk/good_explanations_of_differences_between_glfw/?tl=ru
#include <GLFW/glfw3.h>

void main()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(400, 400, "Rubezh", NULL, NULL);

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, NULL);

    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    glClearColor(0.5, 0.5, 0.5, 1);

    while (!glfwWindowShouldClose(window)) 
    {
        glClear(GL_COLOR_BUFFER_BIT);



        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate(); 
}
