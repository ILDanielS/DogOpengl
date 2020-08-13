#include "Dog.h"
#include <gl\freeglut.h>

Dog::Dog(): nextMove(nullptr),
isMoving(false) {};

void Dog::initialize() {
	GLfloat viewModelMatrix[16];
	glGetFloatv(GL_MODELVIEW_MATRIX, viewModelMatrix);
	glLoadIdentity();

	glRotatef(-90.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(-0.5, 3.5f * 0.30f, -2.8f);

	glGetFloatv(GL_MODELVIEW_MATRIX, local);
	glLoadMatrixf(viewModelMatrix);
}

void Dog::draw() {
	this->dogInMovement();

	glPushMatrix();
	
	GLfloat color[4] = { 0.92f, 0.814f, 0.382f, 1.0f },
			dog_specular[] = { 0.1f, 0.1f, 0.1f },
			dog_shininess = 0.1f;
	
	glColor4fv(color);
	glMaterialfv(GL_FRONT, GL_SPECULAR, dog_specular);
	glMaterialf(GL_FRONT, GL_SHININESS, dog_shininess);
	glMaterialf(GL_FRONT, GL_EMISSION, 0);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);

	body.draw();
	head.draw();
	legs.draw();

	glPopMatrix();
}

void Dog::dogInMovement() {
	tail.movement();
	legs.movement();
}