#include "Legs.h"

Legs::Legs() :isMoving(false),
angle(0.0f),
isMovingStraight(true) {};

void Legs::draw() {
	glPushMatrix();
	glRotatef(angle, 1, 0, 0);
	glTranslated(-1 * 0.3, -2.5 * 0.3, -2 * 0.3);
	glScalef(0.5f * 0.3f, 2.0f * 0.3f, 0.5f * 0.3f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-angle, 1, 0, 0);
	glTranslated(0.3f, -2.5f * 0.3f, -0.6);
	glScalef(0.5f * 0.3f, 0.6f, 0.5f * 0.3f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glRotatef(angle, 1, 0, 0);
	glTranslated(0.3f, -2.5f * 0.3f, 2.0 * 0.3f);
	glScalef(0.5f * 0.3f, 2.0f * 0.3f, 0.5f * 0.3f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glRotatef(-angle, 1, 0, 0);
	glTranslated(-0.3f, -2.5f * 0.3f, 0.6);
	glScalef(0.5f * 0.3f, 2.0f * 0.3f, 0.5f * 0.3f);
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
			angle += 6.0;
		}
		else {
			angle -= 6.0;
		}
		isMoving = false;
	}
}