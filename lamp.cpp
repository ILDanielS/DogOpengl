#include "lamp.h"

Lamp::Lamp() : position({ 8.0f, 0, 8.0f }) {}

void Lamp::draw() {
	glRotated(-90, 1, 0, 0);
	GLUquadric* quad = gluNewQuadric();
	gluQuadricDrawStyle(quad, GLU_FILL);
	gluQuadricNormals(quad, GLU_SMOOTH);

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
	gluCylinder(quad, 1.0f, 0.4f, 2.0f, 20, 20);

	glLoadIdentity();

	GLfloat color_arr[3] = { 1.0f, 0.56f, 0.16f };
	GLfloat pos_arr[3] = { position[0], position[1]+0.4f+0.2f, position[2] };
	GLfloat dir_arr[3] = { 0, -1, 0 };

	glEnable(GL_LIGHT1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, color_arr);
	glLightfv(GL_LIGHT1, GL_SPECULAR, color_arr);
	glLightfv(GL_LIGHT1, GL_POSITION, pos_arr);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dir_arr);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 20.0f);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 0.0f);


	

}

std::array<GLfloat, 3> Lamp::getPosition() {
	return position;
}
void Lamp::setPosition(std::array<GLfloat, 3> pos) {
	position = pos;
}

