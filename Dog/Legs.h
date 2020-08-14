#pragma once
#include <GL/freeglut.h>
#include <functional>

class Legs {
public:
	Legs();
	bool isMoving;
	void draw();
	void movement();
	void setMoving(bool isMoving);
	~Legs() = default;
private:
	GLfloat angle;
	bool isMovingStraight;
};