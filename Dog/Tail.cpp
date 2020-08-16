#include "Tail.h"
#include <gl\freeglut.h>

Tail::Tail() :isMoving(false),
horizontalAngle(0.0f),
verticalAngle(-10.0f),
wiggleAngle(0.0f) {};

bool Tail::getIsMoving() {
	return this->isMoving;
}

void Tail::setIsMoving(bool isMoving) {
	this->isMoving = isMoving;
}

GLfloat Tail::getHorizontalAngle() {
	return this->horizontalAngle;
}

void Tail::setHorizontalAngle(GLfloat angle) {
	this->horizontalAngle = angle;
}

GLfloat Tail::getVerticalAngle() {
	return this->verticalAngle;
}

void Tail::setVerticalAngle(GLfloat angle) {
	this->verticalAngle = angle;
}

GLfloat Tail::getWiggleAngle() {
	return this->wiggleAngle;
}

void Tail::setWiggleAngle(GLfloat angle) {
	this->wiggleAngle = angle;
}

void Tail::draw() {
	glPushMatrix();
	glTranslated(0.0f, 0.0f, -1.05f);
	glRotatef(-30, 1, 0, 0);
	glRotatef(verticalAngle, 1, 0, 0);
	glRotatef(horizontalAngle, 0, 1, 0);
	glRotatef(wiggleAngle, 0, 1, 0);
	glScalef(0.15f, 0.15f, 0.5f);
	glTranslated(0.0f, -0.1f, -0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();
}