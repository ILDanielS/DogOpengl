#include "spotlight.h"

Spotlight::Spotlight() : color({ 0.5f, 0.5f, 0.5f}),
						 position({ 5.0f, 10.0f, 5.0f}),
						 lookat({ 5.0f, 0.0f, 5.0f }) {}

void Spotlight::draw() {
	GLUquadric* quad;
	quad = gluNewQuadric();

	GLfloat color_arr[3] = { color[0], color[1], color[2] };
	GLfloat pos_arr[3] = { position[0], position[1], position[2] };
	GLfloat dir_arr[3] = { lookat[0]-position[0], lookat[1] - position[1], lookat[2] - position[2] };

	if (!glIsEnabled(GL_LIGHT1))
		return;
	glLightfv(GL_LIGHT1, GL_DIFFUSE, color_arr);
	glLightfv(GL_LIGHT1, GL_SPECULAR, color_arr);
	glLightfv(GL_LIGHT1, GL_POSITION, pos_arr);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dir_arr);
	//glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 180.0f);
	glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 0.0f);

	gluQuadricDrawStyle(quad, GLU_FILL);
	gluQuadricNormals(quad, GLU_SMOOTH);
	gluSphere(quad, 0.3f, 20, 20);

	

}

std::array<GLfloat, 3> Spotlight::getPosition() {
	return position;
}