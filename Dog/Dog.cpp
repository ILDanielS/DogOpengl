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

	//glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(4, 4, 4);
	
	glGetFloatv(GL_MODELVIEW_MATRIX, localAxys);
	glLoadMatrixf(viewModelMatrix);
}

void Dog::draw() {
	this->dogMovement();

	glPushMatrix();
	
	GLfloat color[4] = { 0.819f, 0.607f, 0.243f, 1.0f },
			dog_specular[] = { 0.1f, 0.1f, 0.1f },
			dog_shininess = 0.1f;
	
	glColor4fv(color);
	glMaterialfv(GL_FRONT, GL_SPECULAR, dog_specular);
	glMaterialf(GL_FRONT, GL_SHININESS, dog_shininess);
	glMaterialf(GL_FRONT, GL_EMISSION, 0);
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