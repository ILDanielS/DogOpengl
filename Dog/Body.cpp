#include "Body.h"
#include <gl\freeglut.h>

void Body::draw() {
	glPushMatrix();
	glScalef(0.6f, 0.6f, 1.2f);
	glutSolidSphere(1, 10, 30);
	glPopMatrix();
}