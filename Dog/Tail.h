#pragma once
#include <GL/freeglut.h>
#include <functional>

class Tail {
public:
	Tail() = default;
	bool isMoving;
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
	void draw();
	void movement();
	~Tail() = default;
private:
	GLfloat wiggleAngle;
	bool isMovingLeft;
};