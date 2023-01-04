#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include <math.h>
float zRotated,qx=0,rx=0,ry=0,rz=0;

float step=0;
//----------------------keyboard--------------------------
void keyboard(unsigned char Key,int x,int y)
    {
   if(Key=='w'){qx-=0.1;} if(Key=='s'){qx+=0.1;}//forward and back   moving

    if(Key=='.'){rz-=10;} if(Key=='2'){rz+=10;}//forward and back // angle
    if(Key==','){rx-=10;} if(Key=='6'){rx+=10;}//left and right   // angle
    if(Key=='>'){rz-=10;} if(Key=='2'){rz+=10;}//forward and back // angle
    if(Key=='<.'){rx-=10;} if(Key=='6'){rx+=10;}//left and right   // angle

    glutPostRedisplay();
    }
void onMouseClick(int button, int state, int x, int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {

        rx-=100;
    }
}
void init(){
    glClearColor(0,0,0,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(100,-100,100,-100,100,-100);
    glMatrixMode(GL_MODELVIEW);

}


//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}
void planet()
{
    glColor3f(0.2,0,0);
    glPushMatrix ();
       glTranslatef    (-3, 4, -1.0);
       glutSolidSphere(0.6,100, 500);
    glPopMatrix ();

    glPushMatrix();

    glColor3f(1,1,0);
    glTranslatef(-3, 4, -1.0);
    glutSolidTorus(0.1,1,80,80);
    glPopMatrix();

    //-another one---
     glColor3f(0,0,1);
    glPushMatrix ();
       glTranslatef    (3, -2, -1.0);
       glutSolidSphere(0.6,100, 500);
    glPopMatrix ();
}
void stars()
{

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-7);
    glVertex2f(-0.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-7);
    glVertex2f(-1.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-7);
    glVertex2f(-2.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-7);
    glVertex2f(-3.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-7);
    glVertex2f(-4.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-7);
    glVertex2f(-5.6,-6.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-7);
    glVertex2f(-8.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-7);
    glVertex2f(-7.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-7);
    glVertex2f(-6.6,-6.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-7);
    glVertex2f(-9.6,-6.9);

    glEnd();
    //second 2 row
    //stars
    //first 4 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-6);
    glVertex2f(10,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-6);
    glVertex2f(8.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-6);
    glVertex2f(7.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-6);
    glVertex2f(6.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-6);
    glVertex2f(5.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-6);
    glVertex2f(4.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-6);
    glVertex2f(3.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-6);
    glVertex2f(2.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-6);
    glVertex2f(1.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-6);
    glVertex2f(0.9,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-6);
    glVertex2f(-0.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-6);
    glVertex2f(-1.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-6);
    glVertex2f(-2.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-6);
    glVertex2f(-3.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-6);
    glVertex2f(-4.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-6);
    glVertex2f(-5.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-6);
    glVertex2f(-6.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-6);
    glVertex2f(-7.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-6);
    glVertex2f(-8.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-6);
    glVertex2f(-9.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-6);
    glVertex2f(-10.1,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-6);
    glVertex2f(-10,-5.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-5);
    glVertex2f(-9.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-5);
    glVertex2f(9.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-5);
    glVertex2f(8.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-5);
    glVertex2f(7.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-5);
    glVertex2f(6.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-5);
    glVertex2f(5.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-5);
    glVertex2f(4.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-5);
    glVertex2f(3.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-5);
    glVertex2f(2.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-5);
    glVertex2f(1.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-5);
    glVertex2f(0.4,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-5);
    glVertex2f(-0.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-5);
    glVertex2f(-1.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-5);
    glVertex2f(-2.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-5);
    glVertex2f(-3.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-5);
    glVertex2f(-4.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-5);
    glVertex2f(-5.6,-4.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-5);
    glVertex2f(-8.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-5);
    glVertex2f(-7.6,-4.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-5);
    glVertex2f(-6.6,-4.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-4);
    glVertex2f(10,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-4);
    glVertex2f(8.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-4);
    glVertex2f(7.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-4);
    glVertex2f(6.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-4);
    glVertex2f(5.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-4);
    glVertex2f(4.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-4);
    glVertex2f(3.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-4);
    glVertex2f(2.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-4);
    glVertex2f(1.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-4);
    glVertex2f(0.9,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-4);
    glVertex2f(-0.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-4);
    glVertex2f(-1.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-4);
    glVertex2f(-2.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-4);
    glVertex2f(-3.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-4);
    glVertex2f(-4.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-4);
    glVertex2f(-5.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-4);
    glVertex2f(-6.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-4);
    glVertex2f(-7.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-4);
    glVertex2f(-8.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-4);
    glVertex2f(-9.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-4);
    glVertex2f(-10.1,-3.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-4);
    glVertex2f(-10,-3.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-3);
    glVertex2f(9.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-3);
    glVertex2f(8.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-3);
    glVertex2f(7.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-3);
    glVertex2f(6.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-3);
    glVertex2f(5.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-3);
    glVertex2f(4.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-3);
    glVertex2f(3.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-3);
    glVertex2f(2.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-3);
    glVertex2f(1.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-3);
    glVertex2f(0.4,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-3);
    glVertex2f(-0.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-3);
    glVertex2f(-1.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-3);
    glVertex2f(-2.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-3);
    glVertex2f(-3.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-3);
    glVertex2f(-4.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-3);
    glVertex2f(-5.6,-2.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-3);
    glVertex2f(-8.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-3);
    glVertex2f(-7.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-3);
    glVertex2f(-6.6,-2.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-3);
    glVertex2f(-9.6,-2.9);

    glEnd();
    //second 5 row
    //first 6 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,2);
    glVertex2f(10,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,2);
    glVertex2f(8.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,2);
    glVertex2f(7.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,2);
    glVertex2f(6.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,2);
    glVertex2f(5.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,2);
    glVertex2f(4.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,2);
    glVertex2f(3.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,2);
    glVertex2f(2.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,2);
    glVertex2f(1.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,2);
    glVertex2f(0.9,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,2);
    glVertex2f(-0.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,2);
    glVertex2f(-1.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,2);
    glVertex2f(-2.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,2);
    glVertex2f(-3.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,2);
    glVertex2f(-4.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,2);
    glVertex2f(-5.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,2);
    glVertex2f(-6.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,2);
    glVertex2f(-7.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,2);
    glVertex2f(-8.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,2);
    glVertex2f(-9.1,1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,1);
    glVertex2f(-10.1,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,1);
    glVertex2f(-10,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,1);
    glVertex2f(-9.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,1);
    glVertex2f(9.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,1);
    glVertex2f(8.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,1);
    glVertex2f(7.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,1);
    glVertex2f(6.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,1);
    glVertex2f(5.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,1);
    glVertex2f(4.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,1);
    glVertex2f(3.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,1);
    glVertex2f(2.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,1);
    glVertex2f(1.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,1);
    glVertex2f(0.4,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,1);
    glVertex2f(-0.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,1);
    glVertex2f(-1.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,1);
    glVertex2f(-2.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,1);
    glVertex2f(-3.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,1);
    glVertex2f(-4.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,1);
    glVertex2f(-5.6,0.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,1);
    glVertex2f(-8.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,1);
    glVertex2f(-7.6,0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,1);
    glVertex2f(-6.6,0.9);

    glEnd();
    //first 2 row
    //first 3 row
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(10,-1);
    glVertex2f(10,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.9,-1);
    glVertex2f(8.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.9,-1);
    glVertex2f(7.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.9,-1);
    glVertex2f(6.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.9,-1);
    glVertex2f(5.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.9,-1);
    glVertex2f(4.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.9,-1);
    glVertex2f(3.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.9,-1);
    glVertex2f(2.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.9,-1);
    glVertex2f(1.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.9,-1);
    glVertex2f(0.9,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.1,-1);
    glVertex2f(-0.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.1,-1);
    glVertex2f(-1.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.1,-1);
    glVertex2f(-2.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.1,-1);
    glVertex2f(-3.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.1,-1);
    glVertex2f(-4.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.1,-1);
    glVertex2f(-5.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.1,-1);
    glVertex2f(-6.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.1,-1);
    glVertex2f(-7.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.1,-1);
    glVertex2f(-8.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.1,-1);
    glVertex2f(-9.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10.1,-1);
    glVertex2f(-10.1,-0.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-10,-1);
    glVertex2f(-10,-0.9);



    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(9.4,-2);
    glVertex2f(9.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(8.4,-2);
    glVertex2f(8.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(7.4,-2);
    glVertex2f(7.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(6.4,-2);
    glVertex2f(6.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(5.4,-2);
    glVertex2f(5.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(4.4,-2);
    glVertex2f(4.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(3.4,-2);
    glVertex2f(3.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(2.4,-2);
    glVertex2f(2.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(1.4,-2);
    glVertex2f(1.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.4,-2);
    glVertex2f(0.4,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.6,-2);
    glVertex2f(-0.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-1.6,-2);
    glVertex2f(-1.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-2.6,-2);
    glVertex2f(-2.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-3.6,-2);
    glVertex2f(-3.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-4.6,-2);
    glVertex2f(-4.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-5.6,-2);
    glVertex2f(-5.6,-1.9);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-8.6,-2);
    glVertex2f(-8.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-7.6,-2);
    glVertex2f(-7.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-6.6,-2);
    glVertex2f(-6.6,-1.9);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-9.6,-2);
    glVertex2f(-9.6,-1.9);

    glEnd();
    //end--stars

}
void wings()
{
    glBegin (GL_QUADS) ;

    glColor3f(0.2,0.2,0.2); //red
    glVertex3f(-1.0+2+qx,1.0,1.0+1);
    glVertex3f(-1.0+2+qx,0.8,1.0+1);
    glVertex3f(1.0+2+qx,0.8,1.0+1);
    glVertex3f(1.0+2+qx,1.0,1.0+1);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(1.0+qx,1.0,-1.0);
    glVertex3f(1.0+qx,0.8,-1.0);
    glVertex3f (-1.0+qx,0.8,-1.0);
    glVertex3f(-1.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(1.0+2+qx,1.0,1.0+1);
    glVertex3f(1.0+2+qx,0.8,1.0+1);
    glVertex3f(1.0+qx,0.8,-1.0);
    glVertex3f(1.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(-1.0+qx,1.0,-1.0);
    glVertex3f(-1.0+qx,0.8,-1.0);
    glVertex3f(-1.0+2+qx,0.8,1.0+1);
    glVertex3f(-1.0+2+qx,1.0,1.0+1);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (-1.0+qx,1.0,-1.0);
    glVertex3f (-1.0+2+qx,1.0,1.0+1);
    glVertex3f(1.0+2+qx,1.0,1.0+1);
    glVertex3f(1.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (-1.0+qx,0.8,-1.0);
    glVertex3f(-1.0+2+qx,0.8,1.0+1);
    glVertex3f(1.0+2+qx,0.8,1.0+1);
    glVertex3f(1.0+qx,0.8,-1.0);

    glEnd();

    //---------

    glBegin (GL_QUADS) ;

    glColor3f(0.2,0.2,0.2); //red
    glVertex3f(-1.0+2+qx,1.0,1.0-5);
    glVertex3f(-1.0+2+qx,0.8,1.0-5);
    glVertex3f(1.0+2+qx,0.8,1.0-5);
    glVertex3f(1.0+2+qx,1.0,1.0-5);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(1.0+qx,1.0,-1.0);
    glVertex3f(1.0+qx,0.8,-1.0);
    glVertex3f (-1.0+qx,0.8,-1.0);
    glVertex3f(-1.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(1.0+2+qx,1.0,1.0-5);
    glVertex3f(1.0+2+qx,0.8,1.0-5);
    glVertex3f(1.0+qx,0.8,-1.0);
    glVertex3f(1.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(-1.0+qx,1.0,-1.0);
    glVertex3f(-1.0+qx,0.8,-1.0);
    glVertex3f(-1.0+2+qx,0.8,1.0-5);
    glVertex3f(-1.0+2+qx,1.0,1.0-5);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (-1.0+qx,1.0,-1.0);
    glVertex3f (-1.0+2+qx,1.0,1.0-5);
    glVertex3f(1.0+2+qx,1.0,1.0-5);
    glVertex3f(1.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (-1.0+qx,0.8,-1.0);
    glVertex3f(-1.0+2+qx,0.8,1.0-5);
    glVertex3f(1.0+2+qx,0.8,1.0-5);
    glVertex3f(1.0+qx,0.8,-1.0);

    glEnd();
    //----back of it----
    glBegin (GL_QUADS) ;

    glColor3f(0.2,0.2,0.2); //red
    glVertex3f(5.0+2+qx,1.0,1.0-0.5);
    glVertex3f(5.0+2+qx,0.8,1.0-0.5);
    glVertex3f(7.0+2+qx,0.8,1.0-0.5);
    glVertex3f(7.0+2+qx,1.0,1.0-0.5);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(5.0+qx,1.0,-1.0);
    glVertex3f(5.0+qx,0.8,-1.0);
    glVertex3f (5.0+qx,0.8,-1.0);
    glVertex3f(5.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(7.0+2+qx,1.0,1.0-0.5);
    glVertex3f(7.0+2+qx,0.8,1.0-0.5);
    glVertex3f(7.0+qx,0.8,-1.0);
    glVertex3f(7.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(5.0+qx,1.0,-1.0);
    glVertex3f(5.0+qx,0.8,-1.0);
    glVertex3f(7.0+2+qx,0.8,1.0-0.5);
    glVertex3f(7.0+2+qx,1.0,1.0-0.5);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (5.0+qx,1.0,-1.0);
    glVertex3f (5.0+2+qx,1.0,1.0-0.5);
    glVertex3f(7.0+2+qx,1.0,1.0-0.5);
    glVertex3f(7.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (5.0+qx,0.8,-1.0);
    glVertex3f(5.0+2+qx,0.8,1.0-0.5);
    glVertex3f(7.0+2+qx,0.8,1.0-0.5);
    glVertex3f(7.0+qx,0.8,-1.0);

    glEnd();

    //---------

    glBegin (GL_QUADS) ;

    glColor3f(0.2,0.2,0.2); //red
    glVertex3f(5.0+2+qx,1.0,1.0-3.5);
    glVertex3f(5.0+2+qx,0.8,1.0-3.5);
    glVertex3f(7.0+2+qx,0.8,1.0-3.5);
    glVertex3f(7.0+2+qx,1.0,1.0-3.5);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(7.0+qx,1.0,-1.0);
    glVertex3f(7.0+qx,0.8,-1.0);
    glVertex3f (5.0+qx,0.8,-1.0);
    glVertex3f(5.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(7.0+2+qx,1.0,1.0-3.5);
    glVertex3f(7.0+2+qx,0.8,1.0-3.5);
    glVertex3f(7.0+qx,0.8,-1.0);
    glVertex3f(7.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f(5.0+qx,1.0,-1.0);
    glVertex3f(5.0+qx,0.8,-1.0);
    glVertex3f(5.0+2+qx,0.8,1.0-3.5);
    glVertex3f(5.0+2+qx,1.0,1.0-3.5);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (5.0+qx,1.0,-1.0);
    glVertex3f (5.0+2+qx,1.0,1.0-3.5);
    glVertex3f(7.0+2+qx,1.0,1.0-3.5);
    glVertex3f(7.0+qx,1.0,-1.0);

    glColor3f(0.2,0.2,0.2);
    glVertex3f (5.0+qx,0.8,-1.0);
    glVertex3f(5.0+2+qx,0.8,1.0-3.5);
    glVertex3f(7.0+2+qx,0.8,1.0-3.5);
    glVertex3f(7.0+qx,0.8,-1.0);

    glEnd();

}
void body()
{
    glColor3f(0.5,0.5,0.5);
    glPushMatrix();
    glTranslatef(2+qx,1,-1);
    glScalef(20,2,2);
    glutSolidCube(0.5);
    glColor3f(1,1,1);
    glutWireCube(0.5);

    glPopMatrix();
    ///////face of the plane
    glColor3f(0.5,0.5,0.5);
    glPushMatrix ();
       glTranslatef    (-3+qx, 1, -1.0);
       glutSolidSphere(0.6,100, 500);
    glPopMatrix ();


}

void pyramid()
{
    //pyramid--

    glTranslatef(6.5+qx,2,-1);
    glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(0.2,0.2,0.2);
      glVertex3f( 0.0f, 1.0f, 0.0f);

      glVertex3f(-0.5f, -0.5f, 0.5f);

      glVertex3f(0.5f, -0.5f, 0.5f);

      // Right

      glVertex3f(0.0f, 1.0f, 0.0f);

      glVertex3f(0.5f, -0.5f, 0.5f);

      glVertex3f(0.5f, -0.5f, -0.5f);

      // Back

      glVertex3f(0.0f, 1.0f, 0.0f);

      glVertex3f(0.5f, -0.5f, -0.5);

      glVertex3f(-0.5f, -0.5f, -0.5f);

      // Left

      glVertex3f( 0.0f, 1.0f, 0.0f);

      glVertex3f(-0.5f,-0.5f,-0.5f);

      glVertex3f(-0.5f,-0.5f, 0.5f);
   glEnd();   // Done drawing the pyramid
}
void plane()
{
    wings();
    body();
    pyramid();
}
//------------------------------  display   -------------------------------

void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef    (0.0, 0.0, -15.0);
    stars();
    planet();
	//Your code is written here
	glRotatef(rz,1,0,0);//rotate it up down
    glRotatef(rx,0,1,0);//rotate it right left

    plane();

    glutSwapBuffers();
}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//----------------------------------  main  ------------------------------------


int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); // buffer mode
    glutInitWindowSize     (800, 700);
    glutInitWindowPosition (700, 200);
    glutCreateWindow       ("20100942");

    glClearColor (1.0, 1.0, 1.0, 0.0);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(onMouseClick);
    dPlaySound("background.way",SND_ASYNC|SND_LOOP);
    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0,0,0,0);



    glutMainLoop();
}
