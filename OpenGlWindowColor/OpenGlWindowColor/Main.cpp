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

	// Setup viewport
	glViewport(0, 0, 800, 800);

	glClearColor(0.07f, 0.73f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	// TODO: Make this flash every few seconds
	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.57f, 0.92f, 0.56f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}