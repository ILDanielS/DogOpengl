#include "table.h"

Table::Table(std::array<GLfloat, 3>pos,
	GLfloat leg_length,
	GLfloat leg_height,
	GLfloat table_gap) :
	leg_height(leg_height),
	leg_length(leg_length),
	table_gap(table_gap),
	position(pos) {};

std::array<GLfloat, 3> Table::getPosition() {
	return this->position;
}

void Table::setPosition(std::array<GLfloat, 3> pos) {
	this->position = pos;
}

void Table::draw() {

	GLfloat diffuse_table[] = { 0.0f, 0.0f, 0.0f },
		spec_table[] = { 0.0f, 0.0f, 0.0f },
		color_table[] = { 0.1f, 0.1f, 0.1f, 0.1f };

	GLfloat const leg_pos = (table_gap + leg_length) / 2;

	glPushMatrix();

	glColor3fv(color_table);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, spec_table);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, 80.0f);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse_table);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color_table);

	// Legs
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
	GLfloat diffuse_teapot[] = { 0.9f, 0.9f, 0.9f },
		specular_teapot[] = { 1.0f, 1.0f, 1.0f },
		color_teapot[] = { 0.6f, 0.6f, 0.6f, 1.0f };

	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular_teapot);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, 128.0f);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse_teapot);
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, color_teapot);
	
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