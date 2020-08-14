#include "Tail.h"
#include <gl\freeglut.h>

Tail::Tail() :isMoving(false),
horizontalAngle(0.0f),
verticalAngle(-10.0f),
wiggleAngle(0.0f),
isMovingLeft(true) {};

void Tail::draw() {
	glPushMatrix();
	glTranslated(0.0f, 0.0f, -1.2f);
	glRotatef(-30, 1, 0, 0);
	glRotatef(verticalAngle, 1, 0, 0);
	glRotatef(horizontalAngle, 0, 1, 0);
	glRotatef(wiggleAngle, 0, 1, 0);
	glScalef(0.15f, 0.15f, 0.5f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();
}

void Tail::movement() {
	if (isMoving) {
		if (wiggleAngle > 8 || wiggleAngle < -8)
		{
			isMovingLeft = !isMovingLeft;
		}
		if (isMovingLeft)
		{
			wiggleAngle += 1.7f;
		}
		else {
			wiggleAngle -= 1.7f;
		}
		isMoving = false;
	}
}

void Tail::setMoving(bool isMoving) {
	this->isMoving = isMoving;
}