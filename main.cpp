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
		ImGui::SliderFloat("Cam Position X", &location[0], -30, 30);
		ImGui::SliderFloat("Cam Position Y", &location[1], -30, 30);
		ImGui::SliderFloat("Cam Position Z", &location[2], -30, 30);

		ImGui::SliderFloat("Cam Target X", &target[0], 0, 10);
		ImGui::SliderFloat("Cam Target Y", &target[1], 0, 10);
		ImGui::SliderFloat("Cam Target Z", &target[2], 0, 10);

		objects.camera.setPosition(location);
		objects.camera.setCenter(target);
	}

	if (ImGui::Button("Quit")) {
		exit(0);
	}
	ImGui::End();
}

/*
//gui interaction handling via imgui
void guiInteraction()
{
	ImGuiWindowFlags window_flags = 0;
	if (ImGui::Begin("Opengl Dog Scene", false, window_flags))
	{
		ImGui::RadioButton("external view", &gContext.isDogView, 0); ImGui::SameLine();
		ImGui::RadioButton("doggy view", &gContext.isDogView, 1);

		if (ImGui::CollapsingHeader("Dog"))
		{
			ImGui::SliderFloat("head horizontal", &gContext.dog.headHorizontalAngle, -30.0f, 30.0f);
			ImGui::SliderFloat("head vertical", &gContext.dog.headVerticalAngle, -5.0f, 50.0f);
			ImGui::SliderFloat("tail horizontal", &gContext.dog.tailHorizontalAngle, -25.0f, 25.0f);
			ImGui::SliderFloat("tail vertical", &gContext.dog.tailVerticalAngle, -14.0f, 50.0f);
		}
		if (ImGui::CollapsingHeader("Camera"))
		{
			ImGui::SliderFloat("camera source x", &gContext.camera.position[0], -10.0f, 10.0f);
			ImGui::SliderFloat("camera source y", &gContext.camera.position[1], -10.0f, 10.0f);
			ImGui::SliderFloat("camera source z", &gContext.camera.position[2], -10.0f, 10.0f);
			ImGui::SliderFloat("camera target x", &gContext.camera.target[0], -10.0f, 10.0f);
			ImGui::SliderFloat("camera target y", &gContext.camera.target[1], -10.0f, 10.0f);
			ImGui::SliderFloat("camera target z", &gContext.camera.target[2], -10.0f, 10.0f);
		}
		static bool pointlight = true;
		static bool spotlight = true;
		if (ImGui::CollapsingHeader("Lights"))
		{
			ImGui::SliderFloat("ambient light adjust", &gContext.globalAmbient, 0.0f, 1.0f);
			ImGui::Checkbox("enable pointlight", &pointlight);

			ImGui::ColorEdit3("point light color", reinterpret_cast<float*>(&gContext.pointlight.color));
			ImGui::SliderFloat("pointlight source x", &gContext.pointlight.position[0], -10.0f, 10.0f);
			ImGui::SliderFloat("pointlight source y", &gContext.pointlight.position[1], -10.0f, 10.0f);
			ImGui::SliderFloat("pointlight source z", &gContext.pointlight.position[2], -10.0f, 10.0f);

			ImGui::Checkbox("enable spotlight", &spotlight);
			ImGui::ColorEdit3("spotlight color", reinterpret_cast<float*>(&gContext.spotlight.color));
			ImGui::SliderFloat("spotlight source x", &gContext.spotlight.position[0], -10.0f, 10.0f);
			ImGui::SliderFloat("spotlight source y", &gContext.spotlight.position[1], -10.0f, 10.0f);
			ImGui::SliderFloat("spotlight source z", &gContext.spotlight.position[2], -10.0f, 10.0f);
			ImGui::SliderFloat("spotlight target x", &gContext.spotlight.target[0], -10.0f, 10.0f);
			ImGui::SliderFloat("spotlight target y", &gContext.spotlight.target[1], -10.0f, 10.0f);
			ImGui::SliderFloat("spotlight target z", &gContext.spotlight.target[2], -10.0f, 10.0f);
			ImGui::SliderFloat("spotlight cutoff", &gContext.spotlight.cutoff, 0.0f, 90.0f);
			ImGui::SliderFloat("spotlight exponent", &gContext.spotlight.exponent, 0.0f, 90.0f);

			pointlight ? gContext.pointlight.enable() : gContext.pointlight.disable();
			spotlight ? gContext.spotlight.enable() : gContext.spotlight.disable();
		}
		if (ImGui::CollapsingHeader("Walls"))
		{
			ImGui::SliderFloat("alpha channel", &gContext.walls.alpha, 0.0f, 1.0f);
		}
		if (ImGui::CollapsingHeader("Help"))
		{
			ImGui::Text("Viewing modes:");
			ImGui::TextWrapped((string("There are 2 viewing modes, 'external view' and doggy view', external view is controlled by the 'Camera'") +
				string(" section, the 'doggy view' is controlled explicitly by the doggy head position and rotation. ")).c_str());
			ImGui::Text("Keyboard control:");
			ImGui::TextWrapped((string("The keyboard arrows control the doggy position on the XZ plane - the floor plane.").c_str()));
			ImGui::Text("Dog section:");
			ImGui::TextWrapped((string("The controls in the Dog section are controlling the head vertical and horizontal orientaion and the") +
				string(" tail vertical and horizontal orientation")).c_str());
			ImGui::Text("Camera section:");
			ImGui::TextWrapped((string("The controls in the Camera section are controling the camera position in space and the camera target") +
				string(" point in space.")).c_str());
			ImGui::Text("Lights section:");
			ImGui::TextWrapped((string("The controls in the Light section are controling the Light in the scene, 'pointlight' and 'spotlight' are 2") +
				string(" light sources that can be turned on a off by the checkboxes. 'ambient light adjust' controls the global ambient light value, ") +
				string(" The spotlight controls the spotlight position in space and the spotlight target in space. the pointlight controls the pointlight position in space")).c_str());
		}
		if (ImGui::Button("Quit"))
		{
			exit(0);
		}
	}
	ImGui::End();
}*/



