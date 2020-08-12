#pragma once
#include <GL/freeglut.h>
#include <functional>

class Head {
public:
	Head() = default;
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
	bool isMoving;
	void draw();
	~Head() = default;
};