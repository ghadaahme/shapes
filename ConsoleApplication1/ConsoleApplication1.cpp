/// shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <stdlib.h> //Needed for "exit" function

  //Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

//Called when a key is pressed
void handleKeypress(unsigned char key, //The key that was pressed
	int x, int y) {    //The current mouse coordinates
	switch (key) {
	case 27: //Escape key
		exit(0); //Exit the program
	}
}

//Initializes 3D rendering
void initRendering() {
	//Makes 3D drawing work when something is in front of something else
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0);  //Change the background 

}

//Called when the window is resized
void handleResize(int w, int h) {
	//Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION); //Switch to setting the camera perspective


//Called when the window is resized
	//Set the camera perspective
	glLoadIdentity(); //Reset the camera
	gluPerspective(45.0,                  //The camera angle
		(double)w / (double)h, //The width-to-height ratio
		1.0,                   //The near z clipping coordinate
		200.0);                //The far z clipping coordinate
}

//Draws the 3D scene
void drawScene() {
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.776470f, 0.701960f);
	glVertex3f(-6.0f, 5.3f, -20.0f);
	glVertex3f(-7.3f, 4.5f, -20.0f);
	glVertex3f(-6.7f, 3.2f, -20.0f);
	glVertex3f(-5.3f, 3.2f, -20.0f);
	glVertex3f(-4.7f, 4.5f, -20.0f);

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.85098039f, 0.701960f);
	glVertex3f(-6.0f, 2.5f, -20.0f);
	glVertex3f(-7.0f, 1.7f, -20.0f);
	glVertex3f(-7.2f, 0.6f, -20.0f);
	glVertex3f(-6.7f, -0.5f, -20.0f);
	glVertex3f(-5.3f, -0.5f, -20.0f);
	glVertex3f(-4.8f, 0.6f, -20.0f);
	glVertex3f(-5.0f, 1.7f, -20.0f);

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.701960f, 1.0f, 0.701960f);
	glVertex3f(-6.0f, -1.2f, -20.0f);
	glVertex3f(-7.5f, -2.0f, -20.0f);
	glVertex3f(-8.0f, -3.3f, -20.0f);
	glVertex3f(-7.7f, -4.5f, -20.0f);
	glVertex3f(-6.8f, -5.5f, -20.0f);
	glVertex3f(-5.2f, -5.5f, -20.0f);
	glVertex3f(-4.3f, -4.5f, -20.0f);
	glVertex3f(-4.0f, -3.3f, -20.0f);
	glVertex3f(-4.5f, -2.0f, -20.0f);

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.701960f, 0.701960f, 1.0f);
	glVertex3f(5.5f, 5.0f, -20.0f);
	glVertex3f(4.5f, 5.0f, -20.0f);
	glVertex3f(4.0f, 4.0f, -20.0f);
	glVertex3f(4.5f, 3.0f, -20.0f);
	glVertex3f(5.5f, 3.0f, -20.0f);
	glVertex3f(6.0f, 4.0f, -20.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.701960f, 1.0f);
	glVertex3f(5.5f, 2.0f, -20.0f);
	glVertex3f(4.5f, 2.0f, -20.0f);
	glVertex3f(4.0f, 1.0f, -20.0f);
	glVertex3f(4.0f, 0.0f, -20.0f);
	glVertex3f(4.5f, -1.0f, -20.0f);
	glVertex3f(5.5f, -1.0f, -20.0f);
	glVertex3f(6.0f, 0.0f, -20.0f);
	glVertex3f(6.0f, 1.0f, -20.0f);

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.87843137f, 0.701960f, 1.0f);
	glVertex3f(5.5f, -2.0f, -20.0f);
	glVertex3f(4.5f, -2.0f, -20.0f);
	glVertex3f(3.5f, -2.5f, -20.0f);
	glVertex3f(3.0f, -3.5f, -20.0f);
	glVertex3f(3.5f, -4.5f, -20.0f);
	glVertex3f(4.5f, -5.0f, -20.0f);
	glVertex3f(5.5f, -5.0f, -20.0f);
	glVertex3f(6.5f, -4.5f, -20.0f);
	glVertex3f(7.0f, -3.5f, -20.0f);
	glVertex3f(6.5f, -2.5f, -20.0f);

	glEnd();



	//glBegin(GL_QUADS); //Begin quadrilateral coordinates

	////Trapezoid
	//glVertex3f(-0.7f, -1.5f, -5.0f);
	//glVertex3f(0.7f, -1.5f, -5.0f);
	//glVertex3f(0.4f, -0.5f, -5.0f);
	//glVertex3f(-0.4f, -0.5f, -5.0f);

	//glEnd(); //End quadrilateral coordinates

	//glBegin(GL_TRIANGLES); //Begin triangle coordinates

	////Pentagon
	//glvertex3f(0.5f, 0.5f, -5.0f);
	//glvertex3f(1.5f, 0.5f, -5.0f);
	//glvertex3f(0.5f, 1.0f, -5.0f);

	//glvertex3f(0.5f, 1.0f, -5.0f);
	//glvertex3f(1.5f, 0.5f, -5.0f);
	//glvertex3f(1.5f, 1.0f, -5.0f);

	//glvertex3f(0.5f, 1.0f, -5.0f);
	//glvertex3f(1.5f, 1.0f, -5.0f);
	//glvertex3f(1.0f, 1.5f, -5.0f);

	////triangle
	//glvertex3f(-0.5f, 0.5f, -5.0f);
	//glvertex3f(-1.0f, 1.5f, -5.0f);
	//glvertex3f(-1.5f, 0.5f, -5.0f);

	//glEnd(); //End triangle coordinates

	glutSwapBuffers(); //Send the 3D scene to the screen
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400); //Set the window size

	//Create the window
	glutCreateWindow("Basic Shapes - videotutorialsrock.com");
	initRendering(); //Initialize rendering

	//Set handler functions for drawing, keypresses, and window resizes
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);

	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached
}








