#pragma once
#include <GL/freeglut.h>
#include <functional>

class Tail {
public:
	Tail();
	bool getIsMoving();
	void setIsMoving(bool isMoving);
	GLfloat getHorizontalAngle();
	void setHorizontalAngle(GLfloat angle);
	GLfloat getVerticalAngle();
	void setVerticalAngle(GLfloat angle);
	GLfloat getWiggleAngle();
	void setWiggleAngle(GLfloat angle);
	void draw();
	~Tail() = default;
private:
	bool isMoving;
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
	GLfloat wiggleAngle;
};