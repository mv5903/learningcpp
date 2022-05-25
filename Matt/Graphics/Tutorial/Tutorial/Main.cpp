#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

//Self-made header file to simplify code
#include "GraphicObject.h"

// Shader sources
const char* vertexShaderSource = "#version 330 core\n"
"layout (location = 0) in vec3 aPost;\n"
"void main()\n"
"{\n"
"	gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\0";
const char* fragmentShaderSource = "#version 330 core\n"
"out vec4 FragColor;\n"
"void main()\n"
"{\n"
"	FragColor = vec4(0.8f, 0.3f, 0.02f, 1.0f);\n"
"}\n\0";


int main() {
	int test[] = { 1, 2, 3, 4, 5 };
	//Debug
	//GraphicObject obj = new* GraphicObject(&test);



	const int WIDTH = 800;
	const int HEIGHT = 800;

	// Initialize GLFW instance
	glfwInit();

	// Tell GLFW what versions we are using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


	GLfloat vertices[] =
	{
		-0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.0f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f
	};

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

	// Drawing a Triangle
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
	glCompileShader(vertexShader);

	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
	glCompileShader(fragmentShader);

	GLuint shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);

	glLinkProgram(shaderProgram);

	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);



	GLuint VAO, VBO;
	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	// Specify color background
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// Clear back buffer and assign the new color to it
	glClear(GL_COLOR_BUFFER_BIT);
	// Swap new buffer into current context
	glfwSwapBuffers(window);

	// Continuously take care of any events
	while (!glfwWindowShouldClose(window)) {
		// Specify color background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clear back buffer and assign the new color to it
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES, 0, 3);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	// Delete window before program exits
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteProgram(shaderProgram);


	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}