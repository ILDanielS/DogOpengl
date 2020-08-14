#pragma once
#include <GL/freeglut.h>
#include <functional>

class Body {
public:
	Body() = default;
	void draw();
	~Body() = default;
};