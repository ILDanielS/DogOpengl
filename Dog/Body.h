#pragma once
#include <GL/freeglut.h>
#include <functional>

class Body {
public:
	Body();
	void draw();
	~Body() = default;
};