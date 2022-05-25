#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class GraphicObject {
	GLfloat vertices[];

public:
	GraphicObject(GLfloat vertices[]);
	void draw();
	void useProgram();
};