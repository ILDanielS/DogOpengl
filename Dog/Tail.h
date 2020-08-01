#pragma once
#include <GL/freeglut.h>
#include <functional>

class Tail {
public:
	Tail();
	bool isMoving;
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
	bool isMoving;
	void draw();
	void movement();
	~Tail() = default;
private:
	GLfloat wiggleAngle;
	bool isMovingLeft;
};