#pragma once
//#include <vector>
#include <GL\freeglut.h>
class Floor
{
public:
	GLfloat color[4];
	int startx, startz, endx, endz;

	Floor();
	void draw();
	~Floor() = default;
};

