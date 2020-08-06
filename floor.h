#pragma once
//#include <vector>
#include <GL\freeglut.h>
class Floor
{
public:
	GLfloat color1[4];
	GLfloat color2[4];
	int startx, startz, endx, endz;

	Floor();
	void draw();
	~Floor() = default;
};

