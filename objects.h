#pragma once
#include "walls.h"
#include "camera.h"
#include "floor.h"
#include "table.h"
#include "spotlight.h"
#include "lamp.h"
#include "Dog/Dog.h"

class Objects {
public:
	Objects() = default;
	Walls walls;
	Floor floor;
	Camera camera;
	Dog dog;
	Table table;
	Spotlight spotlight;
	Lamp lamp;
	bool isDogView = false;
	~Objects() = default;
};