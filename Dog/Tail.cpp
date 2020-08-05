#include <Dog.h>
#include <Body.h>
#include <Head.h>
#include <Leg.h>
#include <Tail.h>
#include <gl\freeglut.h>

Tail::Tail() :isMoving(false),
			  horizontalAngle(0.0f)
			  verticalAngle(-10.0f),
			  isMoving(false),
			  wiggleAngle(0.0f),
			  isMovingLeft(true);

void Tail::draw() {
	glPushMatrix();
	glTranslated(0.0f, 0.0f, -3.8f * 0.3f);
	glRotatef(-30, 1, 0, 0);
	glRotatef(tailVerticalAngle, 1, 0, 0);
	glRotatef(tailHorizontalAngle, 0, 1, 0);
	glRotatef(tailWiggleAngle, 0, 1, 0);
	glScalef(0.5f * 0.3f, 0.5f * 0.3f, 1.8f * 0.3f);
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