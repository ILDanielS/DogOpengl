#include "Legs.h"

Legs::Legs() :isMoving(false),
angle(0.0f),
isMovingStraight(true) {};

bool Legs::getIsMoving() {
	return this->isMoving;
}

void Legs::setIsMoving(bool isMoving) {
	this->isMoving = isMoving;
}

GLfloat Legs::getAngle() {
	return this->angle;
}

void Legs::setAngle(GLfloat angle) {
	this->angle = angle;
}

void Legs::draw() {
		
	glPushMatrix();
	glRotatef(angle, 1, 0, 0);
	glTranslated(-0.3f, -0.5f, -0.6f);
	glScalef(0.15f, 0.6f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-angle, 1, 0, 0);
	glTranslated(0.3f, -0.5f, -0.6f);
	glScalef(0.15f, 0.6f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle, 1, 0, 0);
	glTranslated(0.3f, -0.5f, 0.6f);
	glScalef(0.15f, 0.6f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-angle, 1, 0, 0);
	glTranslated(-0.3f, -0.5f, 0.6);
	glScalef(0.15f, 0.6f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();
}

void Legs::movement() {
	if (isMoving) {
		if (angle > 20 || angle < -20)
		{
			isMovingStraight = !isMovingStraight;
		}

		if (isMovingStraight)
		{
			angle += 5.0;
		}
		else {
			angle -= 5.0;
		}

		this->isMoving = false;
	}
}