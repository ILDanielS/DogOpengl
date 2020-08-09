#include "ball.h"
#include "stb_image.h"

Ball::Ball(GLfloat radius) : radius(radius), texture(0), position({ 5, radius, 5 }), quad(gluNewQuadric()){}

void Ball::draw() {
	glEnable(GL_BLEND);

	GLfloat ambient[] = { 0.5f, 0.5f, 0.5f },
		diffuse[] = { 0.9f, 0.9f, 0.9f },
		specular[] = { 1.0f, 1.0f, 1.0f },
		shininess = 128.0f;

	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);

	gluQuadricDrawStyle(quad, GLU_FILL);
	gluQuadricNormals(quad, GLU_SMOOTH);

	gluSphere(quad, this->radius, 20,20);
	glDisable(GL_BLEND);
}

std::array<GLfloat, 3> Ball::getPosition() {
	return this->position;
}

void Ball::setPosition(std::array<GLfloat, 3> pos) {
	this->position = pos;
}