//void keyboard(int key, int, int) {
//	// Strafing for testing porposes
//	float step = 0.1;
//	switch (key) {
//	case GLUT_KEY_LEFT:
//		objects.camera.setPosition({ 5.0f, 5.0f, 30.0f });
//		objects.camera.setCenter({ 5.0f, 2.5f, 5.0f });
//		break;
//	case GLUT_KEY_RIGHT:
//		objects.camera.setPosition({ 30.0f, 5.0f, 5.0f });
//		objects.camera.setCenter({ 5.0f, 2.5f, 5.0f });
//		break;
//	case GLUT_KEY_UP:
//		objects.camera.setPosition({ 30.0f,30.0f, 30.0f });
//		objects.camera.setCenter({ 0,2.5f,0 });
//		objects.camera.setCenter({ 0,0,0 });
//		break;
//
//	case GLUT_KEY_DOWN:
//		objects.camera.setPosition({ 30.0f, 5.0f, 30.0f });
//		objects.camera.setCenter({ 0,2.5f,0 });
//		break;
//	}
//	objects.camera.print();
//	glutPostRedisplay();
//	
//}

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
		objects.walls.draw({ 0,1,2, 3 });
	}
	else {
		objects.walls.draw({ 0, 3 });
	}
	objects.floor.draw();
	objects.table.draw();


	/*
	glPushMatrix();
	glTranslatef(gContext.pointlight.position[0], gContext.pointlight.position[1], gContext.pointlight.position[2]);
	gContext.pointlight.addLight();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(gContext.spotlight.position[0], gContext.spotlight.position[1], gContext.spotlight.position[2]);
	gContext.spotlight.addlight();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(gContext.spotlight.position[0], gContext.spotlight.position[1], gContext.spotlight.position[2]);
	gContext.spotlight.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(gContext.pointlight.position[0], gContext.pointlight.position[1], gContext.pointlight.position[2]);
	gContext.pointlight.draw();
	glPopMatrix();

	gContext.floor.draw();

	glPushMatrix();
	glMultMatrixf(gContext.dog.local);
	gContext.dog.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3, 1.05, -3);
	gContext.table.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2.2, 1.35, -3);
	gContext.teapot.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3.0f, 0, 3);
	glRotatef(90, 0, 1, 0);
	gContext.snowman.draw();
	glPopMatrix();

	glPushMatrix();
	glTranslated(1.0f, 1.5f, -4.99f);
	gContext.art.draw();
	glPopMatrix();*/
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
	gluPerspective(30.0, (16/9), 1.0, 150.0);
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
