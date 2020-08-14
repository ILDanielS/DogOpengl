#pragma once
#include <GL/freeglut.h>
#include <functional>

class Tail {
public:
	Tail();
	bool isMoving;
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
	void draw();
	void movement();
	void setMoving(bool isMoving);
	~Tail() = default;
private:
	GLfloat wiggleAngle;
	bool isMovingLeft;
};