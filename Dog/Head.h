#pragma once
#include <GL/freeglut.h>
#include <functional>

class Head {
public:
	Head();
	bool isMoving;
	void draw();
	GLfloat getHorizontalAngle();
	void setHorizontalAngle(GLfloat angle);
	GLfloat getVerticalAngle();
	void setVerticalAngle(GLfloat angle);
	~Head() = default;
private:
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
};