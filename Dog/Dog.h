#pragma once
#include <GL/freeglut.h>
#include <functional>
#include "Body.h"
#include "Head.h"
#include "Legs.h"
#include "Tail.h"

/*
	The Dog object - render all dog's parts
*/
class Dog {
public:
	Dog() = default;
	GLfloat local[16];
	Body body;
	Legs legs;
	Head head;
	Tail tail;
	std::function<void()>nextMove;
	bool isMoving;
	void initialize();
	void draw();
	~Dog() = default;

private:
	void dogInMovement();
};