#pragma once
#include <GL\freeglut.h>
#include <array>

class Camera
{
public:
	Camera();
	std::array<GLfloat, 3> getPosition();
	void setPosition(std::array<GLfloat, 3> pos);

	std::array<GLfloat, 3> getCenter();
	void setCenter(std::array<GLfloat, 3> center);

	void print();
	void strafeLeft(float stepSize);
	void strafeRight(float stepSize);
	void moveFoward(float stepSize);
	void moveBack(float stepSize);	
	void rotateLeft(float deg);
	void rotateRight(float deg);
	~Camera() = default;

private:
	std::array<GLfloat, 3> position;
	std::array<GLfloat, 3> center;
};