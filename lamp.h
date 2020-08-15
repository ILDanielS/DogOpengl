#pragma once
#include <array>
#include <gl\freeglut.h>
class Lamp
{
public:
	Lamp();
	void draw();
	~Lamp() = default;

	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);
private:
	std::array<GLfloat, 3> position;
};

