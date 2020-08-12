#pragma once
#include "walls.h"
#include "camera.h"
#include "floor.h"
#include "ball.h"
#include "Dog/Dog.h"
#include "Dog/Body.h"
#include "Dog/Head.h"
#include "Dog/Legs.h"
#include "Dog/Tail.h"

class Objects {
public:
	Objects() = default;
	Walls walls;
	Floor floor;
	Camera camera;
	Ball ball;
	Dog dog;
	~Objects() = default;
};