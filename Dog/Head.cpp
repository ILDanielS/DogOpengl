#include "Head.h"
#include <gl\freeglut.h>

Head::Head() : horizontalAngle(0.0f),
verticalAngle(10.f),
isMoving(false) {};

bool Head::getIsMoving() {
	return this->isMoving;
}

void Head::setIsMoving(bool isMoving) {
	this->isMoving = isMoving;
}

GLfloat Head::getHorizontalAngle() {
	return this->horizontalAngle;
}

void Head::setHorizontalAngle(GLfloat angle) {
	this->horizontalAngle = angle;
}

GLfloat Head::getVerticalAngle() {
	return this->verticalAngle;
}

void Head::setVerticalAngle(GLfloat angle) {
	this->verticalAngle = angle;
}

void Head::draw() {
	glPushMatrix();
	glRotatef(verticalAngle, 1, 0, 0);
	glRotatef(horizontalAngle, 0, 1, 0);

	//head
	glPushMatrix();
	glTranslated(0.0f, 0.7f, 1.1f);
	glScalef(0.45f, 0.465f, 0.5f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	// ears
	glPushMatrix();
	glTranslated(-0.5f, 0.8f, 1);
	glScalef(0.15f, 0.2f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.5f, 0.8f, 1);
	glScalef(0.15f, 0.2f, 0.15f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();
	
	//nose

	GLfloat spec[] = { 0.4f, 0.4f, 0.4f };
	GLfloat brown[] = { 0.349, 0.235, 0.121, 1 };
	
	glColor4fv(brown);	
	glMaterialf(GL_FRONT, GL_SHININESS, 1.0f);
	glMaterialfv(GL_FRONT, GL_SPECULAR, spec);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, brown);

	glPushMatrix();
	glTranslated(0.0f, 0.7f, 1.6f);
	glScalef(0.07f, 0.1f, 0.07f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();

	//eyes

	GLfloat black[] = { 0,0,0,1 };
	glColor4fv(black);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, black);

	glPushMatrix();
	glTranslated(0.15f, 0.9f, 1.5f);
	glScalef(0.075f, 0.075f, 0.075f);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.15f, 0.9f, 1.5f);
	glScalef(0.075f, 0.075f, 0.075f);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
}

