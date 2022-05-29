#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0, 1.0, 1.0);


	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(0.05f, 0.50f, 0.0f);
	glVertex3f(0.80f, 0.50f, 0.0f);
	glVertex3f(0.80f, 0.05f, 0.0f);
	glVertex3f(0.05f, 0.05f, 0.0f);

	glColor3f (0.0, 1.0, 0.0);
	glVertex3f(0.10f, 0.40f, 0.0f);
	glVertex3f(0.25f, 0.40f, 0.0f);
	glVertex3f(0.25f, 0.25f, 0.0f);
	glVertex3f(0.10f, 0.25f, 0.0f);

    glColor3f (0.0, 1.0, 0.0);
	glVertex3f(0.60f, 0.40f, 0.0f);
	glVertex3f(0.75f, 0.40f, 0.0f);
	glVertex3f(0.75f, 0.25f, 0.0f);
	glVertex3f(0.60f, 0.25f, 0.0f);

	glColor3f (0.0, 0.0, 1.0);
	glVertex3f(0.30f, 0.40f, 0.0f);
	glVertex3f(0.55f, 0.40f, 0.0f);
	glVertex3f(0.55f, 0.05f, 0.0f);
	glVertex3f(0.30f, 0.05f, 0.0f);

	glColor3f (0.0, 1.0, 1.0);
	glVertex3f(0.30f, 0.40f, 0.0f);
	glVertex3f(0.41f, 0.36f, 0.0f);
	glVertex3f(0.41f, 0.09f, 0.0f);
	glVertex3f(0.30f, 0.05f, 0.0f);


	glColor3f (0.0, 1.0, 1.0);
	glVertex3f(0.44f, 0.36f, 0.0f);
	glVertex3f(0.55f, 0.40f, 0.0f);
	glVertex3f(0.55f, 0.05f, 0.0f);
	glVertex3f(0.44f, 0.09f, 0.0f);
	glEnd(); //End quadrilateral coordinates

	glBegin(GL_TRIANGLES); //Begin triangle coordinates

	//Pentagon
	glColor3f (0.0, 1.0, 0.0);
	glVertex3f(0.05f, 0.50f, 0.0f);
	glVertex3f(0.80f, 0.50f, 0.0f);
	glVertex3f(0.43f, 0.60f, 0.0f);

	glColor3f (0.0, 0.0, 1.0);
	glVertex3f(0.05f, 0.50f, 0.0f);
	glVertex3f(0.80f, 0.50f, 0.0f);
	glVertex3f(0.43f, 0.55f, 0.0f);


	glEnd();//End triangle coordinates
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
