#pragma once
#include <array>
#include <gl\freeglut.h>
class Lamp
{

	std::array<GLfloat, 3> position;
public:
	Lamp();
	void draw();
	~Lamp() = default;

	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);
};

