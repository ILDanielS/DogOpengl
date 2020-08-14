#include "Head.h"
#include <gl\freeglut.h>

Head::Head() : horizontalAngle(0.0f),
verticalAngle(10.f),
isMoving(false) {};

void Head::draw() {
	glPushMatrix();
	glRotatef(verticalAngle, 1, 0, 0);
	glRotatef(horizontalAngle, 0, 1, 0);

	//head
	glPushMatrix();
	glTranslated(0.0f, 0.7f, 0.9f);
	glScalef(0.45f, 0.465f, 0.5f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	//nose
	glPushMatrix();
	glTranslated(0.0f, 0.6f, 1.3f);
	glScalef(0.24f, 0.15f, 0.45f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	//ears
	glPushMatrix();
	glTranslated(-0.24f, 1.14f, 0.78f);
	glScalef(0.15f, 0.3f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.24f, 3.8f * 0.3f, 2.6f * 0.3f);
	glScalef(0.5f * 0.3f, 1.0f * 0.3f, 0.5f * 0.3f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	//eyes
	GLfloat eyes_specular[] = { 0.4f, 0.4f, 0.4f },
		eyes_shininess = 1.0f;
	GLfloat black[] = { 0,0,0,1 };
	glColor4fv(black);
	glMaterialfv(GL_FRONT, GL_SPECULAR, eyes_specular);
	glMaterialf(GL_FRONT, GL_SHININESS, eyes_shininess);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, black);

	glPushMatrix();
	glTranslated(0.5f * 0.3f, 3.0f * 0.3f, 4.4f * 0.3f);
	glScalef(0.25f * 0.3f, 0.25f * 0.3f, 0.25f * 0.3f);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.5f * 0.3f, 3.0f * 0.3f, 4.4f * 0.3f);
	glScalef(0.25f * 0.3f, 0.25f * 0.3f, 0.25f * 0.3f);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
}