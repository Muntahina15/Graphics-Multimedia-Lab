#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int windowWidth=500;
int windowHeight=500;


void display(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(-25,25,-25,25);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);

glPushMatrix();
glBegin(GL_TRIANGLES);

   glColor3f(1.0,1.0,1.0);
    glVertex2f(3.0,8.0);
    glVertex2f(4.0,8.0);
    glVertex2f(3.5, 9.0);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(0.0,1.0,1.0,1.0);
    glVertex2f(3.0,8.0);
    glVertex2f(3.0,3.0);
    glVertex2f(4.0,3.0);
    glVertex2f(4.0,8.0);

    glEnd();
    glPopMatrix();




glPushMatrix();
glBegin(GL_TRIANGLES);

   glColor3f(1.0,1.0,1.0);
    glVertex2f(11.0,8.0);
    glVertex2f(12.0,8.0);
    glVertex2f(11.5,9);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(0.0,1.0,1.0,0.0);
    glVertex2f(11.0,8.0);
    glVertex2f(11.0,3.0);
    glVertex2f(12.0,3.0);
    glVertex2f(12.0,8.0);

    glEnd();
    glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);

   glColor3f(1.0,1.0,1.0);
    glVertex2f(5.0,10.0);
    glVertex2f(6.0,10.0);
    glVertex2f(5.5,11.0);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(0.0,1.0,1.0,0.0);
    glVertex2f(5.0,10.0);
    glVertex2f(5.0,3.0);
    glVertex2f(6.0,3.0);
    glVertex2f(6.0,10.0);

    glEnd();
    glPopMatrix();




glPushMatrix();
glBegin(GL_TRIANGLES);

   glColor3f(1.0,1.0,1.0);
    glVertex2f(9.0,10.0);
    glVertex2f(10.0,10.0);
    glVertex2f(9.5,11.0);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(0.0,1.0,1.0,0.0);
    glVertex2f(9.0,10.0);
    glVertex2f(9.0,3.0);
    glVertex2f(10.0,3.0);
    glVertex2f(10.0,10.0);

    glEnd();
    glPopMatrix();


glPushMatrix();
glBegin(GL_TRIANGLES);

   glColor3f(1.0,1.0,1.0);
    glVertex2f(7.0,12.0);
    glVertex2f(8.0,12.0);
    glVertex2f(7.5,13);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(0.0,1.0,1.0,0.0);
    glVertex2f(7.0,12.0);
    glVertex2f(7.0,3.0);
    glVertex2f(8.0,3.0);
    glVertex2f(8.0,12.0);

    glEnd();
    glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(1.0,0.0,0.0,0.0);
    glVertex2f(2.0,2.0);
    glVertex2f(1.0,1.0);
    glVertex2f(14.0,1.0);
    glVertex2f(13.0,2.0);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(1.0,1.0,1.0,1.0);
    glVertex2f(3.0,3.0);
    glVertex2f(2.0,2.0);
    glVertex2f(13.0,2.0);
    glVertex2f(12.0,3.0);

    glEnd();
    glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);

       glColor4f(1.0,1.0,1.0,1.0);
    glVertex2f(15.0,14.0);
    glVertex2f(15.0,1.0);
    glVertex2f(21.0,1.0);
    glVertex2f(21.0,14.0);

    glEnd();
    glPopMatrix();
    glPushMatrix();
glBegin(GL_QUADS);


     glColor4f(0.0,1.0,0.0,1.0);
    glVertex2f(16.0,11.0);
    glVertex2f(16.0,9.0);
    glVertex2f(17.0,9.0);
    glVertex2f(17.0,11.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
glBegin(GL_QUADS);


     glColor4f(0.0,1.0,0.0,1.0);
    glVertex2f(16.0,8.0);
    glVertex2f(16.0,5.0);
    glVertex2f(17.0,5.0);
    glVertex2f(17.0,8.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
glBegin(GL_QUADS);

    glColor4f(0.0,1.0,0.0,1.0);
    glVertex2f(16.0,4.0);
    glVertex2f(16.0,2.0);
    glVertex2f(17.0,2.0);
    glVertex2f(17.0,4.0);

    glEnd();
    glPopMatrix();
    glPushMatrix();
glBegin(GL_QUADS);

     glColor4f(0.0,1.0,0.0,1.0);
    glVertex2f(19.0,4.0);
    glVertex2f(19.0,2.0);
    glVertex2f(20.0,2.0);
    glVertex2f(20.0,4.0);

    glEnd();
    glPopMatrix();
    glPushMatrix();
glBegin(GL_QUADS);


     glColor4f(0.0,1.0,0.0,1.0);
    glVertex2f(19.0,8.0);
    glVertex2f(19.0,5.0);
    glVertex2f(20.0,5.0);
    glVertex2f(20.0,8.0);

    glEnd();
    glPopMatrix();
    glPushMatrix();
glBegin(GL_QUADS);

        glColor4f(0.0,1.0,0.0,1.0);
    glVertex2f(19.0,11.0);
    glVertex2f(19.0,9.0);
    glVertex2f(20.0,9.0);
    glVertex2f(20.0,11.0);

    glEnd();
    glPopMatrix();




glFlush();
glutSwapBuffers();
}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("GLUTquadPoly");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
