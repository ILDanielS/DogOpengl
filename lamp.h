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
	GLfloat color_arr[3] = { 1.0f, 0.56f, 0.16f };
	void setState(bool);
};

