#ifndef RENDER_H
#define RENDER_H
#include <GL\glut.h>
#include "Player.h"
#include "HUD.h"
//game render

extern Player player;

extern HUD hud;

void draw();
void moveCam(int x, int y, int z);
#endif