#include "floor.h"

Floor::Floor() : color{ 0.7f, 0.7f, 0.7f, 1.0f }, startx(-5), startz(-5), endx(5), endz(5) {};

void Floor::draw() {
	glPushMatrix();

	glBegin(GL_QUADS);

	for (int i = startx; i < endx; i++) {
		for (int j = startz; j < endz; j++) {
			glVertex3d(i, 0, j);
			glVertex3d(i+1.0, 0, j);
			glVertex3d(i+1.0, 0, j+1.0);
			glVertex3d(i, 0, j+1.0);
		}
	}

	glEnd();

	glPopMatrix();
}