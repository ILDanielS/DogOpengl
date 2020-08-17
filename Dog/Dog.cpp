#include "Dog.h"
#include <gl\freeglut.h>

Dog::Dog() : position({ 5, 1.1f, 3 }),
nextMove(nullptr),
isMoving(false) {};

void Dog::setIsMoving(bool isMoving) {
	this->isMoving = isMoving;
	this->tail.setIsMoving(isMoving);
	this->legs.setIsMoving(isMoving);
}

bool Dog::getIsMoving() {
	return this->isMoving;
}

std::array<GLfloat, 3> Dog::getPosition() {
	return this->position;
}

void Dog::setPosition(std::array<GLfloat, 3> pos) {
	this->position = pos;
}

void Dog::initialize() {
	GLfloat viewModelMatrix[16];
	glGetFloatv(GL_MODELVIEW_MATRIX, viewModelMatrix);
	glLoadIdentity();

	glTranslatef(7, 1, 7);

	glGetFloatv(GL_MODELVIEW_MATRIX, localAxys);
	glLoadMatrixf(viewModelMatrix);
}

void Dog::draw() {
	this->dogMovement();

	glPushMatrix();
	
	GLfloat color[4] = { 0.819f, 0.607f, 0.243f, 1.0f },
			spec_dog[] = { 0.1f, 0.3f, 0.2f};
	
	glColor4fv(color);
	glMaterialf(GL_FRONT, GL_EMISSION, 0);
	glMaterialf(GL_FRONT, GL_SHININESS, 0.1f);
	glMaterialfv(GL_FRONT, GL_SPECULAR, spec_dog);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);
	
	legs.draw();
	body.draw();
	tail.draw();
	head.draw();

	glPopMatrix();
}

void Dog::dogMovement() {
	if (this->isMoving) {
		legs.movement();
		this->isMoving = false;
	}
}