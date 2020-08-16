#pragma once
#include <GL/freeglut.h>
#include <functional>

class Head {
public:
	Head();
	bool getIsMoving();
	void setIsMoving(bool isMoving);
	GLfloat getHorizontalAngle();
	void setHorizontalAngle(GLfloat angle);
	GLfloat getVerticalAngle();
	void setVerticalAngle(GLfloat angle);
	void draw();
	~Head() = default;
private:
	bool isMoving;
	GLfloat horizontalAngle;
	GLfloat verticalAngle;
};