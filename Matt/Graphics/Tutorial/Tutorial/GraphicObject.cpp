#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "GraphicObject.h"

using namespace std;

class GraphicObject {
	//GLfloat vertices[];
	int vertices[];
	public:
		GraphicObject(int vertices[]) {
			for (int i = 0; i < sizeof(vertices) / sizeof(GLfloat); ++i) {
				this->vertices[i] = vertices[i];
			}
		}
};


ostream& operator <<(ostream& outputStream, const GraphicObject& p) {
	return outputStream << "Works";
}