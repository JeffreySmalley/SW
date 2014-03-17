#include "HUD.h"

void HUD::draw()
{
	sheilds = 6;
	glLoadIdentity();
	glBegin(GL_QUADS);
	if (sheilds >= 1)
	{
		glColor3f(1, 0, 0);
		glVertex3f(250,500,1);
		glVertex3f(270, 480, 1);
		glVertex3f(230, 480, 1);
		glVertex3f(250, 500, 1);
	}
	if (sheilds >= 2)
	{
		glColor3f(1*0.8, 1/5, 0);
		glVertex3f(295, 455, 1);
		glVertex3f(275, 475, 1);
		glVertex3f(225, 475, 1);
		glVertex3f(205, 455, 1);
	}
	if (sheilds >= 3)
	{
		glColor3f(1, 0, 0);
		glVertex3f(250, 430, 1);
		glVertex3f(270, 450, 1);
		glVertex3f(200, 450, 1);
		glVertex3f(250, 430, 1);
	}
	if (sheilds >= 4)
	{
		glColor3f(1, 0, 0);
		glVertex3f(250, 500, 1);
		glVertex3f(270, 480, 1);
		glVertex3f(230, 480, 1);
		glVertex3f(250, 500, 1);
	}
	if (sheilds >= 5)
	{
		glColor3f(1, 0, 0);
		glVertex3f(250, 500, 1);
		glVertex3f(270, 480, 1);
		glVertex3f(230, 480, 1);
		glVertex3f(250, 500, 1);
	}
	if (sheilds >= 6)
	{
		glColor3f(1, 0, 0);
		glVertex3f(250, 500, 1);
		glVertex3f(270, 480, 1);
		glVertex3f(230, 480, 1);
		glVertex3f(250, 500, 1);
	}
	glEnd();
}