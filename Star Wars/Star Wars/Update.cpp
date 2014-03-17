#include "Update.h"

int oldTime = 0;
void update()
{
	//delta initilize
	int timeStart = glutGet(GLUT_ELAPSED_TIME);
	int deltaTime = timeStart - oldTime;
	oldTime = timeStart;
	//forward motion
	moveCam(0, 0, 1 * deltaTime);
}