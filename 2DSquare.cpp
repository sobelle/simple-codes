#include "stdafx.h"
#include <windows.h>
#include <glut.h>   

void Init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0); //background color (cleaning)
	glMatrixMode(GL_PROJECTION); //setting up the projection
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT); //cleaning the screen

	//drawing the square 
	glColor3f(1.0, 1.0, 1.0); //white color
	glBegin(GL_POLYGON);
	glVertex3f(0.25, 0.25, 0.0);
	glVertex3f(0.75, 0.25, 0.0);
	glVertex3f(0.75, 0.75, 0.0);
	glVertex3f(0.25, 0.75, 0.0);
	glEnd();
	glFlush();
}

    //the main cycle
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("SQUARE");
	Init();
	glutDisplayFunc(Draw);
	glutMainLoop();

	return 0;
}

