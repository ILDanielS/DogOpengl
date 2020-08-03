#pragma once
#include <GL\freeglut.h>
#include <array>

class Camera
{
public:
	Camera();
	void setPosition(std::array<GLfloat, 3> pos);
	void setCenter(std::array<GLfloat, 3> center);

	std::array<GLfloat, 3> getPosition();
	std::array<GLfloat, 3> getCenter();

	void strafeLeft(float stepSize);
	void strafeRight(float stepSize);
	void moveFoward(float stepSize);
	void moveBack(float stepSize);
	
	void rotateLeft(float deg);
	void rotateRight(float deg);
	~Camera() = default;
	void print();
private:
	std::array<GLfloat, 3> position;
	std::array<GLfloat, 3> center;


};

