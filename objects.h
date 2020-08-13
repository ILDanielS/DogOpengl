#pragma once
#include "walls.h"
#include "camera.h"
#include "floor.h"
#include "ball.h"
#include "table.h"
#include "spotlight.h"
#include "lamp.h"


class Objects {
public:
	Objects() = default;
	~Objects() = default;
	Walls walls;
	Floor floor;
	Camera camera;
	Ball ball;
	Table table;
	Spotlight spotlight;
	Lamp lamp;
};