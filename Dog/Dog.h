#pragma once
#include <array>
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
	Dog();
	Body body;
	Legs legs;
	Head head;
	Tail tail;
	void setIsMoving(bool isMoving);
	bool getIsMoving();
	GLfloat localAxys[16];
	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);
	std::function<void()>nextMove;	
	void initialize();
	void draw();
	~Dog() = default;

private:
	bool isMoving;
	std::array<GLfloat, 3> position;
	void dogMovement();
};