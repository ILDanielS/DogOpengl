#pragma once
#include <GL\freeglut.h>
#include <array>

class Ball {
	GLfloat radius;
	std::array<GLfloat, 3> position;
	GLUquadric* quad;

public:
	Ball(GLfloat radius=1.0f);
	~Ball() = default;

	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);

	void draw();
};
