#include "table.h"


Table::Table(std::array<GLfloat, 3>pos,
	GLfloat leg_length,
	GLfloat leg_height,
	GLfloat table_gap) : leg_height(leg_height), leg_length(leg_length), table_gap(table_gap), position(pos) {}

void Table::draw() {

	GLfloat ambient[] = { 0.5f, 0.5f, 0.5f },
		diffuse[] = { 0.9f, 0.9f, 0.9f },
		specular[] = { 1.0f, 1.0f, 1.0f },
		shininess = 0.0f,
		color[] = { 0.0f, 0.0f, 0.0f, 0.0f };

	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, shininess);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color);

	GLfloat const leg_pos = (table_gap + leg_length) / 2;

	glPushMatrix();
	glTranslatef(position[0], position[1], position[2]);

	glPushMatrix();
	glTranslatef(-leg_pos, 0, -leg_pos);
	drawQuad(leg_length, leg_height);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(leg_pos, 0, -leg_pos);
	drawQuad(leg_length, leg_height);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(leg_pos, 0, leg_pos);
	drawQuad(leg_length, leg_height);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-leg_pos, 0, leg_pos);
	drawQuad(leg_length, leg_height);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-leg_pos, 0, leg_pos);
	drawQuad(leg_length, leg_height);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, leg_height, 0.0f);
	drawQuad(leg_length*2 + table_gap, 0.2f);
	glPopMatrix();


	// Teapot

	GLfloat ambient2[] = { 0.5f, 0.5f, 0.5f },
		diffuse2[] = { 0.9f, 0.9f, 0.9f },
		specular2[] = { 1.0f, 1.0f, 1.0f },
		shininess2 = 128.0f,
		color2[] = { 0.75f, 0.75f, 0.75f, 1.0f };

	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular2);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, shininess2);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse2);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color2);
	glPushMatrix();
	glTranslatef(0.0f, leg_height+0.2f+0.5f, 0.0f);
	glRotatef(45.0f, 0, 1, 0);
	glutSolidTeapot(0.5f);
	glPopMatrix();


	glPopMatrix();
}

void Table::drawQuad(GLfloat length, GLfloat height) {
	GLfloat hlength = length / 2;

	glBegin(GL_QUADS);
	// Bottom
	glVertex3f(hlength, 0.0f, hlength);
	glVertex3f(hlength, 0.0f, -hlength);
	glVertex3f(-hlength, 0.0f, -hlength);
	glVertex3f(-hlength, 0.0f, hlength);

	//Front
	glVertex3f(hlength, 0.0f, hlength);
	glVertex3f(hlength, 0.0f, -hlength);
	glVertex3f(hlength, height, -hlength);
	glVertex3f(hlength, height, hlength);

	// Right
	glVertex3f(hlength, 0.0f, -hlength);
	glVertex3f(-hlength, 0.0f, -hlength);
	glVertex3f(-hlength, height, -hlength);
	glVertex3f(hlength, height, -hlength);

	// Back
	glVertex3f(-hlength, 0.0f, -hlength);
	glVertex3f(-hlength, 0.0f, hlength);
	glVertex3f(-hlength, height, hlength);
	glVertex3f(-hlength, height, -hlength);

	// Left
	glVertex3f(-hlength, 0.0f, hlength);
	glVertex3f(hlength, 0.0f, hlength);
	glVertex3f(hlength, height, hlength);
	glVertex3f(-hlength, height, hlength);

	// Top
	glVertex3f(hlength, height, hlength);
	glVertex3f(hlength, height, -hlength);
	glVertex3f(-hlength, height, -hlength);
	glVertex3f(-hlength, height, hlength);

	glEnd();
}

void Table::drawLeg() {


}