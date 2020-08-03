#include <vector>
#include <GL\freeglut.h>

class Walls
{
public:
	GLfloat color[4];

	Walls();
	~Walls() = default;
	GLuint wall_texture[1];
	void drawWall();
	void draw(std::vector<int> index);
};

