#pragma once
#include <GL/freeglut.h>
#include <functional>

class Head {
public:
	Head();
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
	bool isMoving;
	void draw();
	~Head() = default;
};