#include <Dog.h>
#include <Body.h>
#include <Head.h>
#include <Legs.h>
#include <Tail.h>
#include <gl\freeglut.h>

void Body::draw() {
	glPushMatrix();
	glScalef(2.0f * 0.3f, 2.0f * 0.3f, 4.0f * 0.3f);
	glutSolidSphere(1, 30, 30);
	glPopMatrix();
}