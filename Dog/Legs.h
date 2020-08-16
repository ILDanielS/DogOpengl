#pragma once
#include <GL/freeglut.h>
#include <functional>

class Legs {
public:
	Legs();
	bool getIsMoving();
	void setIsMoving(bool isMoving);
	GLfloat getAngle();
	void setAngle(GLfloat angle);
	void draw();
	void movement();
	~Legs() = default;
private:
	bool isMoving;
	GLfloat angle;
	bool isMovingStraight;
};