#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main()
{
	// Init 
	glfwInit();

	// Create window obj
	GLFWwindow* window = glfwCreateWindow(800, 800, "I made this to change color", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create window object" << std::endl;
		glfwTerminate();
		return -1;
	}

	// Make context current
	glfwMakeContextCurrent(window);

	// Configure GLFW using glad
	gladLoadGL();

	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	// Setup viewport
	glViewport(0, 0, 800, 800);

	// TODO: Make this flash every few seconds
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}