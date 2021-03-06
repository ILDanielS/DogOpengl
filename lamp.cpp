#include "lamp.h"

Lamp::Lamp() : position({ 3.0f, 0, 8.0f }) {
	glEnable(GL_LIGHT1);
}

std::array<GLfloat, 3> Lamp::getPosition() {
	return this->position;
}
void Lamp::setPosition(std::array<GLfloat, 3> pos) {
	this->position = pos;
}

void Lamp::draw() {
	glRotated(-90, 1, 0, 0);
	GLUquadric* quad = gluNewQuadric();
	gluQuadricDrawStyle(quad, GLU_FILL);
	gluQuadricNormals(quad, GLU_SMOOTH);

	GLfloat color1[4] = { 0.85f, 0.64f, 0.12f };
	GLfloat color2[4] = { 0.94f, 0.93f, 0.79f };

	GLfloat specular[] = { 1.0f, 1.0f, 1.0f };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, 60.0f);
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, color1);

	// base
	gluCylinder(quad, 0.4f, 0.4f, 0.2f, 20, 20);

	// base head
	glTranslated(0, 0, 0.2f);
	gluDisk(quad, 0, 0.4f, 20, 20);

	// body
	gluCylinder(quad, 0.1f, 0.1f, 4.0f, 20, 20);

	// light 
	glTranslated(0, 0, 4.0f);

	// lamp head
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, color2);
	gluCylinder(quad, 1.0f, 0.4f, 2.0f, 20, 20);

	GLfloat pos_arr[3] = { 0,0,0 };
	GLfloat dir_arr[3] = { 0, 0, -1 };

	glLightfv(GL_LIGHT1, GL_DIFFUSE, color_arr);
	glLightfv(GL_LIGHT1, GL_SPECULAR, color_arr);
	glLightfv(GL_LIGHT1, GL_POSITION, pos_arr);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dir_arr);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 40.0f);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 0.0f);
}

void Lamp::setState(bool state) {
	state ? glEnable(GL_LIGHT1) : glDisable(GL_LIGHT1);
}