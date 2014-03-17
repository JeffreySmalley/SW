#include <iostream>
#include "Update.h"
//uncomment to hide console
//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

Player player;
HUD hud;


using namespace std;
//initializeation values
void setup()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH);
}
//sets up draw area, size and viewing angle
void shape(int width, int height)
{
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-250.0, 250.0, -250.0, 250.0, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Star Wars: Arcade");
	glutReshapeFunc(shape);
	setup();
	glutDisplayFunc(draw);
	glutIdleFunc(update);
	glutMainLoop();
}