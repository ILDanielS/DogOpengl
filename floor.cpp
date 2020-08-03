#include "floor.h"

Floor::Floor() : color{ 1.0f, 0.0f, 0.0f, 0.5f }, startx(0), startz(0), endx(10), endz(10) {};

void Floor::draw() {
	glPushMatrix();

	glBegin(GL_QUADS);	
	GLfloat specular[] = { 1.0f, 1.0f, 1.0f },
		shininess = 128.0f;
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, shininess);

	for (int i = startx; i < endx; i++) {
		for (int j = startz; j < endz; j++) {
			glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);
			glVertex3d(i, 0, j);
			glVertex3d(i+1.0, 0, j);
			glVertex3d(i+1.0, 0, j+1.0);
			glVertex3d(i, 0, j+1.0);
		}
	}

	glEnd();

	glPopMatrix();
}