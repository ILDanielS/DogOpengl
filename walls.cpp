#include "walls.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>

Walls::Walls(): color{ 1.0f, 1.0f, 1.0f, 1.0f }, wall_texture(0) {}

void Walls::loadTextures() {
	GLuint tex; GLuint err;
	glGenTextures(1, &tex);
	std::cout << glGenLists(1) << std::endl;
	this->wall_texture = tex;
	glBindTexture(GL_TEXTURE_2D, this->wall_texture);
	err = glGetError();
	int width, height, nrChannels;

	unsigned char* data = stbi_load("..\\textures\\bricks.jpg", &width, &height, &nrChannels, 0);
	if (data) {
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		err = glGetError();
	}
	else {
		std::cout << "Texture wall did not load" << std::endl;
	}
	stbi_image_free(data);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glBindTexture(GL_TEXTURE_2D, 0);
}

void Walls::drawWall() {

	//glEnable(GL_BLEND);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
	int height = 10, width = 10;
	GLfloat ambient[] = { 0.5f, 0.5f, 0.5f },
		diffuse[] = { 0.9f, 0.9f, 0.9f },
		specular[] = { 1.0f, 1.0f, 1.0f },
		shininess = 128.0f;

	//glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT, GL_SHININESS, shininess);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);
	
	glBindTexture(GL_TEXTURE_2D, wall_texture);
	glEnable(GL_TEXTURE_2D);
	GLuint err = glGetError();
	glBegin(GL_QUADS);


	glNormal3f(1, 0, 0);

	glTexCoord2f(0.0, 0.0); glVertex3d(0, 0, 0);
	glTexCoord2f(0.0, 1.0); glVertex3d(0, 10, 0);
	glTexCoord2f(1.0, 1.0); glVertex3d(0, 10, 10);
	glTexCoord2f(1.0, 0.0); glVertex3d(0, 0, 10);
	glEnd();
	glDisable(GL_BLEND);
	glDisable(GL_TEXTURE_2D);
}

void Walls::draw(std::vector<int> index) {

	if (!wall_texture) {
		this->loadTextures();
	}

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
}
