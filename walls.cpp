#include "walls.h"

Walls::Walls(): color{ 1.0f, 1.0f, 1.0f, 0.5f } {
	glGenTextures(1, wall_texture);



}

void Walls::drawWall() {
	int height = 10, width = 10;
	glEnable(GL_BLEND);
	GLfloat ambient[] = { 0.5f, 0.5f, 0.5f },
		diffuse[] = { 0.9f, 0.9f, 0.9f },
		specular[] = { 1.0f, 1.0f, 1.0f },
		shininess = 128.0f;


	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, shininess);
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, color);


	glBegin(GL_QUADS);
	glNormal3f(1, 0, 0);

	glVertex3d(0, 0, 0);
	glVertex3d(0, 0, 10);
	glVertex3d(0, 10, 10);
	glVertex3d(0, 10, 0);
	glDisable(GL_BLEND);

	glEnd();


}

void Walls::draw(std::vector<int> index) {
	for (int i : index) {
		glPushMatrix();
		switch (i) {
		case 0:
			break;

		case 1:
			glTranslatef(0, 0, 10);
			glRotated(90, 0, 1, 0);
			break;

		case 2:
			glTranslatef(10, 0, 10);
			glRotated(180, 0, 1, 0);

		case 3:
			glTranslatef(10, 0, 0);
			glRotated(270, 0, 1, 0);

		}
		this->drawWall();
		glPopMatrix();

	}


	/*
	for (int i : index) {
		glPushMatrix();
		switch (i) {
		case 0:
			glRotatef(90, 1, 0, 0);
			glTranslatef(0, -5.0f, -5.0f);
			break;
		case 1:
			glRotatef(90, 0, 0, 1);
			glTranslatef(5.0f, 5.0f, 0);
			break;
		case 2:
			glRotatef(90, 0, 0, 1);
			glTranslatef(5.0f, -5.0f, 0);
			break;
		case 3:
			glRotatef(90, 1, 0, 0);
			glTranslatef(0, 5.0f, -5.0f);
			break;
		}

		glEnable(GL_BLEND);
		glBegin(GL_QUADS);
		glNormal3d(0, 1, 0);
		GLfloat ambient[] = { 0.5f, 0.5f, 0.5f },
			diffuse[] = { 0.9f, 0.9f, 0.9f },
			specular[] = { 1.0f, 1.0f, 1.0f },
			shininess = 128.0f;

		glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
		glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, shininess);

		color[3] = 0.5f;
		for (int x = -5; x < 5; x++) {
			for (int z = -5; z < 5; z++) {
				glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, color);
				glVertex3d(x, 0, z);
				glVertex3d(x + 1.0, 0, z);
				glVertex3d(x + 1.0, 0, z + 1.0);
				glVertex3d(x, 0, z + 1.0);
			}
		}
		glEnd();
		glDisable(GL_BLEND);
		glPopMatrix();
}*/

}
