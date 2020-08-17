#include <windows.h>
#include <iostream>
#include <gl\GL.h>
#include "imgui/imgui.h"
#include "imgui/imgui_impl_freeglut.h"
#include "imgui/imgui_impl_opengl2.h"
#include <GL\freeglut.h>
#include "objects.h"
using namespace std;

//single point of access to all rendered objects
Objects objects;

static ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);
GLfloat globalAmbientVec[4] = { 1, 1, 1, 1.0f };

void imguiConfig() {
	static bool lamp_on = true;
	static bool spotlight_on = true;

	ImGui::Begin("World Controls");
	ImGui::Checkbox("Dog Eyes", &objects.isDogView);

	if (ImGui::CollapsingHeader("Dog")) {
		static GLfloat tailVertical = objects.dog.tail.getVerticalAngle();
		static GLfloat tailHorizontal = objects.dog.tail.getHorizontalAngle();

		ImGui::Text("Tail Settings");
		ImGui::SliderFloat("Tail Vertical Angle", &tailVertical, -30, 100);
		ImGui::SliderFloat("Tail Horizontal Angle", &tailHorizontal, -30, 30);

		objects.dog.tail.setVerticalAngle(tailVertical);
		objects.dog.tail.setHorizontalAngle(tailHorizontal);

		static GLfloat headVertical = objects.dog.head.getVerticalAngle();
		static GLfloat headHorizontal = objects.dog.head.getHorizontalAngle();

		ImGui::Text("Head Settings");
		ImGui::SliderFloat("Head Vertical Angle", &headVertical, 0, 20);
		ImGui::SliderFloat("Head Horizontal Angle", &headHorizontal, -10, 10);

		objects.dog.head.setHorizontalAngle(headHorizontal);
		objects.dog.head.setVerticalAngle(headVertical);
	}

	if (ImGui::CollapsingHeader("Lights")) { 

		ImGui::ColorEdit3("Ambient Color", reinterpret_cast<float*>(globalAmbientVec));

		// lamp controls
		ImGui::Checkbox("Lamp turn on", &lamp_on);
		ImGui::ColorEdit3("Lamp light Color", reinterpret_cast<float*>(objects.lamp.color_arr));

		
		// spotlight controls
		static std::array<GLfloat, 3> location = objects.spotlight.getPosition();

		ImGui::Checkbox("Spotlight turn on", &spotlight_on);
		ImGui::SliderFloat("Position X", &location[0], 0, 10);
		ImGui::SliderFloat("Position Y", &location[1], 0, 10);
		ImGui::SliderFloat("Position Z", &location[2], 0, 10);

		objects.spotlight.setPosition(location);
	}
	objects.lamp.setState(lamp_on);
	objects.spotlight.setState(spotlight_on);

	if(ImGui::CollapsingHeader("Camera")){

		static std::array<GLfloat, 3>  location = objects.camera.getPosition();
		static std::array<GLfloat, 3> target = objects.camera.getCenter();
		ImGui::SliderFloat("Cam Position X", &location[0], 0, 15);
		ImGui::SliderFloat("Cam Position Y", &location[1], 0, 15);
		ImGui::SliderFloat("Cam Position Z", &location[2], 0, 15);

		ImGui::SliderFloat("Cam Target X", &target[0], 0, 10);
		ImGui::SliderFloat("Cam Target Y", &target[1], 0, 10);
		ImGui::SliderFloat("Cam Target Z", &target[2], 0, 10);

		objects.camera.setPosition(location);
		objects.camera.setCenter(target);
	}

	if (ImGui::CollapsingHeader("Help")) {
		ImGui::Text("There are few control options avaliable:");
		ImGui::TextWrapped("In the dog menu, you can change the dog head position, his tail position.");
		ImGui::TextWrapped("The dog can move by using the arrows keys in the keyboard");
		ImGui::Text("-----------------------------------------------------------------------");
		ImGui::TextWrapped("In the light menu, you can change the spotlight position and light, the ambient light values and the lamp light.");
		ImGui::Text("-----------------------------------------------------------------------");
		ImGui::TextWrapped("In the camera menu, you can change the camera position and on which point the camera is pointed.");
		ImGui::Text("-----------------------------------------------------------------------");
		ImGui::TextWrapped("In addition, you can change the view to the dog POV and to a global perspective.");
		ImGui::Text("-----------------------------------------------------------------------");
	}

	if (ImGui::Button("Quit")) {
		exit(0);
	}
	ImGui::End();
}


