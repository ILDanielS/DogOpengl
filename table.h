#pragma once
#include <array>
#include <gl\freeglut.h>

class Table
{
	std::array<GLfloat, 3> position;
	GLfloat leg_length;
	GLfloat leg_height;
	GLfloat table_gap;

	void drawQuad(GLfloat length, GLfloat height);

public:
	Table(std::array<GLfloat, 3> pos = { 2.0f, 0, 2.0f },
		  GLfloat leg_length = 0.4f, 
		  GLfloat leg_height = 1.8f,  
		  GLfloat table_gap = 1.6f
	);
	~Table() = default;

	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);
	void draw();
};

