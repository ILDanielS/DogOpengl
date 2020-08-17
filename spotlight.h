#pragma once
#include <array>
#include <gl/freeglut.h>

class Spotlight
{
	std::array<GLfloat, 3> position;
	std::array<GLfloat, 3> lookat;
	std::array<GLfloat, 3> color;
	
public:
	Spotlight();
	void draw();

	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);
	std::array<GLfloat, 3> getCenter();
	void setCenter(std::array<GLfloat, 3> center);
	void setState(bool);

};

