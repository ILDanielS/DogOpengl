#include <vector>
#include <GL\freeglut.h>

class Walls
{
public:
	GLfloat color[4];

	Walls();
	void draw(std::vector<int> index);
	~Walls() = default;
};