//keyboard events handling
void keyboard(int key, int, int) {
	switch (key) {
	case GLUT_KEY_UP:
		objects.dog.nextMove = []() {
			glTranslated(0, 0, 0.3f);
		};
		break;
	case GLUT_KEY_DOWN:
		objects.dog.nextMove = []() {
			glTranslated(0, 0, -0.3f);
		};
		break;
		case GLUT_KEY_LEFT:  
			objects.dog.nextMove = []() { 
				glRotatef(5, 0, 1, 0); 
			};
			break;
		case GLUT_KEY_RIGHT:
			objects.dog.nextMove = []() { 
				glRotatef(-5, 0, 1, 0); 
			};
			break;
	}
	
	glutPostRedisplay();
}

void drawScene() {
	std::array<GLfloat, 3> pos;
	
	pos = objects.lamp.getPosition();
	glPushMatrix();
	glTranslatef(pos[0], pos[1], pos[2]);
	objects.lamp.draw();
	glPopMatrix();

	pos = objects.spotlight.getPosition();
	glPushMatrix();
	glTranslatef(pos[0], pos[1], pos[2]);
	objects.spotlight.draw();
	glPopMatrix();
	
	glPushMatrix();
	glMultMatrixf(objects.dog.localAxys);
	objects.dog.draw();
	glPopMatrix();
	

	if (objects.isDogView) {
		objects.walls.draw({ 0, 1, 2, 3 });
	}
	else {
		objects.walls.draw({ 0, 3 });
	}
	objects.floor.draw();
	objects.table.draw();

}

//display handling, rendering all objects
void display() {

	 //Start the Dear ImGui frame
	ImGui_ImplOpenGL2_NewFrame();
	ImGui_ImplFreeGLUT_NewFrame();

	imguiConfig();

	ImGui::Render();
	ImGuiIO& io = ImGui::GetIO();

	glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
	glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 1.0, 1.0, 150.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
		
	// Update the dog's transformation matrix
	if (objects.dog.nextMove) {
		objects.dog.setIsMoving(true);
		GLfloat viewModelMatrix[16];
		glGetFloatv(GL_MODELVIEW_MATRIX, viewModelMatrix);
		glLoadMatrixf(objects.dog.localAxys);
		objects.dog.nextMove();
		objects.dog.nextMove = nullptr;
		glGetFloatv(GL_MODELVIEW_MATRIX, objects.dog.localAxys);
		glLoadMatrixf(viewModelMatrix);
	}

	// Change view point to Dog's eyes or camera based on flag
	if (objects.isDogView) {
		GLfloat viewModelMatrix[16];
		glGetFloatv(GL_MODELVIEW_MATRIX, viewModelMatrix);
		glLoadMatrixf(objects.dog.localAxys);

		glRotatef(objects.dog.head.getVerticalAngle(), 1, 0, 0);
		glRotatef(objects.dog.head.getHorizontalAngle(), 0, 1, 0);
		glTranslated(0, 0.75, 0.9);

		GLfloat cameraPoseInDogView[16];
		glGetFloatv(GL_MODELVIEW_MATRIX, cameraPoseInDogView);
		glLoadMatrixf(viewModelMatrix);

		//Hack...
		GLfloat zAngle = atan2(-cameraPoseInDogView[2], cameraPoseInDogView[0]);
		GLfloat yAngle = atan2(-cameraPoseInDogView[9], cameraPoseInDogView[5]);

		gluLookAt(cameraPoseInDogView[12], cameraPoseInDogView[13], cameraPoseInDogView[14],
			sin(zAngle) + cameraPoseInDogView[12],
			-yAngle + cameraPoseInDogView[13],
			cos(zAngle) + cameraPoseInDogView[14],
			0, 1, 0);
	}
	else {
		std::array<GLfloat, 3> camera_pos = objects.camera.getPosition();
		std::array<GLfloat, 3> camera_center = objects.camera.getCenter();
		gluLookAt(
			camera_pos[0], camera_pos[1], camera_pos[2],
			camera_center[0], camera_center[1], camera_center[2],
			0, 1, 0);
	}

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, globalAmbientVec);

	drawScene();
	
	glDisable(GL_LIGHTING);
	ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
	glEnable(GL_LIGHTING);

	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_MULTISAMPLE);
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Dog Project");
	glutDisplayFunc(display);


	objects.dog.initialize();

	// Setup Dear ImGui context
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();

	// Setup Dear ImGui style
	ImGui::StyleColorsDark();

	ImGui_ImplFreeGLUT_Init();
	ImGui_ImplFreeGLUT_InstallFuncs();
	ImGui_ImplOpenGL2_Init();

	glutSpecialFunc(keyboard);
	
	// Lighting properties
	glShadeModel(GL_SMOOTH);
	glEnable(GL_LIGHTING);
	glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glutMainLoop();
	
	// Cleanup
	ImGui_ImplOpenGL2_Shutdown();
	ImGui_ImplFreeGLUT_Shutdown();
	ImGui::DestroyContext();
	
	return 0;
}
