#pragma once
#include "walls.h"
#include "camera.h"
#include "floor.h"
#include "ball.h"


class Objects {
public:
	Objects() = default;
	~Objects() = default;
	Walls walls;
	Floor floor;
	Camera camera;
	Ball ball;

};