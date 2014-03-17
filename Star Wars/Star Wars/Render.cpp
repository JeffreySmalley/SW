#include "Render.h"
float camX = 0.0;
float camY = 0.0;
float camZ = 0.0;

Player player;
HUD hud;
void draw(){
	//move the world around the player
	glTranslatef(camX, camY, camZ);





	glutPostRedisplay();
	glutSwapBuffers();
}

void moveCam(int x, int y, int z)
{
	camX += x;
	camY += y;
	camZ += z;
}