#include "floor.h"

Floor::Floor() : color1{ 0.64f, 0.44f, 0.30f, 0.5f }, color2{ 0.52f, 0.34f, 0.13f, 0.5f }, startx(0), startz(0), endx(10), endz(10) {};

void Floor::draw() {
	glPushMatrix();

	glBegin(GL_QUADS);	
	GLfloat specular[] = { 1.0f, 1.0f, 1.0f },
		shininess = 128.0f;
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, shininess);

	GLfloat* curr_color = color1;
	bool c1 = true;
	for (int i = startx; i < endx; i++) {
		for (int j = startz; j < endz; j+=2) {
			curr_color = (c1)? color1 : color2;
			c1 = !c1;
			glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, curr_color);
			glVertex3d(i, 0, j);
			glVertex3d(i+1.0, 0, j);
			glVertex3d(i+1.0, 0, j+2.0);
			glVertex3d(i, 0, j+2.0);
		}
	}

	glEnd();

	glPopMatrix();
}