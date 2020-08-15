#include "Dog.h"
#include <gl\freeglut.h>

Dog::Dog() : position({ 5, 1.1f, 3 }),
nextMove(nullptr),
isMoving(false) {};

std::array<GLfloat, 3> Dog::getPosition() {
	return this->position;
}
void Dog::setPosition(std::array<GLfloat, 3> pos) {
	this->position = pos;
}

void Dog::setMoving(bool isMoving) {
	this->isMoving = isMoving;
	this->tail.setMoving(isMoving);
	this->legs.setMoving(isMoving);
}

bool Dog::getMoving() {
	return this->isMoving;
}

void Dog::initialize() {
	GLfloat viewModelMatrix[16];
	glGetFloatv(GL_MODELVIEW_MATRIX, viewModelMatrix);
	glLoadIdentity();

	glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(-0.5f, 1, -2.8f);
	
	glGetFloatv(GL_MODELVIEW_MATRIX, local);
	glLoadMatrixf(viewModelMatrix);
}

void Dog::draw() {
	this->dogMovement();

	glPushMatrix();
	
	GLfloat color[4] = { 0.92f, 0.814f, 0.382f, 1.0f },
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
	tail.movement();
	if (this->isMoving) {
		legs.movement();
		this->isMoving = false;
	}
}