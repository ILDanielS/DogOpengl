#include "camera.h"
#include <iostream>
#define PI 3.14159265

Camera::Camera() :position{ 10.0f, 10.0f, 10.0f },
center{ 3.0f, 1.0f,0.0f } {}


void Camera::setPosition(std::array<GLfloat, 3> pos)
{
	this->position = pos;
}

void Camera::setCenter(std::array<GLfloat, 3> center)
{
	this->center = center;
}

std::array<GLfloat, 3> Camera::getPosition()
{
	return std::array<GLfloat, 3>(this->position);
}

std::array<GLfloat, 3> Camera::getCenter()
{
	std::array<GLfloat, 3> rval;
	rval[0] = center[0];
	rval[1] = center[1];
	rval[2] = center[2];


	return std::array<GLfloat, 3>(rval);
}

void Camera::strafeLeft(float stepSize)
{
	this->position[0] -= stepSize;
	//this->center[0] -= stepSize;
}

void Camera::strafeRight(float stepSize)
{
	this->position[0] += stepSize;
	//this->center[0] += stepSize;
}

void Camera::moveFoward(float stepSize)
{
	this->position[2] -= stepSize;
	//this->center[2] -= stepSize;
}

void Camera::moveBack(float stepSize)
{
	this->position[2] += stepSize;
	//this->center[2] += stepSize;
}

void Camera::rotateLeft(float deg)
{
	double sinv, cosv;
	sinv = sin(deg * PI / 180);
	cosv = cos(deg * PI / 180);
	this->center[0] = this->center[0] *cosv + this->center[2] * sinv;
	this->center[2] = this->center[2] *cosv - this->center[0] * sinv ;
	std::cout << sinv << " " << cosv << std::endl;
}

void Camera::rotateRight(float deg)
{
	double sinv, cosv;
	sinv = sin(deg * PI / 180);
	cosv = cos(deg * PI / 180);
	this->center[0] = this->center[0] * cosv - this->center[2] * sinv;
	this->center[2] = this->center[2] * cosv + this->center[0] * sinv;
	std::cout << sinv << " " << cosv << std::endl;
}

void Camera::print() {
	std::cout << "Position: " << this->position[0] << ", " << this->position[1] << ", " << this->position[2] << std::endl;
	std::cout << "Center: " << this->center[0] << ", " << this->center[1] << ", " << this->center[2] << std::endl;
}


;



