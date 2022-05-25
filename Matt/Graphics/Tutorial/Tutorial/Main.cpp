#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 800;

	// Initialize GLFW instance
	glfwInit();

	// Tell GLFW what versions we are using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Attempt to create a new window
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "TutorialTitle", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window!" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);

	// Have Glad load and configure OpenGL
	gladLoadGL();

	// Specify viewport size
	glViewport(0, 0, WIDTH, HEIGHT);

	// Specify color background
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// Clear back buffer and assign the new color to it
	glClear(GL_COLOR_BUFFER_BIT);
	// Swap new buffer into current context
	glfwSwapBuffers(window);

	// Continuously take care of any events
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	// Delete window before program exits
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}