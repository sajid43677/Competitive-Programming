#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>

#define PI          3.141516


GLfloat position = 0.0f;
GLfloat speed = 0.03f;


GLfloat positionjrtree1 = 0.00f;
GLfloat speedtree = 0.10f;


GLfloat positionCloud3 = 0.00f;
GLfloat speedCloud3 = 0.01f;
GLfloat positionCloud1 =0.00f;
GLfloat speedCloud1 = 0.02f;

GLfloat positionCloud2 =0.00f;
GLfloat speedCloud2 = 0.02f;
GLfloat positionCloud4 = 0.00f;
GLfloat speedCloud4 = 0.01f;

void update(int value)
{

    if (positionCloud1<-1.0)
    {
        positionCloud1 = 2.0f;
    }
    else if (positionCloud2>1.5)
    {
        positionCloud2 =-1.8;

    }
    else if (positionCloud3<-2.0)
    {
        positionCloud3 =1.0;

    }
    else if (positionCloud4>2.5)
    {
        positionCloud4 =-1.8;

    }
    else if(position>2)
        position = -1.0f;

    else if(positionjrtree1>1.5)
        positionjrtree1 =-1.5;

    position += speed;
    positionCloud1 -= speedCloud1;
    positionCloud2 =positionCloud2+speedCloud2;
    positionCloud3 -= speedCloud3;
    positionCloud4 += speedCloud4;
    positionjrtree1+=speedtree;

    //positionCloud2 += speedCloud2;


    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}

void Display(void);


void StartingText()
{
    char text[120];
    sprintf(text, "SIX SEASSONS",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -28, 32 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -20, 22 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"AL SHAKIB E ELAHI",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20, -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"SAJID KAMAL JOY",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20, -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"SADIA KHANAM",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20, -15 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"and ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( 13, -15 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"KAZI RUBAB BASAR",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20, -20 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press 1,2,3 to continue the story",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42, -30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press A,N continue the EFFECT ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42, -35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    // sprintf(text,"Press  to continue the story  ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42, -40 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    //sprintf(text,"Press  to continue the story ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42, -45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40, -10 );
        }
        else
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}

void circle(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}


void circle1(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}


void rainCloud()
{

    circle(-2.03,.95,.1);

    circle(-1.84,.93,.15);
    circle(-1.54,.93,.18);
    circle(-1.28,.93,.15);
    circle(-1.0,.93,.17);

    circle(-.93,.95,.1);
    circle(-.72,.93,.15);
    circle(-.5,.93,.18);
    circle(-.28,.93,.15);
    circle(0.0,.95,.17);
    circle(.2,.93,.15);
    circle(.43,.93,.2);
    circle(.65,.93,.13);
    circle(.8,.95,.15);
    circle(.95,.95,.08);
}


void reshape(int w, int h)
{
    float aspectRatio = (float)w/(float)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);

}

void Display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-20);
    StartingText();
    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);

}
void makeCircle(float a,float b,float c)
{

    int i;

    glPushMatrix();
    GLfloat  p1=a;
    GLfloat q1=b;
    GLfloat r1 =c;
    int tringle2=100;

    GLfloat tp2 =2.0f * 3.1416  ;
    glBegin (GL_TRIANGLE_FAN);
    glVertex2f (p1,q1);
    for(i= 0; i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );


    }
    glEnd ();

}

void make_quads(float a,float b,float c,float d,float e,float f,float g,float h)
{
    glBegin(GL_QUADS);
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);
    glVertex2f(g,h);
    glEnd();

}
void make_triangles(float a,float b,float c,float d,float e,float f)
{
    glBegin(GL_TRIANGLES);
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);
    glEnd();

}


void sky()
{

    //Sky Upper Portion
    glColor3ub(214, 234, 248);
    make_quads(1.0f,0.71,-1.0f, 0.57,-1.0f,0.68,1.0,0.74);
    glLoadIdentity();
    // Upper Portion Triangle
    glColor3ub(214, 234, 248);
    make_triangles(-0.57, 0.8,-0.2,0.85,-0.33,0.85);
    glLoadIdentity();
    // Right Side of Triangle
    glColor3ub(214, 234, 248);
    make_triangles(1.0f,0.635,0.63f, 0.60,1.0f, 0.67f);
    glLoadIdentity();

    // Middle Triangle

    glColor3ub(214, 234, 248);
    make_triangles(-.2f, 0.58,0.4, 0.63,.05,0.62);
    glLoadIdentity();
}



void cloud()
{

    //Place for Megh

    //Cloud One (Left To Right)
    glPushMatrix();
    glColor3ub (244, 246, 247);
    glTranslatef(positionCloud1,0.0f, 0.0f);
    makeCircle(-0.80,0.82,0.08);
    //2
    makeCircle(-0.75,0.82,0.07);
    //3
    makeCircle(-0.85f,0.82,0.07);
    glPopMatrix();


    //Second Cloud
    glPushMatrix();
    glColor3ub (244, 246, 247);
    glTranslatef(positionCloud2,0.0f, 0.0f);
    makeCircle(0.80,0.76f,0.08);
    makeCircle(0.75,0.76f,0.07);
    makeCircle(0.85,0.76f,0.07);
    glPopMatrix();



    //Third Cloud
    glPushMatrix();
    glColor3ub (244, 246, 247);
    glTranslatef(positionCloud3,0.0f, 0.0f);
    makeCircle(0.65,0.670,0.07);
    makeCircle(0.75,0.64,0.08);
    makeCircle(0.72,0.76,0.08);
    glPopMatrix();



    //Fourth Cloud
    glPushMatrix();
    glColor3ub (244, 246, 247);
    glTranslatef(positionCloud4,0.0f, 0.0f);
    makeCircle(-0.65,0.80,0.07);
    makeCircle(-0.75,0.77,0.08);
    makeCircle(-0.72,0.89,0.08);
    glPopMatrix();
    //End of Megh

}

void sun()
{

    //Sun
    glColor3ub (244, 208, 63);
    makeCircle(0.80f,0.82f,0.09f);


}
void Grass()
{

    glColor3ub(104, 159, 56);
    make_quads(1.0,-0.34,-1.0,-0.34,-1.0,0.45f,1.0,0.45);


}

void Soil()
{
    glColor3ub(220, 118, 51);
    make_quads(1.0,-0.40,-1.0f,-0.40,-1.0,-0.34,1.0,-0.34);

}


void threetree()
{


    //left tree
    glColor3ub(146, 43, 33);
    make_quads(0.96, -0.4,0.94, -0.4f,0.94, -0.35,0.96f, -0.35);
    glColor3ub(25, 111, 61);
    make_quads(0.95, -0.37,0.9, -0.36,0.92, -0.327,0.95, -0.33);
    make_quads(1.0, -0.36,0.95, -0.37,0.95, -0.33,0.97, -0.327);
    make_quads(0.95, -0.33,0.9, -0.329,0.927, -0.28,0.95, -0.287);
    make_quads(0.998,-0.329,0.95, -0.33,0.95, -0.28,0.97, -0.2);
    make_quads(0.95, -0.287,0.91, -0.279,0.93, -0.24,0.95, -0.24);
    make_quads(0.99, -0.287,0.91, -0.279,0.94, -0.24,0.97, -0.24);
    make_quads(0.984, -0.24, 0.917, -0.24,0.938f, -0.2,0.968, -0.2f);
    make_triangles(0.978, -0.2,0.927, -0.2,0.954, -0.13);

    // Tree 2

    glBegin(GL_QUADS);
    glColor3ub(146, 43, 33);
    glVertex2f(0.86f, -0.4f);
    glVertex2f(0.84f, -0.4f);
    glVertex2f(0.84f, -0.35f);
    glVertex2f(0.86f, -0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(0.85f, -0.37f);
    glVertex2f(0.8f, -0.36f);
    glVertex2f(0.82f, -0.327f);
    glVertex2f(0.85f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(.90f, -0.36f);
    glVertex2f(0.85f, -0.37f);
    glVertex2f(0.85f, -0.33f);
    glVertex2f(0.87f, -0.327f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(0.85f, -0.33f);
    glVertex2f(0.8f, -0.329f);
    glVertex2f(0.827f, -0.28f);
    glVertex2f(0.85f, -0.287f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(0.898f,-0.329f);
    glVertex2f(0.85f, -0.33f);
    glVertex2f(0.85f, -0.28f);
    glVertex2f(0.87f, -0.28f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(0.85f, -0.287f);
    glVertex2f(0.81f, -0.279f);
    glVertex2f(0.83f, -0.24f);
    glVertex2f(0.85f, -0.24f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(0.89f, -0.287f);
    glVertex2f(0.81f, -0.279f);
    glVertex2f(0.84f, -0.24f);
    glVertex2f(0.87f, -0.24f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(25, 111, 61);
    glVertex2f(0.884f, -0.24f);
    glVertex2f(0.817f, -0.24f);
    glVertex2f(0.838f, -0.2f);
    glVertex2f(0.868f, -0.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(25, 111, 61);
    glVertex2f(0.878f, -0.2f);
    glVertex2f(0.827f, -0.2f);
    glVertex2f(0.854f, -0.13f);
    glEnd();

// End of 2nd Tree


//Tree Back Side



    glBegin(GL_QUADS);
    glColor3ub(146, 43, 33);
    glVertex2f(0.91f, -0.4f);
    glVertex2f(0.89f, -0.4f);
    glVertex2f(0.89f, -0.35f);
    glVertex2f(0.91f, -0.35f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 102);
    glVertex2f(0.95f, -0.37f);
    glVertex2f(0.85f, -0.37f);
    glVertex2f(0.9f, -0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 102);
    glVertex2f(0.95f, -0.33f);
    glVertex2f(0.85f, -0.33f);
    glVertex2f(0.9f, -0.27f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 102);
    glVertex2f(0.94f, -0.29f);
    glVertex2f(0.86f, -0.29f);
    glVertex2f(0.9f, -0.22f);

    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 102);
    glVertex2f(0.93f, -0.25f);
    glVertex2f(0.87f, -0.25f);
    glVertex2f(0.90f, -0.2f);

    glEnd();


}

void FoodCorner()
{
    //Food Corner


    //Right
    glBegin(GL_QUADS);
    glColor3ub(102, 0, 51);
    glVertex2f(0.94f, -0.11f);
    glVertex2f(0.928f, -0.11f);
    glVertex2f(0.928f, 0.18f);
    glVertex2f(0.94f, 0.18f);
    glEnd();


    //Left
    glBegin(GL_QUADS);
    glColor3ub(102, 0, 51);
    glVertex2f(0.62f, -0.11f);
    glVertex2f(0.608f, -0.11f);
    glVertex2f(0.608f, 0.18f);
    glVertex2f(0.62f, 0.18f);
    glEnd();


    //Right Support
    glBegin(GL_QUADS);
    glColor3ub(102, 0, 51);
    glVertex2f(0.91f, -0.06f);
    glVertex2f(0.90f, -0.06f);
    glVertex2f(0.90f, 0.18f);
    glVertex2f(0.91f, 0.18f);
    glEnd();


    //Left Support
    glBegin(GL_QUADS);
    glColor3ub(102, 0, 51);
    glVertex2f(0.64f, -0.06f);
    glVertex2f(0.651f, -0.06f);
    glVertex2f(0.651f, 0.18f);
    glVertex2f(0.64f, 0.18f);
    glEnd();


    //Shed

    glBegin(GL_QUADS);
    glColor3ub(46, 204, 113);
    glVertex2f(0.970f, 0.18f);
    glVertex2f(0.58f, 0.18f);
    glVertex2f(0.62f, 0.33f);
    glVertex2f(0.94f, 0.33f);
    glEnd();

    //Below Shed
    glBegin(GL_QUADS);
    glColor3ub(0, 105, 92);
    glVertex2f(0.90f, 0.18f);
    glVertex2f(0.651f, 0.18f);
    glVertex2f(0.651f, 0.02f);
    glVertex2f(0.90f, 0.02f);
    glEnd();

    //Upper Ground
    glBegin(GL_QUADS);
    glColor3ub(130, 224, 170);
    glVertex2f(0.93f,-0.11f);
    glVertex2f(0.618f,-0.11f);
    glVertex2f(0.612f, 0.02f);
    glVertex2f(0.937f, 0.02f);
    glEnd();

    //Design


    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(0.88f,-0.11f);
    glVertex2f(0.672f,-0.11f);
    glVertex2f(0.662f,-0.03f);
    glVertex2f(0.89f,-0.03f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(0.664f,-0.11f);
    glVertex2f(0.660f,-0.11f);
    glVertex2f(0.652f,-0.015f);
    glVertex2f(0.656f,-0.015f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(0.652f,-0.015f);
    glVertex2f(0.902f,-0.015f);
    glVertex2f(0.902f,-0.010f);
    glVertex2f(0.652f,-0.010f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(240, 243, 244);
    glVertex2f(0.890f,-0.11f);
    glVertex2f(0.885f,-0.11f);
    glVertex2f(0.900f, -.01f);
    glVertex2f(0.905f, -.01f);
    glEnd();

}


//Medicine Store

void Medicine()
{
    //Medicine Store
    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(0.52f, -0.11f);
    glVertex2f(0.24f, -0.11f);
    glVertex2f(0.24f, 0.26f);
    glVertex2f(0.52f, 0.26f);
    glEnd();

    //Sign Board
    glBegin(GL_QUADS);
    glColor3ub(205, 97, 85);
    glVertex2f(0.535f, 0.26f);
    glVertex2f(0.215f, 0.26f);
    glVertex2f(0.215f, 0.35f);
    glVertex2f(0.535f, 0.35f);
    glEnd();

    //Door
    glBegin(GL_QUADS);
    glColor3ub(251, 252, 252);
    glVertex2f(0.42f, -0.11f);
    glVertex2f(0.34f, -0.11f);
    glVertex2f(0.34f, 0.14f);
    glVertex2f(0.42f, 0.14f);
    glEnd();

    //Upper Door

    glBegin(GL_QUADS);
    glColor3ub(251, 252, 252);
    glVertex2f(0.42f, 0.16f);
    glVertex2f(0.34f, 0.16f);
    glVertex2f(0.34f, 0.24f);
    glVertex2f(0.42f, 0.24f);
    glEnd();


    //Blue Down

    glBegin(GL_QUADS);
    glColor3ub(21, 67, 96);
    glVertex2f(0.41f, -0.03f);
    glVertex2f(0.35f, -0.03f);
    glVertex2f(0.35f, 0.12f);
    glVertex2f(0.41f, 0.12f);
    glEnd();


    //Gray Down
    glBegin(GL_QUADS);
    glColor3ub(189, 195, 199);
    glVertex2f(0.41f, -0.04f);
    glVertex2f(0.35f, -0.04f);
    glVertex2f(0.35f, -0.087f);
    glVertex2f(0.41f, -0.087f);
    glEnd();

    //Blue Upper

    glBegin(GL_QUADS);
    glColor3ub(21, 67, 96);
    glVertex2f(0.41f, 0.17f);
    glVertex2f(0.35f, 0.17f);
    glVertex2f(0.35f, 0.23f);
    glVertex2f(0.41f, 0.23f);
    glEnd();



    //Left
    glBegin(GL_QUADS);
    glColor3ub(251, 252, 252);
    glVertex2f(0.325f,-0.04f);
    glVertex2f(0.255f,-0.04f);
    glVertex2f(0.255f, 0.24f);
    glVertex2f(0.325f, 0.24f);
    glEnd();

    //Left Design

    glBegin(GL_QUADS);
    glColor3ub(27, 79, 114 );
    glVertex2f(0.315f,-0.02f);
    glVertex2f(0.265f,-0.02f);
    glVertex2f(0.265f, 0.22f);
    glVertex2f(0.315f, 0.22f);
    glEnd();




    //Right
    glBegin(GL_QUADS);
    glColor3ub(251, 252, 252);
    glVertex2f(0.505f, -0.04f);
    glVertex2f(0.435f, -0.04f);
    glVertex2f(0.435f, 0.24f);
    glVertex2f(0.505f, 0.24f);
    glEnd();


    //Right Design
    glBegin(GL_QUADS);
    glColor3ub(27, 79, 114 );
    glVertex2f(0.495f, -0.02f);
    glVertex2f(0.445f, -0.02f);
    glVertex2f(0.445f, 0.22f);
    glVertex2f(0.495f, 0.22f);
    glEnd();

    //Right Medical Sign
    glBegin(GL_QUADS);
    glColor3ub(211, 47, 47);
    glVertex2f(0.475f, 0.06f);
    glVertex2f(0.465f, 0.06f);
    glVertex2f(0.465f, 0.12f);
    glVertex2f(0.475f, 0.12f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(211, 47, 47);
    glVertex2f(0.485f, 0.08f);
    glVertex2f(0.455f, 0.08f);
    glVertex2f(0.455f, 0.10f);
    glVertex2f(0.485f, 0.10f);
    glEnd();


    //Left Medical Sign

    glBegin(GL_QUADS);
    glColor3ub(211, 47, 47);
    glVertex2f(0.291f, 0.06f);
    glVertex2f(0.281f, 0.06f);
    glVertex2f(0.281f, 0.12f);
    glVertex2f(0.291f, 0.12f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(211, 47, 47);
    glVertex2f(0.301f, 0.08f);
    glVertex2f(0.271f, 0.08f);
    glVertex2f(0.271f, 0.10f);
    glVertex2f(0.301f, 0.10f);
    glEnd();


}

void Lamppost()
{

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.78f,-0.40f);
    glVertex2f(0.80f,-0.40f);
    glVertex2f(0.80f,-0.24f);
    glVertex2f(0.78f,-0.24f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.795f,-0.24f);
    glVertex2f(0.785f,-0.24f);
    glVertex2f(0.785f,0.09f);
    glVertex2f(0.795f,0.09f);
    glEnd();


//Bulb 1


    glColor3ub (249, 231, 159);
    makeCircle(0.790f,0.09f,0.02);


//Left Lamp




    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.25f,-0.40f);
    glVertex2f(0.23f,-0.40f);
    glVertex2f(0.23,-0.24f);
    glVertex2f(0.25f,-0.24f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.245f,-0.24f);
    glVertex2f(0.235f,-0.24f);
    glVertex2f(0.235,0.09f);
    glVertex2f(0.245f,0.09f);
    glEnd();


//Bulb 2


    glColor3ub (249, 231, 159);
    makeCircle(0.240,0.09,0.02);




}

void Bench()
{
    // Left Bench

//Piller 1
    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.286f,-0.365f);
    glVertex2f(0.276f,-0.365f);
    glVertex2f(0.276f,-0.18f);
    glVertex2f(0.286f,-0.18f);
    glEnd();


//Piller 2

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.486f,-0.365f);
    glVertex2f(0.476f,-0.365f);
    glVertex2f(0.476f,-0.18f);
    glVertex2f(0.486f,-0.18f);
    glEnd();



//Piller 3

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.27f,-0.4f);
    glVertex2f(0.259f,-0.4f);
    glVertex2f(0.259f,-0.315f);
    glVertex2f(0.27f,-0.315f);
    glEnd();


//Piller 4

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.499f,-0.4f);
    glVertex2f(0.489f,-0.4f);
    glVertex2f(0.489f,-0.315f);
    glVertex2f(0.499f,-0.315f);
    glEnd();


//Bench Sit 1

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.506f,-0.32f);
    glVertex2f(0.25f,-0.32f);
    glVertex2f(0.275f,-0.26f);
    glVertex2f(0.49f,-0.26f);
    glEnd();


// Bench Wood Upper 3

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.49f,-0.19f);
    glVertex2f(0.27f,-0.19f);
    glVertex2f(0.27f,-0.16f);
    glVertex2f(0.49f,-0.16f);
    glEnd();

// Bench Wood Upper 2

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.49f,-0.23f);
    glVertex2f(0.27f,-0.23f);
    glVertex2f(0.27f,-0.20f);
    glVertex2f(0.49f,-0.20f);
    glEnd();


    // Bench Wood Upper 1

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.49f,-0.255f);
    glVertex2f(0.27f,-0.255f);
    glVertex2f(0.27f,-0.24f);
    glVertex2f(0.49f,-0.24f);
    glEnd();



//Right Bench


//Piller 21
    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.548f,-0.365f);
    glVertex2f(0.539f,-0.365f);
    glVertex2f(0.539f,-0.18f);
    glVertex2f(0.548f,-0.18f);
    glEnd();


//Piller 22

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.752f,-0.365f);
    glVertex2f(0.744f,-0.365f);
    glVertex2f(0.744f,-0.18f);
    glVertex2f(0.752f,-0.18f);
    glEnd();



//Piller 23

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.53f,-0.4f);
    glVertex2f(0.519f,-0.4f);
    glVertex2f(0.519f,-0.315f);
    glVertex2f(0.53f,-0.315f);
    glEnd();


//Piller 2 4

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.768f,-0.4f);
    glVertex2f(0.758f,-0.4f);
    glVertex2f(0.758f,-0.315f);
    glVertex2f(0.768f,-0.315f);
    glEnd();


//Bench Sit 2

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.776f,-0.32f);
    glVertex2f(0.51f,-0.32f);
    glVertex2f(0.538f,-0.26f);
    glVertex2f(0.75f,-0.26f);
    glEnd();

// Bench Wood Upper 2 3

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.757f,-0.19f);
    glVertex2f(0.534f,-0.19f);
    glVertex2f(0.534f,-0.16f);
    glVertex2f(0.757f,-0.16f);
    glEnd();

// Bench Wood Upper 2 2

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.757f,-0.23f);
    glVertex2f(0.534f,-0.23f);
    glVertex2f(0.534f,-0.20f);
    glVertex2f(0.757f,-0.20f);
    glEnd();


    // Bench Wood Upper 2 1

    glBegin(GL_QUADS);
    glColor3ub(135, 54, 0);
    glVertex2f(0.757f,-0.255f);
    glVertex2f(0.534f,-0.255f);
    glVertex2f(0.534f,-0.24f);
    glVertex2f(0.757f,-0.24f);
    glEnd();

}

void MailBox()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(0.17f,-0.40f);
    glVertex2f(0.13f,-0.40f);
    glVertex2f(0.13f,-0.39f);
    glVertex2f(0.17f,-0.39f);
    glEnd();

//Ground Upper
    glBegin(GL_QUADS);
    glColor3ub(93, 109, 126);
    glVertex2f(0.164f,-0.39f);
    glVertex2f(0.137f,-0.39f);
    glVertex2f(0.137f,-0.36f);
    glVertex2f(0.164f,-0.36f);
    glEnd();

    //Ground Upper
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.164f,-0.36f);
    glVertex2f(0.137f,-0.36f);
    glVertex2f(0.137f,-0.35f);
    glVertex2f(0.164f,-0.35f);
    glEnd();


//Red
    glBegin(GL_QUADS);
    glColor3ub(183, 28, 28);
    glVertex2f(0.182f,-0.35f);
    glVertex2f(0.117f,-0.35f);
    glVertex2f(0.117f,-0.21f);
    glVertex2f(0.182f,-0.21f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(238, 238, 238);
    glVertex2f(0.149f,-0.34f);
    glVertex2f(0.149f,-0.21f);
    glEnd();


//Enter Box
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.17f,-0.26f);
    glVertex2f(0.13f,-0.26f);
    glVertex2f(0.13f,-0.23f);
    glVertex2f(0.17f,-0.23f);
    glEnd();

}

void Road()
{


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    glVertex2f(1.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-1.0f,-0.40f);
    glVertex2f(1.0f,-0.40f);
    glEnd();


}


void Fence()
{
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.98f,-0.50f);
    glVertex2f(-0.993f,-0.50f);
    glVertex2f(-0.993f,-0.20f);
    glVertex2f(-0.98f,-0.20f);
    glEnd();


    //2
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.957f,-0.50f);
    glVertex2f(-0.970f,-0.50f);
    glVertex2f(-0.970f,-0.20f);
    glVertex2f(-0.957f,-0.20f);
    glEnd();



    //3
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.934f,-0.50f);
    glVertex2f(-0.947f,-0.50f);
    glVertex2f(-0.947f,-0.20f);
    glVertex2f(-0.934f,-0.20f);
    glEnd();


    //4
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.911f,-0.50f);
    glVertex2f(-0.924f,-0.50f);
    glVertex2f(-0.924f,-0.20f);
    glVertex2f(-0.911f,-0.20f);
    glEnd();

    //5
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.888f,-0.50f);
    glVertex2f(-0.901f,-0.50f);
    glVertex2f(-0.901f,-0.20f);
    glVertex2f(-0.888f,-0.20f);
    glEnd();


    //6
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.865f,-0.50f);
    glVertex2f(-0.878f,-0.50f);
    glVertex2f(-0.878f,-0.20f);
    glVertex2f(-0.865f,-0.20f);
    glEnd();


    //7
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.842f,-0.50f);
    glVertex2f(-0.855f,-0.50f);
    glVertex2f(-0.855f,-0.20f);
    glVertex2f(-0.842f,-0.20f);
    glEnd();

    //8
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.818f,-0.50f);
    glVertex2f(-0.832f,-0.50f);
    glVertex2f(-0.832f,-0.20f);
    glVertex2f(-0.818f,-0.20f);
    glEnd();

    //9
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.795f,-0.50f);
    glVertex2f(-0.809f,-0.50f);
    glVertex2f(-0.809f,-0.20f);
    glVertex2f(-0.795f,-0.20f);
    glEnd();


//10
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.772f,-0.50f);
    glVertex2f(-0.786f,-0.50f);
    glVertex2f(-0.786f,-0.20f);
    glVertex2f(-0.772f,-0.20f);
    glEnd();

//11
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.749f,-0.50f);
    glVertex2f(-0.763f,-0.50f);
    glVertex2f(-0.763f,-0.20f);
    glVertex2f(-0.749f,-0.20f);
    glEnd();

//12
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.726f,-0.50f);
    glVertex2f(-0.740f,-0.50f);
    glVertex2f(-0.740f,-0.20f);
    glVertex2f(-0.726f,-0.20f);
    glEnd();


//13
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.703f,-0.50f);
    glVertex2f(-0.717f,-0.50f);
    glVertex2f(-0.717f,-0.20f);
    glVertex2f(-0.703f,-0.20f);
    glEnd();

//14
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.680f,-0.50f);
    glVertex2f(-0.694f,-0.50f);
    glVertex2f(-0.694f,-0.20f);
    glVertex2f(-0.680f,-0.20f);
    glEnd();


//15
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.657f,-0.50f);
    glVertex2f(-0.671f,-0.50f);
    glVertex2f(-0.671f,-0.20f);
    glVertex2f(-0.657f,-0.20f);
    glEnd();


//16
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.634f,-0.50f);
    glVertex2f(-0.648f,-0.50f);
    glVertex2f(-0.648f,-0.20f);
    glVertex2f(-0.634f,-0.20f);
    glEnd();


//17
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.611f,-0.50f);
    glVertex2f(-0.625f,-0.50f);
    glVertex2f(-0.625f,-0.20f);
    glVertex2f(-0.611f,-0.20f);
    glEnd();

//18
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.588f,-0.50f);
    glVertex2f(-0.602f,-0.50f);
    glVertex2f(-0.602f,-0.20f);
    glVertex2f(-0.588f,-0.20f);
    glEnd();


//19
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.565f,-0.50f);
    glVertex2f(-0.579f,-0.50f);
    glVertex2f(-0.579f,-0.20f);
    glVertex2f(-0.565f,-0.20f);
    glEnd();


//20
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.542f,-0.50f);
    glVertex2f(-0.556f,-0.50f);
    glVertex2f(-0.556f,-0.20f);
    glVertex2f(-0.542f,-0.20f);
    glEnd();



//21
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.519f,-0.50f);
    glVertex2f(-0.533f,-0.50f);
    glVertex2f(-0.533f,-0.20f);
    glVertex2f(-0.519f,-0.20f);
    glEnd();


//22
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.496f,-0.50f);
    glVertex2f(-0.510f,-0.50f);
    glVertex2f(-0.510f,-0.20f);
    glVertex2f(-0.496f,-0.20f);
    glEnd();


//23
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.473f,-0.50f);
    glVertex2f(-0.487f,-0.50f);
    glVertex2f(-0.487f,-0.20f);
    glVertex2f(-0.473f,-0.20f);
    glEnd();


//24
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.450,-0.50f);
    glVertex2f(-0.464,-0.50f);
    glVertex2f(-0.464,-0.20f);
    glVertex2f(-0.450,-0.20f);
    glEnd();

//25
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.427,-0.50f);
    glVertex2f(-0.441,-0.50f);
    glVertex2f(-0.441,-0.20f);
    glVertex2f(-0.427,-0.20f);
    glEnd();


//26
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.404,-0.50f);
    glVertex2f(-0.418,-0.50f);
    glVertex2f(-0.418,-0.20f);
    glVertex2f(-0.404,-0.20f);
    glEnd();

//27
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.381,-0.50f);
    glVertex2f(-0.395,-0.50f);
    glVertex2f(-0.395,-0.20f);
    glVertex2f(-0.381,-0.20f);
    glEnd();


//28
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.358,-0.50f);
    glVertex2f(-0.372,-0.50f);
    glVertex2f(-0.372,-0.20f);
    glVertex2f(-0.358,-0.20f);
    glEnd();

//29
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.335,-0.50f);
    glVertex2f(-0.349,-0.50f);
    glVertex2f(-0.349,-0.20f);
    glVertex2f(-0.335,-0.20f);
    glEnd();


//30
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.312,-0.50f);
    glVertex2f(-0.326,-0.50f);
    glVertex2f(-0.326,-0.20f);
    glVertex2f(-0.312,-0.20f);
    glEnd();


//31
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.289,-0.50f);
    glVertex2f(-0.303,-0.50f);
    glVertex2f(-0.303,-0.20f);
    glVertex2f(-0.289,-0.20f);
    glEnd();


//32
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.266,-0.50f);
    glVertex2f(-0.280,-0.50f);
    glVertex2f(-0.280,-0.20f);
    glVertex2f(-0.266,-0.20f);
    glEnd();


//33
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.243,-0.50f);
    glVertex2f(-0.257,-0.50f);
    glVertex2f(-0.257,-0.20f);
    glVertex2f(-0.243,-0.20f);
    glEnd();


//34
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.220,-0.50f);
    glVertex2f(-0.234,-0.50f);
    glVertex2f(-0.234,-0.20f);
    glVertex2f(-0.220,-0.20f);
    glEnd();

//35
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.197,-0.50f);
    glVertex2f(-0.211,-0.50f);
    glVertex2f(-0.211,-0.20f);
    glVertex2f(-0.197,-0.20f);
    glEnd();


//36
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.174,-0.50f);
    glVertex2f(-0.188,-0.50f);
    glVertex2f(-0.188,-0.20f);
    glVertex2f(-0.174,-0.20f);
    glEnd();

    //37
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.151,-0.50f);
    glVertex2f(-0.165,-0.50f);
    glVertex2f(-0.165,-0.20f);
    glVertex2f(-0.151,-0.20f);
    glEnd();


//38
    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);

    glVertex2f(-0.128,-0.50f);
    glVertex2f(-0.142,-0.50f);
    glVertex2f(-0.142,-0.20f);
    glVertex2f(-0.128,-0.20f);
    glEnd();

}

void Wall()
{

    glBegin(GL_QUADS);
    glColor3ub(208, 211, 212);
    glVertex2f(1.0f,-0.50f);
    glVertex2f(-1.0f,-0.50f);
    glVertex2f(-1.0f,-0.40f);
    glVertex2f(1.0f,-0.40f);
    glEnd();

}


void FenceDesign()
{

    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);;

    glVertex2f(-0.12f,-0.26f);
    glVertex2f(-1.0f,-0.26f);
    glVertex2f(-1.0f,-0.235f);
    glVertex2f(-0.12f,-0.235f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(245, 245, 245);;

    glVertex2f(-0.12f,-0.36f);
    glVertex2f(-1.0f,-0.36f);
    glVertex2f(-1.0f,-0.335f);
    glVertex2f(-0.12f,-0.335f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(1.0,-0.45f);
    glVertex2f(-1.0f,-0.45f);

    glEnd();


}


void  DesignWall()
{

    //1
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);

    glVertex2f(-0.90,-0.40f);
    glVertex2f(-0.90,-0.45f);

    glEnd();

//2
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.80,-0.40f);
    glVertex2f(-0.80,-0.45f);

    glEnd();

//3
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.70,-0.40f);
    glVertex2f(-0.70,-0.45f);

    glEnd();
//4
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.60,-0.40f);
    glVertex2f(-0.60,-0.45f);

    glEnd();

//5
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.50,-0.40f);
    glVertex2f(-0.50,-0.45f);

    glEnd();

//6
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.40,-0.40f);
    glVertex2f(-0.40,-0.45f);

    glEnd();

//7
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.30,-0.40f);
    glVertex2f(-0.30,-0.45f);

    glEnd();
//8
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.20,-0.40f);
    glVertex2f(-0.20,-0.45f);

    glEnd();

//9
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.10,-0.40f);
    glVertex2f(-0.10,-0.45f);

    glEnd();

//10
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.0,-0.40f);
    glVertex2f(-0.0,-0.45f);

    glEnd();

//11
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.10,-0.40f);
    glVertex2f(0.10,-0.45f);

    glEnd();

//12
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.20,-0.40f);
    glVertex2f(0.20,-0.45f);

    glEnd();

//13
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.30,-0.40f);
    glVertex2f(0.30,-0.45f);

    glEnd();
//14
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.40,-0.40f);
    glVertex2f(0.40,-0.45f);

    glEnd();

//15
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.50,-0.40f);
    glVertex2f(0.50,-0.45f);

    glEnd();

//16
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.60,-0.40f);
    glVertex2f(0.60,-0.45f);

    glEnd();

//17
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.70,-0.40f);
    glVertex2f(0.70,-0.45f);

    glEnd();
    //18
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.80,-0.40f);
    glVertex2f(0.80,-0.45f);

    glEnd();

    //19
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.90,-0.40f);
    glVertex2f(0.90,-0.45f);

    glEnd();

    //20
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(1.0,-0.40f);
    glVertex2f(1.0,-0.45f);

    glEnd();

// dOWN dESIGN
//1
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.97,-0.45f);
    glVertex2f(-0.97,-0.50f);

    glEnd();

//2
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.87,-0.45f);
    glVertex2f(-0.87,-0.50f);

    glEnd();

//3
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.77,-0.45f);
    glVertex2f(-0.77,-0.50f);

    glEnd();
//4
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.67,-0.45f);
    glVertex2f(-0.67,-0.50f);

    glEnd();

//5
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.57,-0.45f);
    glVertex2f(-0.57,-0.50f);

    glEnd();

//6
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.47,-0.45f);
    glVertex2f(-0.47,-0.50f);

    glEnd();

//7
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.37,-0.45f);
    glVertex2f(-0.37,-0.50f);

    glEnd();
//8
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.27,-0.45f);
    glVertex2f(-0.27,-0.50f);

    glEnd();

//9
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.17,-0.45f);
    glVertex2f(-0.17,-0.50f);

    glEnd();
//20
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(-0.07,-0.45f);
    glVertex2f(-0.07,-0.50f);

    glEnd();
//20
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.05,-0.45f);
    glVertex2f(0.05,-0.50f);

    glEnd();

//10
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.7,-0.45f);
    glVertex2f(0.7,-0.50f);

    glEnd();

//11
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.17,-0.45f);
    glVertex2f(0.17,-0.50f);

    glEnd();

//12
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.27,-0.45f);
    glVertex2f(0.27,-0.50f);

    glEnd();

//13
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.37,-0.45f);
    glVertex2f(0.37,-0.50f);

    glEnd();
//14
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.47,-0.45f);
    glVertex2f(0.47,-0.50f);

    glEnd();

//15
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.57,-0.45f);
    glVertex2f(0.57,-0.50f);

    glEnd();

//16
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.67,-0.45f);
    glVertex2f(0.67,-0.50f);

    glEnd();

//17
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.77,-0.45f);
    glVertex2f(0.77,-0.50f);

    glEnd();
    //18
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.87,-0.45f);
    glVertex2f(0.87,-0.50f);

    glEnd();

    //19
    glBegin(GL_LINES);
    glColor3ub(205, 97, 85);;

    glVertex2f(0.97,-0.45f);
    glVertex2f(0.97,-0.50f);

    glEnd();
}


void WindMill()
{

    //Mill Start
//Middle

    glBegin(GL_QUADS);
    glColor3ub(255, 205, 210);

    glVertex2f(-0.023,-0.14f);
    glVertex2f(-0.09,-0.14f);
    glVertex2f(-0.085f,0.03f);
    glVertex2f(-0.030,0.03f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);

    glVertex2f(-0.023,-0.14f);
    glVertex2f(-0.030,0.03f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);
    glVertex2f(-0.09,-0.14f);
    glVertex2f(-0.085f,0.03f);
    glEnd();
//Right
    glBegin(GL_QUADS);
    glColor3ub(255, 205, 210);

    glVertex2f(0.003,-0.12f);
    glVertex2f(-0.023,-0.14f);
    glVertex2f(-0.030,0.03f);
    glVertex2f(-0.009,0.031f);
    glEnd();
//Left
    glBegin(GL_QUADS);
    glColor3ub(255, 205, 210);

    glVertex2f(-0.09,-0.14f);
    glVertex2f(-0.121,-0.12f);
    glVertex2f(-0.108f,0.03f);
    glVertex2f(-0.085f,0.031f);
    glEnd();

//Upper Middle
    glBegin(GL_QUADS);
    glColor3ub(237, 231, 246);

    glVertex2f(-0.030,0.03f);
    glVertex2f(-0.085f,0.03f);
    glVertex2f(-0.080f,0.19f);
    glVertex2f(-0.035,0.19f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);

    glVertex2f(-0.030,0.03f);
    glVertex2f(-0.035,0.19f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);
    glVertex2f(-0.085f,0.03f);
    glVertex2f(-0.080f,0.19f);
    glEnd();

//Upper Right
    glBegin(GL_QUADS);
    glColor3ub(237, 231, 246);;

    glVertex2f(-0.010,0.031f);
    glVertex2f(-0.030,0.03f);
    glVertex2f(-0.035,0.19f);
    glVertex2f(-0.025,0.19f);
    glEnd();


//Upper Left
    glBegin(GL_QUADS);
    glColor3ub(237, 231, 246);;

    glVertex2f(-0.085f,0.03f);
    glVertex2f(-0.108,0.03f);
    glVertex2f(-0.092f,0.19f);
    glVertex2f(-0.080f,0.19f);
    glEnd();

//Upper Middle Shade
    glBegin(GL_QUADS);
    glColor3ub(250, 219, 216);

    glVertex2f(-0.016,0.19f);
    glVertex2f(-0.100f,0.19f);
    glVertex2f(-0.0583,0.29);
    glVertex2f(-0.0537,0.29);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);
    glVertex2f(-0.016,0.19f);
    glVertex2f(-0.100f,0.19f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);
    glVertex2f(-0.100f,0.19f);
    glVertex2f(-0.0582,0.29);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);
    glVertex2f(-0.0582,0.29);
    glVertex2f(-0.0538,0.29);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(189, 189, 189);
    glVertex2f(-0.0538,0.29);
    glVertex2f(-0.016,0.19f);

    glEnd();

//Left Shade
    glBegin(GL_QUADS);
    glColor3ub(255, 205, 210);


    glVertex2f(-0.099f,0.19f);
    glVertex2f(-0.119,0.192f); //2
    glVertex2f(-0.061,0.29); //3
    glVertex2f(-0.0548,0.29);
    glEnd();



//Right Shade
    glBegin(GL_QUADS);
    glColor3ub(255, 205, 210);

    glVertex2f(0.004,0.192f);
    glVertex2f(-0.016,0.19f); //2
    glVertex2f(-0.0537,0.29); //3
    glVertex2f(-0.0490,0.29);
    glEnd();
}




void WindMillFan()
{
    //Mill Fan
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(-0.055,0.04f);
    glVertex2f(-0.055,0.51); //2
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(0.119,0.29f);
    glVertex2f(-0.219,0.29f); //2
    glEnd();

//1st Fan
    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(-0.055,0.51); //2
    glVertex2f(-0.005,0.51);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);
    glVertex2f(-0.005,0.51);
    glVertex2f(-0.005,0.32); //2
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);
    glVertex2f(-0.005,0.32); //2
    glVertex2f(-0.055,0.32);
    glEnd();


    //2nd Fan

    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(-0.055,0.04f);
    glVertex2f(-0.11,0.04f); //2
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(-0.11,0.26f);
    glVertex2f(-0.11,0.04f); //2
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(-0.11,0.26f);
    glVertex2f(-0.055,0.26f);
    glEnd();




    //3rd Fan
    glBegin(GL_LINES);
    glColor3ub(250, 250, 250);

    glVertex2f(-0.219,0.29f); //2
    glVertex2f(-0.219,0.39f);
    glEnd();

}



void Divider()
{


//Road Divider
//1
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.96f,-0.76f);
    glVertex2f(-1.0f,-0.76f);
    glVertex2f(-1.0f,-0.73f);
    glVertex2f(-0.96f,-0.73f);

    glEnd();
//2
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.94f,-0.76f);
    glVertex2f(-0.90f,-0.76f);
    glVertex2f(-0.90f,-0.73f);
    glVertex2f(-0.94f,-0.73f);

    glEnd();

//3
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.84f,-0.76f);
    glVertex2f(-0.88f,-0.76f);
    glVertex2f(-0.88f,-0.73f);
    glVertex2f(-0.84f,-0.73f);

    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.78f,-0.76f);
    glVertex2f(-0.82f,-0.76f);
    glVertex2f(-0.82f,-0.73f);
    glVertex2f(-0.78f,-0.73f);

    glEnd();
    //5
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.72f,-0.76f);
    glVertex2f(-0.76f,-0.76f);
    glVertex2f(-0.76f,-0.73f);
    glVertex2f(-0.72f,-0.73f);

    glEnd();
    //6
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.66f,-0.76f);
    glVertex2f(-0.70,-0.76f);
    glVertex2f(-0.70,-0.73f);
    glVertex2f(-0.66f,-0.73f);

    glEnd();
    //7
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.60f,-0.76f);
    glVertex2f(-0.64f,-0.76f);
    glVertex2f(-0.64f,-0.73f);
    glVertex2f(-0.60f,-0.73f);

    glEnd();
    //8
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.54f,-0.76f);
    glVertex2f(-0.58f,-0.76f);
    glVertex2f(-0.58f,-0.73f);
    glVertex2f(-0.54f,-0.73f);

    glEnd();

    //9
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.48f,-0.76f);
    glVertex2f(-0.52f,-0.76f);
    glVertex2f(-0.52f,-0.73f);
    glVertex2f(-0.48f,-0.73f);

    glEnd();
    glPushMatrix();

    //10
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.42f,-0.76f);
    glVertex2f(-0.46f,-0.76f);
    glVertex2f(-0.46f,-0.73f);
    glVertex2f(-0.42f,-0.73f);

    glEnd();
    //11
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.36f,-0.76f);
    glVertex2f(-0.40f,-0.76f);
    glVertex2f(-0.40f,-0.73f);
    glVertex2f(-0.36f,-0.73f);

    glEnd();

    //12
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.30f,-0.76f);
    glVertex2f(-0.34f,-0.76f);
    glVertex2f(-0.34f,-0.73f);
    glVertex2f(-0.30f,-0.73f);

    glEnd();

    //13
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.24f,-0.76f);
    glVertex2f(-0.28f,-0.76f);
    glVertex2f(-0.28f,-0.73f);
    glVertex2f(-0.24f,-0.73f);

    glEnd();

    //14
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.18f,-0.76f);
    glVertex2f(-0.22f,-0.76f);
    glVertex2f(-0.22f,-0.73f);
    glVertex2f(-0.18f,-0.73f);

    glEnd();

    //15
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.12f,-0.76f);
    glVertex2f(-0.16f,-0.76f);
    glVertex2f(-0.16f,-0.73f);
    glVertex2f(-0.12f,-0.73f);

    glEnd();

    //16
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.06,-0.76f);
    glVertex2f(-0.10,-0.76f);
    glVertex2f(-0.10,-0.73f);
    glVertex2f(-0.06,-0.73f);

    glEnd();
    //17
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(-0.0,-0.76f);
    glVertex2f(-0.04,-0.76f);
    glVertex2f(-0.04,-0.73f);
    glVertex2f(-0.0,-0.73f);

    glEnd();
    //18
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.06,-0.76f);
    glVertex2f(0.02,-0.76f);
    glVertex2f(0.02,-0.73f);
    glVertex2f(0.06,-0.73f);

    glEnd();
    //19
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.06,-0.76f);
    glVertex2f(0.04,-0.76f);
    glVertex2f(0.04,-0.73f);
    glVertex2f(0.06,-0.73f);

    glEnd();

    //20
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.12,-0.76f);
    glVertex2f(0.08,-0.76f);
    glVertex2f(0.08,-0.73f);
    glVertex2f(0.12,-0.73f);

    glEnd();

    //21
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.18,-0.76f);
    glVertex2f(0.14,-0.76f);
    glVertex2f(0.14,-0.73f);
    glVertex2f(0.18,-0.73f);

    glEnd();
    //22
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.24,-0.76f);
    glVertex2f(0.20,-0.76f);
    glVertex2f(0.20,-0.73f);
    glVertex2f(0.24,-0.73f);

    glEnd();
    //23
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.30,-0.76f);
    glVertex2f(0.26,-0.76f);
    glVertex2f(0.26,-0.73f);
    glVertex2f(0.30,-0.73f);

    glEnd();


    //24
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.36,-0.76f);
    glVertex2f(0.32,-0.76f);
    glVertex2f(0.32,-0.73f);
    glVertex2f(0.36,-0.73f);

    glEnd();
    //25
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.42,-0.76f);
    glVertex2f(0.38,-0.76f);
    glVertex2f(0.38,-0.73f);
    glVertex2f(0.42,-0.73f);

    glEnd();
    //26
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.48,-0.76f);
    glVertex2f(0.44,-0.76f);
    glVertex2f(0.44,-0.73f);
    glVertex2f(0.48,-0.73f);

    glEnd();
    //27
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.54,-0.76f);
    glVertex2f(0.50,-0.76f);
    glVertex2f(0.50,-0.73f);
    glVertex2f(0.54,-0.73f);

    glEnd();

//28
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.60,-0.76f);
    glVertex2f(0.56,-0.76f);
    glVertex2f(0.56,-0.73f);
    glVertex2f(0.60,-0.73f);

    glEnd();

//29
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.66,-0.76f);
    glVertex2f(0.62,-0.76f);
    glVertex2f(0.62,-0.73f);
    glVertex2f(0.66,-0.73f);

    glEnd();

//30
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.72,-0.76f);
    glVertex2f(0.68,-0.76f);
    glVertex2f(0.68,-0.73f);
    glVertex2f(0.72,-0.73f);

    glEnd();
//31
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.78,-0.76f);
    glVertex2f(0.74,-0.76f);
    glVertex2f(0.74,-0.73f);
    glVertex2f(0.78,-0.73f);

    glEnd();

    //32
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.84,-0.76f);
    glVertex2f(0.80,-0.76f);
    glVertex2f(0.80,-0.73f);
    glVertex2f(0.84,-0.73f);

    glEnd();

    //33
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.90,-0.76f);
    glVertex2f(0.86,-0.76f);
    glVertex2f(0.86,-0.73f);
    glVertex2f(0.90,-0.73f);

    glEnd();
    //33
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(0.96,-0.76f);
    glVertex2f(0.92,-0.76f);
    glVertex2f(0.92,-0.73f);
    glVertex2f(0.96,-0.73f);

    glEnd();
    //34
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);

    glVertex2f(1.0,-0.76f);
    glVertex2f(0.98,-0.76f);
    glVertex2f(0.98,-0.73f);
    glVertex2f(1.0,-0.73f);

    glEnd();

}


void House()
{

    //Main Body-1
    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.19f, 0.26f);
    glVertex2f(-0.334f, 0.26f);
    glVertex2f(-0.334f, 0.42f);
    glVertex2f(-0.19f, 0.42f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.334f, 0.26f);
    glVertex2f(-0.38f, 0.26f);//*
    glVertex2f(-0.38f, 0.38f);
    glVertex2f(-0.334f, 0.38f);
    glEnd();

//Roof 1
    glBegin(GL_QUADS);
    glColor3ub(123, 36, 28 );
    glVertex2f(-0.18f, 0.42f);
    glVertex2f(-0.344f, 0.42f);
    glVertex2f(-0.334f, 0.50f);
    glVertex2f(-0.19f, 0.50f);
    glEnd();
//Roof 2
    glBegin(GL_QUADS);
    glColor3ub(123, 36, 28);
    glVertex2f(-0.334f, 0.38f);
    glVertex2f(-0.40f, 0.38f);
    glVertex2f(-0.38f, 0.42f);//*
    glVertex2f(-0.334f, 0.42f);
    glEnd();


    //Ventilation
    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.21f, 0.48f);
    glVertex2f(-0.23f, 0.48f);
    glVertex2f(-0.23f, 0.54f);
    glVertex2f(-0.21f, 0.54f);
    glEnd();
//Venti Design
    glBegin(GL_QUADS);
    glColor3ub(123, 36, 28);
    glVertex2f(-0.21f, 0.54f);
    glVertex2f(-0.23f, 0.54f);
    glVertex2f(-0.23f, 0.56f);
    glVertex2f(-0.21f, 0.56f);
    glEnd();

    //Door
    glBegin(GL_QUADS);
    glColor3ub(220, 118, 51);
    glVertex2f(-0.27f, 0.26f);
    glVertex2f(-0.24f, 0.26f);
    glVertex2f(-0.24f, 0.36f);
    glVertex2f(-0.27f, 0.36f);
    glEnd();
//Window 1

    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(-0.20f, 0.31f);
    glVertex2f(-0.23f, 0.31f);
    glVertex2f(-0.23f, 0.35f);
    glVertex2f(-0.20f, 0.35f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.20f, 0.31f);
    glVertex2f(-0.20f, 0.35f);

    glEnd();
    glBegin(GL_LINES);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.23f, 0.31f);
    glVertex2f(-0.23f, 0.35f);

    glEnd();

//Window 2

    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(-0.309f, 0.31f);
    glVertex2f(-0.279f, 0.31f);
    glVertex2f(-0.279f, 0.35f);
    glVertex2f(-0.309f, 0.35f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.309f, 0.31f);
    glVertex2f(-0.309f, 0.35f);

    glEnd();
    glBegin(GL_LINES);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.279f, 0.31f);
    glVertex2f(-0.279f, 0.35f);

    glEnd();


//House 2
//Main Body-1
    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.78f, -0.01f);
    glVertex2f(-0.98f, -0.01f);
    glVertex2f(-0.98f, 0.27f);
    glVertex2f(-0.78f, 0.27f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.68f, -0.01f);
    glVertex2f(-0.78f, -0.01f);
    glVertex2f(-0.78f, 0.20f);
    glVertex2f(-0.68f, 0.20f);
    glEnd();

//Roof 1
    glBegin(GL_QUADS);
    glColor3ub(123, 36, 28 );
    glVertex2f(-0.76f, 0.27f);
    glVertex2f(-1.0f, 0.27f);
    glVertex2f(-0.98f, 0.35f);
    glVertex2f(-0.78f, 0.35f);
    glEnd();

//Roof 2
    glBegin(GL_QUADS);
    glColor3ub(123, 36, 28 );
    glVertex2f(-0.67f, 0.20f);
    glVertex2f(-0.78f, 0.20f);
    glVertex2f(-0.78f, 0.25f);
    glVertex2f(-0.68f, 0.25f);
    glEnd();

//Door Big House


    glBegin(GL_QUADS);
    glColor3ub(220, 118, 51);
    glVertex2f(-0.82f,-0.01f);
    glVertex2f(-0.87f, -0.01f);
    glVertex2f(-0.87f, 0.17f);
    glVertex2f(-0.82f, 0.17f);
    glEnd();

//Window left

    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(-0.90f,0.08f);
    glVertex2f(-0.95f, 0.08f);
    glVertex2f(-0.95f, 0.14f);
    glVertex2f(-0.90f, 0.14f);
    glEnd();


//Window Right

    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(-0.747f,0.08f);
    glVertex2f(-0.80f, 0.08f);
    glVertex2f(-0.80f, 0.14f);
    glVertex2f(-0.747f, 0.14f);
    glEnd();

//Design Left Window

    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.90f,0.08f);
    glVertex2f(-0.905f, 0.08f);
    glVertex2f(-0.905f, 0.14f);
    glVertex2f(-0.90f, 0.14f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.957f,0.08f);
    glVertex2f(-0.95f, 0.08f);
    glVertex2f(-0.95f, 0.14f);
    glVertex2f(-0.957f, 0.14f);
    glEnd();

    //Design Right Window
    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.794f,0.08f);
    glVertex2f(-0.80f, 0.08f);
    glVertex2f(-0.80f, 0.14f);
    glVertex2f(-0.794f, 0.14f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.747f,0.08f);
    glVertex2f(-0.753f, 0.08f);
    glVertex2f(-0.753f, 0.14f);
    glVertex2f(-0.747f, 0.14f);
    glEnd();


//Ventilation
    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.89f,0.32f);
    glVertex2f(-0.93f, 0.32f);
    glVertex2f(-0.93f, 0.41f);
    glVertex2f(-0.89f, 0.41f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(123, 36, 28);
    glVertex2f(-0.89f,0.42f);
    glVertex2f(-0.93f, 0.42f);
    glVertex2f(-0.93f, 0.40f);
    glVertex2f(-0.89f, 0.40f);
    glEnd();


//Third House

    //Main Body
    glBegin(GL_QUADS);
    glColor3ub(254, 245, 231 );
    glVertex2f(-0.26f, -0.17f);
    glVertex2f(-0.475f, -0.17f);
    glVertex2f(-0.475f, 0.13f);
    glVertex2f(-0.26f, 0.13f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.475f, -0.17f);
    glVertex2f(-0.58f, -0.17f);//*
    glVertex2f(-0.58f, 0.07f);
    glVertex2f(-0.475f, 0.07f);
    glEnd();


//Roof of House 3
    glBegin(GL_QUADS);
    glColor3ub(146, 43, 33 );
    glVertex2f(-0.246f, 0.13f);
    glVertex2f(-0.49f, 0.13f);
    glVertex2f(-0.475f, 0.22f);
    glVertex2f(-0.26f, 0.22f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(146, 43, 33 );
    glVertex2f(-0.475f, 0.07f);
    glVertex2f(-0.592f, 0.07f);//*
    glVertex2f(-0.58f, 0.12f);
    glVertex2f(-0.475f, 0.12f);
    glEnd();


//Vnetilator


    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.550f, 0.10f);
    glVertex2f(-0.531f, 0.10f);//*
    glVertex2f(-0.531f, 0.15f);
    glVertex2f(-0.550f, 0.15f);
    glEnd();
    //Color
    glBegin(GL_QUADS);
    glColor3ub(146, 43, 33 );
    glVertex2f(-0.550f, 0.15f);
    glVertex2f(-0.531f, 0.15f);//*
    glVertex2f(-0.531f, 0.16f);
    glVertex2f(-0.550f, 0.16f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(253, 242, 233 );
    glVertex2f(-0.334f, 0.255f);
    glVertex2f(-0.307f, 0.255f);
    glVertex2f(-0.307f, 0.19f);
    glVertex2f(-0.334f, 0.19f);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(146, 43, 33 );
    glVertex2f(-0.334f, 0.255f);
    glVertex2f(-0.307f, 0.255f);
    glVertex2f(-0.307f, 0.278f);
    glVertex2f(-0.334f, 0.278f);

    glEnd();


    //Door 3

    glBegin(GL_QUADS);
    glColor3ub(220, 118, 51);
    glVertex2f(-0.36f, -0.17f);
    glVertex2f(-0.42f, -0.17f);
    glVertex2f(-0.42f, 0.00f);
    glVertex2f(-0.36f, 0.00f);
    glEnd();

//left Window

    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(-0.275f, -0.08f);
    glVertex2f(-0.34f, -0.08f);
    glVertex2f(-0.34f, 0.00f);
    glVertex2f(-0.275f, 0.00f);
    glEnd();

    //Right Window

    glBegin(GL_QUADS);
    glColor3ub(237, 187, 153);
    glVertex2f(-0.440f, -0.08f);
    glVertex2f(-0.505, -0.08f);
    glVertex2f(-0.505, 0.00f);
    glVertex2f(-0.440f, 0.00f);
    glEnd();

    //Design Right Window

    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.498, -0.08f);
    glVertex2f(-0.505, -0.08f);
    glVertex2f(-0.505, 0.00f);
    glVertex2f(-0.498, 0.00f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.440f, -0.08f);
    glVertex2f(-0.448f, -0.08f);
    glVertex2f(-0.448f, 0.00f);
    glVertex2f(-0.440f, 0.00f);
    glEnd();

    //Design Left Window
    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.275f, -0.08f);
    glVertex2f(-0.282f, -0.08f);
    glVertex2f(-0.282f, 0.00f);
    glVertex2f(-0.275f, 0.00f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(174, 182, 191);
    glVertex2f(-0.332f, -0.08f);
    glVertex2f(-0.34f, -0.08f);
    glVertex2f(-0.34f, 0.00f);
    glVertex2f(-0.332f, 0.00f);
    glEnd();
}



void Car1()
{

    glPushMatrix();
    glTranslatef(-position,0.0f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(26, 35, 126); // black
    glVertex2f(0.7f, -0.85f);
    glVertex2f(0.61f, -0.9f);
    glVertex2f(0.52f, -0.92f);
    glVertex2f(0.5f, -0.96f);
    glVertex2f(1.0f, -0.96f);
    glVertex2f(0.99f, -0.9f);
    glVertex2f(0.93f, -0.9f);
    glVertex2f(0.85f, -0.85f);
    glEnd();


    glColor3ub(102, 102,102);
    make_quads(0.7, -0.85,0.59, -0.9,0.67,-0.9,0.71, -0.86);

    glColor3ub(102, 102,102);
    make_quads(0.72, -0.86,0.69,-0.9,0.79, -0.9,0.79, -0.86);

    glColor3ub(102, 102,102);
    make_quads(0.8, -0.86,0.8, -0.9,0.9, -0.9,0.85, -0.86);

    glColor3ub(176, 48, 96);
    make_quads(0.7f, -0.9f,0.7f, -0.91,0.73f,  -0.91f,0.73f,  -0.9f);


    glColor3ub(176, 48, 96);
    make_quads(0.8,-0.9,0.8,-0.91,0.83,-0.91,0.83,-0.9);


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub (102, 102,102);
    glVertex2f(0.69f, -0.9f);
    glVertex2f(0.67f, -0.93f);

    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.91f, -0.91f);


    glEnd();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub (102, 102,102);
    glVertex2f(0.8f, -0.9f);
    glVertex2f(0.8f, -0.95f);


    glEnd();

    glColor3ub(255, 165, 0);
    make_quads(0.52, -0.92,0.51, -0.93,0.53,-0.93,0.55,-0.91);

    glColor3ub(255, 165, 0);
    make_quads(0.97,-0.9,0.98, -0.93,0.99, -0.93,0.99,-0.9);

    glPopMatrix();

//2nd car wheels:
    glPushMatrix();
    glTranslatef(-position,0.0f, 0.0f);
    glColor3ub (102, 102,102);
    makeCircle(0.65,-0.95,0.03);

    glColor3ub (102, 102,102);
    makeCircle(0.83f,-0.95,0.03);

    glColor3ub (33, 97, 140 );
    makeCircle(0.83f,-0.95,0.02);

    glColor3ub (33, 97, 140 );
    makeCircle(0.65f,-0.95,0.02);



    glPopMatrix();

    glFlush();


}



//Tree For the Journey

void JourneyTree()
{
    glPushMatrix();
    glColor3ub (175, 96, 26);
    // glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.63,-0.20,0.59,-0.20,0.59,0.20,0.63,0.20);
    make_quads(0.59,0.11,0.54,0.18,0.54,0.20,0.59,0.15);
    make_quads(0.61,0.11,0.65,0.20,0.65,0.22,0.61,0.15);
    glColor3ub(35, 155, 86);
    makeCircle(0.51,0.24,0.09);
    glColor3ub(35, 155, 86);
    makeCircle(0.60,0.337,0.14);
    makeCircle(0.70,0.26,0.08);
    glPopMatrix();




    glPushMatrix();
    glColor3ub (175, 96, 26);
    //glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.79,-0.30,0.75,-0.30,0.75,0.10,0.79,0.10);
    make_quads(0.75,0.01,0.70,0.08,0.70,0.10,0.75,0.05);
    make_quads(0.77,0.01,0.81,0.10,0.81,0.12,0.77,0.05);
    glColor3ub(25, 111, 61);
    makeCircle(0.67,0.14,0.09);
    makeCircle(0.76,0.237,0.14);
    makeCircle(0.86,0.16,0.08);
    glPopMatrix();




    glPushMatrix();
    glColor3ub (175, 96, 26);
    // glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.49,-0.30,0.45,-0.30,0.45,0.10,0.49,0.10);
    make_quads(0.45,0.01,0.40,0.08,0.40,0.10,0.45,0.05);
    make_quads(0.47,0.01,0.51,0.10,0.51,0.12,0.47,0.05);
    glColor3ub(25, 111, 61);
    makeCircle(0.37,0.14,0.09);
    makeCircle(0.46,0.237,0.14);
    makeCircle(0.52,0.16,0.09);
    glPopMatrix();





}



void CircleTreeWinter()
{

    glPushMatrix();
    glColor3ub (204, 153, 0);
    makeCircle(0.015,0.24,0.15);
    glColor3ub (175, 96, 26);
    //glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.03,-0.30,0.01,-0.30,0.01,0.10,0.03,0.10);
    make_triangles(0.01,0.10,0.01,0.06,-0.020,0.17);
    make_triangles(0.025,0.10,0.012,0.10,0.018,0.27);
    make_triangles(0.03,0.10,0.025,0.10,0.040,0.19);

    glPopMatrix();
    glLoadIdentity();



}
void CircleTree()
{


    glPushMatrix();
    //glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    makeCircle(-0.16,0.32,0.15);
    glColor3ub (102, 0, 0);

    make_quads(-0.14,-0.20,-0.16,-0.20,-0.16,0.20,-0.14,0.20);
    make_triangles(-0.16,0.20,-0.15,0.14,-0.20,0.27);
    make_triangles(-0.16,0.20,-0.145,0.20,-0.155,0.34);
    make_triangles(-0.147,0.20,-0.14,0.17,-0.128,0.28);

    glPopMatrix();




    glPushMatrix();
    //glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    makeCircle(0.015,0.24,0.15);
    glColor3ub (102, 0, 0);

    make_quads(0.03,-0.30,0.01,-0.30,0.01,0.10,0.03,0.10);
    make_triangles(0.01,0.10,0.01,0.06,-0.020,0.17);
    make_triangles(0.025,0.10,0.012,0.10,0.018,0.27);
    make_triangles(0.03,0.10,0.025,0.10,0.040,0.19);

    glPopMatrix();






    glPushMatrix();
    // glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    makeCircle(-0.30,0.24,0.15);
    glColor3ub (102, 0, 0);

    make_quads(-0.28,-0.30,-0.30,-0.30,-0.30,0.10,-0.28,0.10);
    make_triangles(-0.16,0.20,-0.15,0.14,-0.20,0.27);
    make_triangles(-0.16,0.20,-0.145,0.20,-0.155,0.34);
    make_triangles(-0.147,0.20,-0.14,0.17,-0.128,0.28);


    make_triangles(-0.28,0.08,-0.28,0.12,-0.25,0.20);
    make_triangles(-0.28,0.10,-0.295,0.10,-0.285,0.27);
    make_triangles(-0.295,0.10,-0.30,0.07,-0.35,0.20);

    glPopMatrix();



    glLoadIdentity();



}


void LeftmostTree()
{

    glPushMatrix();
    glColor3ub (139,69,19);
    //glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(-0.78,-0.40,-0.73,-0.40,-0.73,0.17,-0.78,0.17);
    glColor3ub (0,100,0);
    makeCircle(-0.76,0.32,0.11);
    makeCircle(-0.64,0.22,0.11);
    makeCircle(-0.88,0.22,0.11);
    makeCircle(-0.67,0.17,0.11);
    makeCircle(-0.87,0.10,0.11);
    glPopMatrix();

}

void forestGrass()
{

    //1
   /*  glColor3ub (0,128,0);
    make_triangles(-0.79,-0.40,-0.76,-0.40,-0.94,-0.24);
    make_triangles(-0.78,-0.40,-0.75,-0.40,-0.88,-0.24);
    make_triangles(-0.77,-0.40,-0.74,-0.40,-0.80,-0.24);
    make_triangles(-0.77,-0.40,-0.74,-0.40,-0.80,-0.24);
    glColor3ub (34,139,34);
    make_triangles(-0.78,-0.40,-0.75,-0.40,-0.88,-0.24);
    make_triangles(-0.75,-0.40,-0.72,-0.40,-0.74,-0.20);
    make_triangles(-0.74,-0.40,-0.71,-0.40,-0.68,-0.20);
    make_triangles(-0.72,-0.40,-0.69,-0.40,-0.65,-0.20);
    glColor3ub (0,128,0);
    make_triangles(-0.75,-0.40,-0.72,-0.40,-0.77,-0.24);
    make_triangles(-0.71,-0.40,-0.68,-0.40,-0.61,-0.20);
    make_triangles(-0.69,-0.40,-0.66,-0.40,-0.55,-0.20);



    //2
    glColor3ub (0,128,0);
    make_triangles(-0.49,-0.40,-0.46,-0.40,-0.64,-0.24);
    make_triangles(-0.48,-0.40,-0.45,-0.40,-0.58,-0.24);
    make_triangles(-0.47,-0.40,-0.44,-0.40,-0.50,-0.24);
    make_triangles(-0.47,-0.40,-0.44,-0.40,-0.50,-0.24);
    glColor3ub (34,139,34);
    make_triangles(-0.48,-0.40,-0.45,-0.40,-0.58,-0.24);
    make_triangles(-0.45,-0.40,-0.42,-0.40,-0.44,-0.20);
    make_triangles(-0.44,-0.40,-0.41,-0.40,-0.38,-0.20);
    make_triangles(-0.42,-0.40,-0.39,-0.40,-0.35,-0.20);
    glColor3ub (0,128,0);
    make_triangles(-0.45,-0.40,-0.42,-0.40,-0.47,-0.24);
    make_triangles(-0.41,-0.40,-0.38,-0.40,-0.31,-0.20);
    make_triangles(-0.39,-0.40,-0.36,-0.40,-0.25,-0.20);




    //3
    glColor3ub (0,128,0);
    make_triangles(-0.19,-0.40,-0.16,-0.40,-0.34,-0.24);
    make_triangles(-0.18,-0.40,-0.15,-0.40,-0.28,-0.24);
    make_triangles(-0.17,-0.40,-0.14,-0.40,-0.20,-0.24);
    make_triangles(-0.17,-0.40,-0.14,-0.40,-0.20,-0.24);
    glColor3ub (34,139,34);
    make_triangles(-0.18,-0.40,-0.15,-0.40,-0.28,-0.24);
    make_triangles(-0.15,-0.40,-0.12,-0.40,-0.14,-0.20);
    make_triangles(-0.14,-0.40,-0.11,-0.40,-0.08,-0.20);
    make_triangles(-0.12,-0.40,-0.09,-0.40,-0.05,-0.20);
    glColor3ub (0,128,0);
    make_triangles(-0.15,-0.40,-0.12,-0.40,-0.17,-0.24);
    make_triangles(-0.11,-0.40,-0.08,-0.40,-0.01,-0.20);
    make_triangles(-0.09,-0.40,-0.06,-0.40,0.05,-0.20);



    //4
    glColor3ub (0,128,0);
    make_triangles(0.19,-0.40,0.16,-0.40,0.14,-0.24);
    make_triangles(0.18,-0.40,0.15,-0.40,0.18,-0.24);
    make_triangles(0.17,-0.40,0.14,-0.40,0.20,-0.24);
    make_triangles(0.17,-0.40,0.14,-0.40,0.20,-0.24);
    glColor3ub (34,139,34);
    make_triangles(0.18,-0.40,0.15,-0.40,0.28,-0.24);
    make_triangles(0.15,-0.40,0.12,-0.40,0.14,-0.20);
    make_triangles(0.14,-0.40,0.11,-0.40,0.08,-0.20);
    make_triangles(0.12,-0.40,0.09,-0.40,0.05,-0.20);
    glColor3ub (0,128,0);
    make_triangles(0.15,-0.40,0.12,-0.40,0.17,-0.24);
    make_triangles(0.11,-0.40,0.08,-0.40,0.01,-0.20);
    make_triangles(0.09,-0.40,0.06,-0.40,0.15,-0.20);
 */

    //5
    glColor3ub (0,128,0);
    make_triangles(0.49,-0.40,0.46,-0.40,0.44,-0.24);
    make_triangles(0.48,-0.40,0.45,-0.40,0.48,-0.24);
    make_triangles(0.47,-0.40,0.44,-0.40,0.50,-0.24);
    make_triangles(0.47,-0.40,0.44,-0.40,0.50,-0.24);
    glColor3ub (34,139,34);
    make_triangles(0.48,-0.40,0.45,-0.40,0.58,-0.24);
    make_triangles(0.45,-0.40,0.42,-0.40,0.44,-0.20);
    make_triangles(0.44,-0.40,0.41,-0.40,0.38,-0.20);
    make_triangles(0.42,-0.40,0.39,-0.40,0.35,-0.20);
    glColor3ub (0,128,0);
    make_triangles(0.45,-0.40,0.42,-0.40,0.47,-0.24);
    make_triangles(0.41,-0.40,0.38,-0.40,0.31,-0.20);
    make_triangles(0.39,-0.40,0.36,-0.40,0.24,-0.20);


    //6
    glColor3ub (0,128,0);
    make_triangles(0.79,-0.40,0.76,-0.40,0.74,-0.24);
    make_triangles(0.78,-0.40,0.75,-0.40,0.78,-0.24);
    make_triangles(0.77,-0.40,0.74,-0.40,0.80,-0.24);
    make_triangles(0.77,-0.40,0.74,-0.40,0.80,-0.24);
    glColor3ub (34,139,34);
    make_triangles(0.78,-0.40,0.75,-0.40,0.88,-0.24);
    make_triangles(0.75,-0.40,0.72,-0.40,0.74,-0.20);
    make_triangles(0.74,-0.40,0.71,-0.40,0.68,-0.20);
    make_triangles(0.72,-0.40,0.69,-0.40,0.65,-0.20);
    glColor3ub (0,128,0);
    make_triangles(0.75,-0.40,0.72,-0.40,0.77,-0.24);
    make_triangles(0.71,-0.40,0.68,-0.40,0.61,-0.20);
    make_triangles(0.69,-0.40,0.66,-0.40,0.54,-0.20);

    //7
    glColor3ub (0,128,0);
    make_triangles(0.99,-0.40,0.96,-0.40,0.94,-0.24);
    make_triangles(0.98,-0.40,0.95,-0.40,0.98,-0.24);
    make_triangles(0.97,-0.40,0.94,-0.40,1.0,-0.24);
    make_triangles(0.97,-0.40,0.94,-0.40,1.0,-0.24);
    glColor3ub (34,139,34);
    make_triangles(0.98,-0.40,0.95,-0.40,1.0,-0.24);
    make_triangles(0.95,-0.40,0.92,-0.40,0.94,-0.20);
    make_triangles(0.94,-0.40,0.91,-0.40,0.88,-0.20);
    make_triangles(0.92,-0.40,0.89,-0.40,0.84,-0.20);
    make_triangles(0.99,-0.40,0.96,-0.40,1.1,-0.20);


  /*   //8
    glColor3ub (34,139,34);
    make_triangles(-0.98,-0.40,-0.95,-0.40,-1.0,-0.24);
    make_triangles(-0.95,-0.40,-0.92,-0.40,-0.94,-0.20);
    make_triangles(-0.94,-0.40,-0.91,-0.40,-0.88,-0.20);
    make_triangles(-0.92,-0.40,-0.89,-0.40,-0.85,-0.20);
    glColor3ub (0,128,0);
    make_triangles(-0.95,-0.40,-0.92,-0.40,-0.97,-0.24);
    make_triangles(-0.91,-0.40,-0.88,-0.40,-0.81,-0.20);
    make_triangles(-0.89,-0.40,-0.86,-0.40,-0.75,-0.20); */




}


void GrassUndertree()
{


    glColor3ub (0,128,0);
    make_triangles(-0.12,-0.20,-0.14,-0.20,-0.08,-0.12);
    make_triangles(-0.13,-0.20,-0.15,-0.20,-0.12,-0.11);
    make_triangles(-0.14,-0.20,-0.16,-0.20,-0.15,-0.11);
    make_triangles(-0.15,-0.20,-0.17,-0.20,-0.18,-0.11);
    make_triangles(-0.16,-0.20,-0.18,-0.20,-0.22,-0.11);


    glColor3ub (0,128,0);
    make_triangles(-0.26,-0.30,-0.28,-0.30,-0.22,-0.22);
    make_triangles(-0.27,-0.30,-0.29,-0.30,-0.26,-0.21);
    make_triangles(-0.28,-0.30,-0.30,-0.30,-0.29,-0.21);
    glColor3ub (34,139,34);
    make_triangles(-0.29,-0.30,-0.31,-0.30,-0.32,-0.21);
    make_triangles(-0.30,-0.30,-0.32,-0.30,-0.36,-0.21);




    glColor3ub (0,128,0);
    make_triangles(-0.01,-0.30,0.03,-0.30,-0.03,-0.22);
    make_triangles(0.00,-0.30,0.02,-0.30,-0.01,-0.21);
    glColor3ub (34,139,34);
    make_triangles(0.01,-0.30,0.04,-0.30,0.02,-0.21);
    make_triangles(0.02,-0.30,0.04,-0.30,0.05,-0.21);
    make_triangles(0.031,-0.30,0.051,-0.30,0.07,-0.21);



    glColor3ub (0,128,0);
    make_triangles(0.58,-0.20,0.60,-0.20,0.54,-0.12);
    make_triangles(0.59,-0.20,0.61,-0.20,0.58,-0.11);
    glColor3ub (34,139,34);
    make_triangles(0.60,-0.20,0.62,-0.20,0.61,-0.11);
    make_triangles(0.61,-0.20,0.63,-0.20,0.64,-0.11);
    make_triangles(0.62,-0.20,0.64,-0.20,0.68,-0.11);



}




void Mountain()
{

    glColor3ub (86, 101, 115);
    make_triangles(-0.75,0.35,-0.55,0.35,-0.65,0.63);
    glColor3ub (128, 139, 150);
    make_triangles(-1.02,0.35,-0.65,0.35,-0.82,0.73);
    make_triangles(-0.65,0.35,-0.30,0.35,-0.48,0.68);


    glColor3ub (86, 101, 115);
    make_triangles(-0.05,0.35,0.25,0.35,0.11,0.61);

    make_triangles(0.75,0.35,0.90,0.35,0.82,0.61);
    glColor3ub (128, 139, 150);
    make_triangles(0.45,0.35,0.80,0.35,0.64,0.73);
    //make_triangles(-0.65,0.35,-0.30,0.35,-0.48,0.68);


    glLoadIdentity();
}

void Grass_Under_Hills()
{
    glColor3ub (0,128,0);
    make_triangles(-0.75,0.35,-0.74,0.35,-0.71,0.38);
    make_triangles(-0.85,0.35,-0.84,0.35,-0.81,0.38);
    make_triangles(-0.95,0.35,-0.94,0.35,-0.91,0.38);
    make_triangles(-0.99,0.35,-0.98,0.35,-1.0,0.38);
    make_triangles(-0.98,0.35,-0.97,0.35,-0.99,0.38);
    make_triangles(-0.97,0.35,-0.96,0.35,-0.96,0.38);
    make_triangles(-0.96,0.35,-0.95,0.35,-0.95,0.38);
    make_triangles(-0.95,0.35,-0.94,0.35,-0.94,0.40);
    make_triangles(-0.94,0.35,-0.93,0.35,-0.93,0.38);
    make_triangles(-0.93,0.35,-0.92,0.35,-0.93,0.38);
    make_triangles(-0.92,0.35,-0.91,0.35,-0.90,0.38);
    make_triangles(-0.91,0.35,-0.90,0.35,-0.91,0.41);
    make_triangles(-0.90,0.35,-0.89,0.35,-0.89,0.38);
    make_triangles(-0.89,0.35,-0.88,0.35,-0.87,0.38);
    make_triangles(-0.88,0.35,-0.87,0.35,-0.87,0.38);
    make_triangles(-0.87,0.35,-0.86,0.35,-0.86,0.38);
    make_triangles(-0.86,0.35,-0.85,0.35,-0.85,0.38);
    make_triangles(-0.85,0.35,-0.84,0.35,-0.84,0.42);
    make_triangles(-0.84,0.35,-0.83,0.35,-0.83,0.38);
    make_triangles(-0.82,0.35,-0.81,0.35,-0.82,0.38);
    make_triangles(-0.81,0.35,-0.80,0.35,-0.81,0.38);
    make_triangles(-0.80,0.35,-0.79,0.35,-0.80,0.38);
    make_triangles(-0.79,0.35,-0.78,0.35,-0.79,0.39);
    make_triangles(-0.78,0.35,-0.77,0.35,-0.78,0.38);
    make_triangles(-0.77,0.35,-0.76,0.35,-0.76,0.38);
    make_triangles(-0.76,0.35,-0.75,0.35,-0.75,0.40);
    make_triangles(-0.75,0.35,-0.74,0.35,-0.74,0.38);
    make_triangles(-0.74,0.35,-0.73,0.35,-0.73,0.38);
    make_triangles(-0.73,0.35,-0.72,0.35,-0.72,0.40);
    make_triangles(-0.72,0.35,-0.71,0.35,-0.71,0.38);
    make_triangles(-0.71,0.35,-0.70,0.35,-0.70,0.38);
    make_triangles(-0.70,0.35,-0.69,0.35,-0.69,0.38);
    make_triangles(-0.69,0.35,-0.68,0.35,-0.68,0.42);
    make_triangles(-0.68,0.35,-0.67,0.35,-0.67,0.38);
    make_triangles(-0.67,0.35,-0.66,0.35,-0.66,0.38);
    make_triangles(-0.66,0.35,-0.65,0.35,-0.65,0.38);
    make_triangles(-0.65,0.35,-0.64,0.35,-0.64,0.38);
    make_triangles(-0.64,0.35,-0.63,0.35,-0.63,0.38);
    make_triangles(-0.63,0.35,-0.62,0.35,-0.62,0.43);
    make_triangles(-0.62,0.35,-0.61,0.35,-0.61,0.38);
    make_triangles(-0.61,0.35,-0.60,0.35,-0.60,0.38);
    make_triangles(-0.60,0.35,-0.59,0.35,-0.59,0.38);
    make_triangles(-0.59,0.35,-0.58,0.35,-0.58,0.41);
    make_triangles(-0.58,0.35,-0.57,0.35,-0.57,0.38);
    make_triangles(-0.57,0.35,-0.56,0.35,-0.56,0.38);
    make_triangles(-0.56,0.35,-0.55,0.35,-0.55,0.38);
    make_triangles(-0.55,0.35,-0.54,0.35,-0.54,0.42);
    make_triangles(-0.54,0.35,-0.53,0.35,-0.53,0.38);
    make_triangles(-0.54,0.35,-0.52,0.35,-0.52,0.38);
    make_triangles(-0.53,0.35,-0.51,0.35,-0.51,0.46);
    make_triangles(-0.52,0.35,-0.50,0.35,-0.50,0.38);
    make_triangles(-0.51,0.35,-0.49,0.35,-0.49,0.38);
    make_triangles(-0.50,0.35,-0.48,0.35,-0.48,0.38);
    make_triangles(-0.49,0.35,-0.47,0.35,-0.47,0.38);
    make_triangles(-0.48,0.35,-0.46,0.35,-0.46,0.44);
    make_triangles(-0.47,0.35,-0.45,0.35,-0.46,0.38);
    make_triangles(-0.46,0.35,-0.44,0.35,-0.45,0.38);
    make_triangles(-0.45,0.35,-0.43,0.35,-0.44,0.38);
    make_triangles(-0.43,0.35,-0.42,0.35,-0.43,0.43);
    make_triangles(-0.42,0.35,-0.41,0.35,-0.42,0.38);
    make_triangles(-0.41,0.35,-0.40,0.35,-0.41,0.38);
    make_triangles(-0.40,0.35,-0.39,0.35,-0.40,0.42);
    make_triangles(-0.39,0.35,-0.38,0.35,-0.39,0.38);
    make_triangles(-0.38,0.35,-0.37,0.35,-0.38,0.38);
    make_triangles(-0.37,0.35,-0.36,0.35,-0.37,0.38);
    make_triangles(-0.36,0.35,-0.35,0.35,-0.36,0.41);
    make_triangles(-0.35,0.35,-0.34,0.35,-0.35,0.38);
    make_triangles(-0.34,0.35,-0.33,0.35,-0.34,0.38);
    make_triangles(-0.33,0.35,-0.32,0.35,-0.33,0.40);
    make_triangles(-0.32,0.35,-0.31,0.35,-0.32,0.38);
    make_triangles(-0.31,0.35,-0.30,0.35,-0.31,0.38);
    make_triangles(-0.30,0.35,-0.29,0.35,-0.30,0.41);
    make_triangles(-0.29,0.35,-0.28,0.35,-0.29,0.38);
    make_triangles(-0.28,0.35,-0.27,0.35,-0.28,0.38);
    make_triangles(-0.27,0.35,-0.26,0.35,-0.27,0.38);
    make_triangles(-0.26,0.35,-0.25,0.35,-0.26,0.41);
    make_triangles(-0.25,0.35,-0.24,0.35,-0.25,0.38);
    make_triangles(-0.24,0.35,-0.23,0.35,-0.24,0.39);
    make_triangles(-0.23,0.35,-0.22,0.35,-0.22,0.38);
    make_triangles(-0.22,0.35,-0.21,0.35,-0.21,0.44);
    make_triangles(-0.21,0.35,-0.20,0.35,-0.20,0.38);
    make_triangles(-0.20,0.35,-0.18,0.35,-0.19,0.42);
    make_triangles(-0.19,0.35,-0.18,0.35,-0.18,0.38);
    make_triangles(-0.18,0.35,-0.17,0.35,-0.17,0.43);
    make_triangles(-0.17,0.35,-0.16,0.35,-0.16,0.38);

    //
    make_triangles(-0.16,0.35,-0.15,0.35,-0.15,0.39);
    make_triangles(-0.15,0.35,-0.14,0.35,-0.14,0.38);
    make_triangles(-0.14,0.35,-0.13,0.35,-0.13,0.40);
    make_triangles(-0.13,0.35,-0.12,0.35,-0.12,0.38);
    make_triangles(-0.12,0.35,-0.11,0.35,-0.11,0.38);
    make_triangles(-0.11,0.35,-0.10,0.35,-0.10,0.42);
    make_triangles(-0.10,0.35,-0.09,0.35,-0.09,0.38);
    make_triangles(-0.09,0.35,-0.08,0.35,-0.08,0.38);
    make_triangles(-0.08,0.35,-0.07,0.35,-0.07,0.43);
    make_triangles(-0.07,0.35,-0.06,0.35,-0.06,0.38);
    make_triangles(-0.06,0.35,-0.05,0.35,-0.05,0.38);
    make_triangles(-0.05,0.35,-0.04,0.35,-0.04,0.38);
    make_triangles(-0.04,0.35,-0.03,0.35,-0.03,0.41);
    make_triangles(-0.03,0.35,-0.02,0.35,-0.02,0.38);
    make_triangles(-0.02,0.35,-0.01,0.35,-0.01,0.38);
    make_triangles(-0.01,0.35,0.0,0.35,0.0,0.38);

    //Right

    make_triangles(0.75,0.35,0.74,0.35,0.71,0.38);
    make_triangles(0.85,0.35,0.84,0.35,0.81,0.38);
    make_triangles(0.95,0.35,0.94,0.35,0.91,0.40);
    make_triangles(0.99,0.35,0.98,0.35,1.0,0.38);
    make_triangles(0.98,0.35,0.97,0.35,0.99,0.38);
    make_triangles(0.97,0.35,0.96,0.35,0.96,0.38);
    make_triangles(0.96,0.35,0.95,0.35,0.95,0.38);
    make_triangles(0.95,0.35,0.94,0.35,0.94,0.41);
    make_triangles(0.94,0.35,0.93,0.35,0.93,0.38);
    make_triangles(0.93,0.35,0.92,0.35,0.93,0.38);
    make_triangles(0.92,0.35,0.91,0.35,0.90,0.38);
    make_triangles(0.91,0.35,0.90,0.35,0.91,0.42);
    make_triangles(0.90,0.35,0.89,0.35,0.89,0.38);
    make_triangles(0.89,0.35,0.88,0.35,0.87,0.38);
    make_triangles(0.88,0.35,0.87,0.35,0.87,0.38);
    make_triangles(0.87,0.35,0.86,0.35,0.86,0.38);
    make_triangles(0.86,0.35,0.85,0.35,0.85,0.38);
    make_triangles(0.85,0.35,0.84,0.35,0.84,0.41);
    make_triangles(0.84,0.35,0.83,0.35,0.83,0.38);
    make_triangles(0.82,0.35,0.81,0.35,0.82,0.38);
    make_triangles(0.81,0.35,0.80,0.35,0.81,0.38);
    make_triangles(0.80,0.35,0.79,0.35,0.80,0.38);
    make_triangles(0.79,0.35,0.78,0.35,0.79,0.42);
    make_triangles(0.78,0.35,0.77,0.35,0.78,0.38);
    make_triangles(0.77,0.35,0.76,0.35,0.76,0.38);
    make_triangles(0.76,0.35,0.75,0.35,0.75,0.38);
    make_triangles(0.75,0.35,0.74,0.35,0.74,0.41);
    make_triangles(0.74,0.35,0.73,0.35,0.73,0.38);
    make_triangles(0.73,0.35,0.72,0.35,0.72,0.38);
    make_triangles(0.72,0.35,0.71,0.35,0.71,0.38);
    make_triangles(0.71,0.35,0.70,0.35,0.70,0.41);
    make_triangles(0.70,0.35,0.69,0.35,0.69,0.38);
    make_triangles(0.69,0.35,0.68,0.35,0.68,0.38);
    make_triangles(0.68,0.35,0.67,0.35,0.67,0.38);
    make_triangles(0.67,0.35,0.66,0.35,0.66,0.38);
    make_triangles(0.66,0.35,0.65,0.35,0.65,0.38);
    make_triangles(0.65,0.35,0.64,0.35,0.64,0.40);
    make_triangles(0.64,0.35,0.63,0.35,0.63,0.38);
    make_triangles(0.63,0.35,0.62,0.35,0.62,0.38);
    make_triangles(0.62,0.35,0.61,0.35,0.61,0.38);
    make_triangles(0.61,0.35,0.60,0.35,0.60,0.40);
    make_triangles(0.60,0.35,0.59,0.35,0.59,0.38);
    make_triangles(0.59,0.35,0.58,0.35,0.58,0.38);
    make_triangles(0.58,0.35,0.57,0.35,0.57,0.38);
    make_triangles(0.57,0.35,0.56,0.35,0.56,0.40);
    make_triangles(0.56,0.35,0.55,0.35,0.55,0.38);
    make_triangles(0.55,0.35,0.54,0.35,0.54,0.38);
    make_triangles(0.54,0.35,0.53,0.35,0.53,0.43);
    make_triangles(0.54,0.35,0.52,0.35,0.52,0.38);
    make_triangles(0.53,0.35,0.51,0.35,0.51,0.38);
    make_triangles(0.52,0.35,0.50,0.35,0.50,0.38);
    make_triangles(0.51,0.35,0.49,0.35,0.49,0.42);
    make_triangles(0.50,0.35,0.48,0.35,0.48,0.38);
    make_triangles(0.49,0.35,0.47,0.35,0.47,0.38);
    make_triangles(0.48,0.35,0.46,0.35,0.46,0.45);
    make_triangles(0.47,0.35,0.45,0.35,0.46,0.38);
    make_triangles(0.46,0.35,0.44,0.35,0.45,0.38);
    make_triangles(0.45,0.35,0.43,0.35,0.44,0.38);
    make_triangles(0.43,0.35,0.42,0.35,0.43,0.38);
    make_triangles(0.42,0.35,0.41,0.35,0.42,0.41);
    make_triangles(0.41,0.35,0.40,0.35,0.41,0.38);
    make_triangles(0.40,0.35,0.39,0.35,0.40,0.38);
    make_triangles(0.39,0.35,0.38,0.35,0.39,0.38);
    make_triangles(0.38,0.35,0.37,0.35,0.38,0.38);
    make_triangles(0.37,0.35,0.36,0.35,0.37,0.38);
    make_triangles(0.36,0.35,0.35,0.35,0.36,0.38);
    make_triangles(0.35,0.35,0.34,0.35,0.35,0.38);
    make_triangles(0.34,0.35,0.33,0.35,0.34,0.41);
    make_triangles(0.33,0.35,0.32,0.35,0.33,0.38);
    make_triangles(0.32,0.35,0.31,0.35,0.32,0.38);
    make_triangles(0.31,0.35,0.30,0.35,0.31,0.38);
    make_triangles(0.30,0.35,0.29,0.35,0.30,0.41);
    make_triangles(0.29,0.35,0.28,0.35,0.29,0.38);
    make_triangles(0.28,0.35,0.27,0.35,0.28,0.38);
    make_triangles(0.27,0.35,0.26,0.35,0.27,0.42);
    make_triangles(0.26,0.35,0.25,0.35,0.26,0.38);
    make_triangles(0.25,0.35,0.24,0.35,0.25,0.38);
    make_triangles(0.24,0.35,0.23,0.35,0.24,0.40);
    make_triangles(0.23,0.35,0.22,0.35,0.22,0.38);
    make_triangles(0.22,0.35,0.21,0.35,0.21,0.38);
    make_triangles(0.21,0.35,0.20,0.35,0.20,0.40);
    make_triangles(0.20,0.35,0.18,0.35,0.19,0.38);
    make_triangles(0.19,0.35,0.18,0.35,0.18,0.39);
    make_triangles(0.18,0.35,0.17,0.35,0.17,0.38);
    make_triangles(0.17,0.35,0.16,0.35,0.16,0.38);

    //
    make_triangles(0.16,0.35,0.15,0.35,0.15,0.38);
    make_triangles(0.15,0.35,0.14,0.35,0.14,0.38);
    make_triangles(0.14,0.35,0.13,0.35,0.13,0.40);
    make_triangles(0.13,0.35,0.12,0.35,0.12,0.38);
    make_triangles(0.12,0.35,0.11,0.35,0.11,0.38);
    make_triangles(0.11,0.35,0.10,0.35,0.10,0.38);
    make_triangles(0.10,0.35,0.09,0.35,0.09,0.41);
    make_triangles(0.09,0.35,0.08,0.35,0.08,0.38);
    make_triangles(0.08,0.35,0.07,0.35,0.07,0.40);
    make_triangles(0.07,0.35,0.06,0.35,0.06,0.38);
    make_triangles(0.06,0.35,0.05,0.35,0.05,0.42);
    make_triangles(0.05,0.35,0.04,0.35,0.04,0.38);
    make_triangles(0.04,0.35,0.03,0.35,0.03,0.38);
    make_triangles(0.03,0.35,0.02,0.35,0.02,0.39);
    make_triangles(0.02,0.35,0.01,0.35,0.01,0.38);

}


void Tanim()
{


    ///Tree part Tanim


    glColor3ub(141, 108, 3);
    make_quads(-0.64,0.02,-0.61,0.02,-0.61,0.35,-0.64,0.35);

/// Tringle part tree
    glColor3ub(141, 108, 3);
    make_triangles(-0.665,0.0,-0.59,0.0,-0.625,0.06);


/// Circle part tree


    glColor3ub (25, 111, 61);
    makeCircle(-0.63,0.4,0.065);
    makeCircle(-0.68,0.34,0.050f);
    makeCircle(-0.58f,0.34,0.050f);




///2nd tree
    glBegin(GL_QUADS);
    glColor3ub(141, 108, 3);
    make_quads(0.14,-0.15,0.11,-0.15,0.11,0.17,0.14,0.17);

/// Tringle part tree

    glColor3ub(141, 108, 3);
    make_triangles(-0.215,-0.155,-0.18,-0.155,-0.195,-0.123);

/// 2nd tree circle part 1


    glColor3ub ( 34, 129, 29);
    makeCircle(-0.195,0.14,0.0255);
    makeCircle(-0.22,0.1,0.0245);
    makeCircle(-0.174,0.1,0.0245);




    ///3rd tree
    glBegin(GL_QUADS);
    glColor3ub(141, 108, 3);
    make_quads(-0.43, 0.25,-0.42,0.25,-0.42, 0.3,-0.43,0.3);
    make_triangles(-0.435,0.245,-0.415,0.245,-0.425,0.28);
    glColor3ub(34, 129, 29);
    make_triangles(-0.445, 0.3,-0.4,0.3,-0.425,0.33);
    make_triangles(-0.445,0.32,-0.4,0.32,-0.425,0.35);

}


void Hut()
{
    glPushMatrix();
    glColor3ub (100, 30, 22);
    //glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(-0.05,-0.07,-0.45,-0.07,-0.45,-0.10,-0.05,-0.10);
    make_quads(-0.43,-0.13,-0.40,-0.13,-0.40,-0.10,-0.43,-0.10);
    make_quads(-0.38,-0.13,-0.35,-0.13,-0.35,-0.10,-0.38,-0.10);
    make_quads(-0.29,-0.13,-0.26,-0.13,-0.26,-0.10,-0.29,-0.10);
    make_quads(-0.23,-0.13,-0.20,-0.13,-0.20,-0.10,-0.23,-0.10);
    make_quads(-0.07,-0.13,-0.10,-0.13,-0.10,-0.10,-0.07,-0.10);
    make_quads(-0.15,-0.13,-0.12,-0.13,-0.12,-0.10,-0.15,-0.10);
    glColor3ub (175, 96, 26);
    make_quads(-0.07,0.20,-0.43,0.20,-0.43,-0.07,-0.07,-0.07);
    glColor3ub (131, 81, 71);
    make_quads(-0.09,0.16,-0.16,0.16,-0.16,-0.05,-0.09,-0.05);
    glColor3ub (146, 43, 33);
    make_triangles(-0.05,0.20,-0.25,0.39,-0.45,0.20);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub (28, 26, 25);
    glVertex2f(-0.43,-0.07);
    glVertex2f(-0.43,0.20);
    glVertex2f(-0.07,-0.07);
    glVertex2f(-0.07,0.20);
    glVertex2f(-0.43,0.20);
    glVertex2f(-0.07,0.20);
    glVertex2f(-0.43,-0.07);
    glVertex2f(-0.07,-0.07);
    glEnd();
    glPointSize(35);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(-0.38,0.11);
    glVertex2f(-0.31,0.03);
    glEnd();
    glPointSize(20);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(-0.37,0.01);
    glVertex2f(-0.31,0.12);
    glEnd();
    glPopMatrix();

}



void SmallHut()
{
    //1
    glColor3ub (100, 30, 22);

    make_quads(-0.82,0.20,-0.95,0.20,-0.95,0.22,-0.82,0.22);
    glColor3ub (175, 96, 26);
    make_quads(-0.83,0.22,-0.94,0.22,-0.94,0.31,-0.83,0.31);
    glColor3ub (146, 43, 33);
    make_triangles(-0.95,0.31,-0.885,0.39,-0.82,0.31);
    glColor3ub (131, 81, 71);
    make_quads(-0.84,0.23,-0.86,0.23,-0.86,0.29,-0.84,0.29);
    glPointSize(12);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(-0.925,0.28);
    glVertex2f(-0.90,0.25);
    glEnd();

    //2
    glColor3ub (100, 30, 22);

    make_quads(0.12,0.06,0.25,0.06,0.25,0.08,0.12,0.08);
    glColor3ub (175, 96, 26);
    make_quads(0.13,0.08,0.24,0.08,0.24,0.17,0.13,0.17);
    glColor3ub (146, 43, 33);
    make_triangles(0.25,0.17,0.185,0.25,0.12,0.17);
    glColor3ub (131, 81, 71);
    make_quads(0.14,0.09,0.16,0.09,0.16,0.15,0.14,0.15);
    glPointSize(12);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(0.225,0.14);
    glVertex2f(0.20,0.11);
    glEnd();


    //3
    glColor3ub (100, 30, 22);

    make_quads(0.72,0.26,0.85,0.26,0.85,0.28,0.72,0.28);
    glColor3ub (175, 96, 26);
    make_quads(0.73,0.28,0.84,0.28,0.84,0.37,0.73,0.37);
    glColor3ub (146, 43, 33);
    make_triangles(0.85,0.37,0.785,0.45,0.72,0.37);
    glColor3ub (131, 81, 71);
    make_quads(0.74,0.29,0.76,0.29,0.76,0.35,0.74,0.35);
    glPointSize(12);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(0.825,0.34);
    glVertex2f(0.80,0.31);
    glEnd();

}



void TownSTART()
{


    glColor3ub(208, 211, 212);
    make_quads(1.0,-0.40,-1.0,-0.40,-1.0,0.40,1.0,0.40);
    glLoadIdentity();
    glColor3ub(205, 97, 85);
    make_quads(1.0,-0.50,-1.0,-0.50,-1.0,-0.40,1.0,-0.40);
    glBegin(GL_LINES);
    glColor3ub(240, 243, 244);
    glVertex2f(1.0,-0.40);
    glVertex2f(-1.0,-0.40);
    glVertex2f(1.0,-0.45);
    glVertex2f(-1.0,-0.45);
    glVertex2f(1.0,-0.50);
    glVertex2f(-1.0,-0.50);
    glEnd();

}

void Townbuilding()
{
    //most right 1
    glColor3ub(31, 97, 141);
    make_quads(.95,-0.10,0.80,-0.10,0.80,0.65,0.95,0.65);
    glColor3ub(21, 67, 96);
    make_quads(.93,-0.10,0.82,-0.10,0.82,0.0,0.93,0.0);
    glPointSize(18);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(0.92,0.60);
    glVertex2f(0.875,0.60);
    glVertex2f(0.83,0.60);

    glVertex2f(0.92,0.50);
    glVertex2f(0.875,0.50);
    glVertex2f(0.83,0.50);


    glVertex2f(0.92,0.40);
    glVertex2f(0.875,0.40);
    glVertex2f(0.83,0.40);

    glVertex2f(0.92,0.30);
    glVertex2f(0.875,0.30);
    glVertex2f(0.83,0.30);

    glVertex2f(0.92,0.20);
    glVertex2f(0.875,0.20);
    glVertex2f(0.83,0.20);

    glVertex2f(0.92,0.10);
    glVertex2f(0.875,0.10);
    glVertex2f(0.83,0.10);


    glEnd();

}


void Townbuilding2()
{

    //2
    glColor3ub(127, 179, 213);
    make_quads(.80,-0.10,0.73,-0.10,0.73,0.55,0.80,0.55);
    //3
    glColor3ub(84, 153, 199);
    make_quads(.73,-0.10,0.70,-0.10,0.70,0.50,0.73,0.50);
    //4
    glColor3ub(41, 128, 185);
    make_quads(.70,-0.10,0.68,-0.10,0.68,0.45,0.70,0.45);
    //5
    //TowerSide Building
    glColor3ub(0,152,205);
    make_quads(.60,-0.10,0.48,-0.10,0.48,0.12,0.60,0.12);
    //6
    //Square Light
    glColor3ub(31, 97, 141);
    make_quads(.56,0.12,0.36,0.12,0.36,0.40,0.56,0.40);
    glPointSize(8);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    //

    glVertex2f(0.385,0.36);
    glVertex2f(0.415,0.36);
    glVertex2f(0.445,0.36);
    glVertex2f(0.475,0.36);
    glVertex2f(0.505,0.36);
    glVertex2f(0.535,0.36);

    glVertex2f(0.385,0.32);
    glVertex2f(0.415,0.32);
    glVertex2f(0.445,0.32);
    glVertex2f(0.475,0.32);
    glVertex2f(0.505,0.32);
    glVertex2f(0.535,0.32);

    glVertex2f(0.385,0.28);
    glVertex2f(0.415,0.28);
    glVertex2f(0.445,0.28);
    glVertex2f(0.475,0.28);
    glVertex2f(0.505,0.28);
    glVertex2f(0.535,0.28);

    glVertex2f(0.385,0.24);
    glVertex2f(0.415,0.24);
    glVertex2f(0.445,0.24);
    glVertex2f(0.475,0.24);
    glVertex2f(0.505,0.24);
    glVertex2f(0.535,0.24);

    glVertex2f(0.385,0.20);
    glVertex2f(0.415,0.20);
    glVertex2f(0.445,0.20);
    glVertex2f(0.475,0.20);
    glVertex2f(0.505,0.20);
    glVertex2f(0.535,0.20);


    glVertex2f(0.385,0.16);
    glVertex2f(0.415,0.16);
    glVertex2f(0.445,0.16);
    glVertex2f(0.475,0.16);
    glVertex2f(0.505,0.16);
    glVertex2f(0.535,0.16);

    glEnd();
    //7
    //UpperSide dOWN
    glColor3ub(0, 188, 212);
    make_quads(.48,-0.10,0.32,-0.10,0.32,0.20,0.48,0.20);
    glColor3ub(117, 117, 117);
    make_quads(.42,-0.10,0.38,-0.10,0.38,-0.02,0.42,-0.02);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(158, 158, 158);
    glVertex2f(0.375,-0.02);
    glVertex2f(0.425,-0.02);
    glEnd();
    glPointSize(12);
    glBegin(GL_POINTS);
    glColor3ub (240, 243,244);
    glVertex2f(0.338,0.17);
    glVertex2f(0.368,0.17);
    glVertex2f(0.398,0.17);
    glVertex2f(0.428,0.17);
    glVertex2f(0.458,0.17);

    glVertex2f(0.338,0.12);
    glVertex2f(0.368,0.12);
    glVertex2f(0.398,0.12);
    glVertex2f(0.428,0.12);
    glVertex2f(0.458,0.12);


    glVertex2f(0.338,0.07);
    glVertex2f(0.368,0.07);
    glVertex2f(0.398,0.07);
    glVertex2f(0.428,0.07);
    glVertex2f(0.458,0.07);


    glVertex2f(0.338,0.02);
    glVertex2f(0.368,0.02);
    glVertex2f(0.398,0.02);
    glVertex2f(0.428,0.02);
    glVertex2f(0.458,0.02);

    glEnd();

    //Tower
    glColor3ub(31, 97, 141);
    make_quads(.68,-0.10,0.58,-0.10,0.58,0.07,0.68,0.07);
    make_quads(.67,-0.10,0.59,-0.10,0.59,0.37,0.67,0.37);
    make_quads(.66,-0.10,0.60,-0.10,0.60,0.45,0.66,0.45);
    glColor3ub(41, 128, 185);
    make_quads(.655,0.45,0.605,0.45,0.605,0.50,0.655,0.50);
    glColor3ub(186, 74,0);
    make_quads(.652,0.50,0.607,0.50,0.607,0.51,0.652,0.51);
    glColor3ub(127, 179, 213);
    make_quads(.650,0.51,0.608,0.51,0.608,0.53,0.650,0.53);

    glColor3ub(186, 74,0);
    make_triangles(0.617,0.53,0.641,0.53,0.629,0.64);

    glLineWidth(14);
    glBegin(GL_LINES);
    glColor3ub (240, 243,244);
    glVertex2f(.63,-0.10);
    glVertex2f(.63,0.47);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(41, 128, 185);
    glVertex2f(.65,-0.10);
    glVertex2f(.65,0.45);
    glVertex2f(.66,-0.10);
    glVertex2f(.66,0.45);

    glVertex2f(.61,-0.10);
    glVertex2f(.61,0.45);
    glVertex2f(.60,-0.10);
    glVertex2f(.60,0.45);


    glVertex2f(.59,-0.10);
    glVertex2f(.59,0.35);
    glVertex2f(.67,-0.10);
    glVertex2f(.67,0.35);
    glEnd();



    glLoadIdentity();


}





void Kansgrass()
{

    //3
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.77,-0.40);
    glVertex2f(-0.79,-0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.79,-0.20);
    glVertex2f(-0.78,-0.19);
    glVertex2f(-0.80,-0.19);
    glVertex2f(-0.79,-0.10);
    glVertex2f(-0.78,-0.19);
    glEnd();


    //2
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.87,-0.40);
    glVertex2f(-0.89,-0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.89,-0.20);
    glVertex2f(-0.88,-0.19);
    glVertex2f(-0.90,-0.19);
    glVertex2f(-0.89,-0.10);
    glVertex2f(-0.88,-0.19);
    glEnd();


    //1
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.97,-0.40);
    glVertex2f(-0.96,-0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.96,-0.20);
    glVertex2f(-0.97,-0.19);
    glVertex2f(-0.95,-0.19);
    glVertex2f(-0.96,-0.10);
    glVertex2f(-0.97,-0.19);
    glEnd();



    //4
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.67,-0.40);
    glVertex2f(-0.66,-0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.66,-0.20);
    glVertex2f(-0.67,-0.19);
    glVertex2f(-0.65,-0.19);
    glVertex2f(-0.66,-0.10);
    glVertex2f(-0.67,-0.19);
    glEnd();

    //6
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.37,-0.40);
    glVertex2f(-0.36,-0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.36,-0.20);
    glVertex2f(-0.37,-0.19);
    glVertex2f(-0.35,-0.19);
    glVertex2f(-0.36,-0.10);
    glVertex2f(-0.37,-0.19);
    glEnd();

    //1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.47,-0.40);
    glVertex2f(-0.49,-0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.49,-0.20);
    glVertex2f(-0.48,-0.19);
    glVertex2f(-0.50,-0.19);
    glVertex2f(-0.49,-0.10);
    glVertex2f(-0.48,-0.19);
    glEnd();


    //7
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.17,-0.40);
    glVertex2f(-0.19,-0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.19,-0.25);
    glVertex2f(-0.18,-0.24);
    glVertex2f(-0.20,-0.24);
    glVertex2f(-0.19,-0.17);
    glVertex2f(-0.18,-0.24);
    glEnd();


    //8
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.12,-0.40);
    glVertex2f(-0.12,-0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.12,-0.25);
    glVertex2f(-0.11,-0.24);
    glVertex2f(-0.13,-0.24);
    glVertex2f(-0.12,-0.17);
    glVertex2f(-0.11,-0.24);
    glEnd();

    //9
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(-0.10,-0.40);
    glVertex2f(-0.09,-0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(-0.09,-0.25);
    glVertex2f(-0.08,-0.24);
    glVertex2f(-0.10,-0.24);
    glVertex2f(-0.09,-0.17);
    glVertex2f(-0.08,-0.24);
    glEnd();


    //11
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.47,-0.40);
    glVertex2f(0.49,-0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.49,-0.20);
    glVertex2f(0.48,-0.19);
    glVertex2f(0.50,-0.19);
    glVertex2f(0.49,-0.10);
    glVertex2f(0.48,-0.19);
    glEnd();


    //10
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.17,-0.40);
    glVertex2f(0.19,-0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.19,-0.20);
    glVertex2f(0.18,-0.19);
    glVertex2f(0.20,-0.19);
    glVertex2f(0.19,-0.10);
    glVertex2f(0.18,-0.19);
    glEnd();




    //12
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.97,-0.40);
    glVertex2f(0.99,-0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.99,-0.20);
    glVertex2f(0.98,-0.19);
    glVertex2f(1.0,-0.19);
    glVertex2f(0.99,-0.10);
    glVertex2f(0.98,-0.19);
    glEnd();


    //13
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.91,-0.40);
    glVertex2f(0.89,-0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.89,-0.20);
    glVertex2f(0.88,-0.19);
    glVertex2f(0.90,-0.19);
    glVertex2f(0.89,-0.10);
    glVertex2f(0.88,-0.19);
    glEnd();

    //14
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.71,-0.40);
    glVertex2f(0.69,-0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.69,-0.20);
    glVertex2f(0.68,-0.19);
    glVertex2f(0.70,-0.19);
    glVertex2f(0.69,-0.10);
    glVertex2f(0.68,-0.19);
    glEnd();


    //15
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.66,-0.40);
    glVertex2f(0.63,-0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.63,-0.10);
    glVertex2f(0.62,-0.09);
    glVertex2f(0.64,-0.09);
    glVertex2f(0.63,-0.0);
    glVertex2f(0.62,-0.09);
    glEnd();


    //16
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.73,-0.40);
    glVertex2f(0.76,-0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.76,-0.10);
    glVertex2f(0.77,-0.09);
    glVertex2f(0.75,-0.09);
    glVertex2f(0.76,-0.0);
    glVertex2f(0.77,-0.09);
    glEnd();


    //17
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.43,-0.40);
    glVertex2f(0.46,-0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.46,-0.10);
    glVertex2f(0.47,-0.09);
    glVertex2f(0.45,-0.09);
    glVertex2f(0.46,-0.0);
    glVertex2f(0.47,-0.09);
    glEnd();

    //18
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.38,-0.40);
    glVertex2f(0.36,-0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.36,-0.10);
    glVertex2f(0.37,-0.09);
    glVertex2f(0.35,-0.09);
    glVertex2f(0.36,-0.0);
    glVertex2f(0.37,-0.09);
    glEnd();




    //19
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.10,-0.40);
    glVertex2f(0.08,-0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.08,-0.10);
    glVertex2f(0.09,-0.09);
    glVertex2f(0.07,-0.09);
    glVertex2f(0.08,-0.0);
    glVertex2f(0.09,-0.09);
    glEnd();


    //20
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(27, 94, 32 );
    glVertex2f(0.12,-0.40);
    glVertex2f(0.14,-0.10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(238, 238, 238);
    glVertex2f(0.14,-0.10);
    glVertex2f(0.15,-0.09);
    glVertex2f(0.13,-0.09);
    glVertex2f(0.14,-0.0);
    glVertex2f(0.15,-0.09);
    glEnd();





}



void MOON()
{

    //Sun
    glColor3ub (255, 255, 255);
    makeCircle(0.80f,0.82f,0.09f);


}

void Ncloud()
{

    //Place for Megh

    //Cloud One (Left To Right)
    glPushMatrix();
    glColor3ub (189, 189, 189);
    glTranslatef(positionCloud1,0.0f, 0.0f);
    makeCircle(-0.80,0.82,0.08);
    //2
    makeCircle(-0.75,0.82,0.07);
    //3
    makeCircle(-0.85f,0.82,0.07);
    glPopMatrix();


    //Second Cloud
    glPushMatrix();
    glColor3ub (189, 189, 189);
    glTranslatef(positionCloud2,0.0f, 0.0f);
    makeCircle(0.80,0.76f,0.08);
    makeCircle(0.75,0.76f,0.07);
    makeCircle(0.85,0.76f,0.07);
    glPopMatrix();



    //Third Cloud
    glPushMatrix();
    glColor3ub (189, 189, 189);
    glTranslatef(positionCloud3,0.0f, 0.0f);
    makeCircle(0.65,0.670,0.07);
    makeCircle(0.75,0.64,0.08);
    makeCircle(0.72,0.76,0.08);
    glPopMatrix();



    //Fourth Cloud
    glPushMatrix();
    glColor3ub (189, 189, 189);
    glTranslatef(positionCloud4,0.0f, 0.0f);
    makeCircle(-0.65,0.80,0.07);
    makeCircle(-0.75,0.77,0.08);
    makeCircle(-0.72,0.89,0.08);
    glPopMatrix();
    //End of Megh

}


void NLamppost()
{

    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.78f,-0.40f);
    glVertex2f(0.80f,-0.40f);
    glVertex2f(0.80f,-0.24f);
    glVertex2f(0.78f,-0.24f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.795f,-0.24f);
    glVertex2f(0.785f,-0.24f);
    glVertex2f(0.785f,0.09f);
    glVertex2f(0.795f,0.09f);
    glEnd();


//Bulb 1


    glColor3ub (250, 250, 250);
    makeCircle(0.790f,0.09f,0.02);


//Left Lamp




    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.25f,-0.40f);
    glVertex2f(0.23f,-0.40f);
    glVertex2f(0.23,-0.24f);
    glVertex2f(0.25f,-0.24f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(44, 62, 80);
    glVertex2f(0.245f,-0.24f);
    glVertex2f(0.235f,-0.24f);
    glVertex2f(0.235,0.09f);
    glVertex2f(0.245f,0.09f);
    glEnd();


//Bulb 2


    glColor3ub (250, 250, 250);
    makeCircle(0.240,0.09,0.02);




}




void Display1s()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    Grass();
    Soil();
    Mountain();
    Grass_Under_Hills();
    Tanim();
    threetree();
    FoodCorner();
    Medicine();
    Lamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    FenceDesign();
    DesignWall();
    WindMill();
    forestGrass();
    //Kansgrass();
    WindMillFan();
    Divider();
    //


    //
    House();
    sun();
    Car1();
    cloud();


    glLoadIdentity();
    glFlush();

}


void Display2()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    sky();
    //MailBox();
    Road();
    // Fence();
    sun();
    Wall();
    FenceDesign();
    DesignWall();
    Grass();
    Soil();
    Divider();
    Mountain();
    Grass_Under_Hills();
    SmallHut();
    Hut();

    JourneyTree();
    CircleTree();
    LeftmostTree();
    forestGrass();
    GrassUndertree();
    cloud();
    Car1();
    glLoadIdentity();
    glFlush();



}

void Display3()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    sky();
    sun();
    Road();
    Divider();
    Wall();

    TownSTART();
    Townbuilding();
    Townbuilding2();

    //Grass();
    //Soil();
    Divider();
    cloud();
    Car1();
    cloud();
    glLoadIdentity();
    glFlush();

}






void Display2S()
{

    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    sky();
    Road();
    sun();
    Wall();
    FenceDesign();
    DesignWall();
    Grass();
    Soil();
    Divider();
    Mountain();
    Grass_Under_Hills();
    SmallHut();
    Hut();

    JourneyTree();
    CircleTree();
    LeftmostTree();
    Kansgrass();
    forestGrass();
    GrassUndertree();
    cloud();
    Car1();
    glLoadIdentity();
    glFlush();



}

void DisplayNS()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    Grass();
    Soil();
    Mountain();
    threetree();
    FoodCorner();
    Medicine();
    NLamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    FenceDesign();
    DesignWall();
    WindMill();
    Grass_Under_Hills();
    WindMillFan();
    Divider();
    House();
    MOON();
    Car1();
    Ncloud();
    
    glLoadIdentity();
    glFlush();


}


void handleKeypress(unsigned char key, int x, int y)
{

    if (key == '1')    //Summer village
    {
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 680);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
        glutCreateWindow("Village in Day Time");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(Display1s);



    }
    if (key == '2')    //Summer village
    {
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 680);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
        glutCreateWindow("Village in Day Time");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(DisplayNS);
    }
    if (key == '3')    //Summer village
    {
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 680);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
        glutCreateWindow("Village in Day Time");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(Display2);
    }
    if (key == '4')    //Summer village
    {
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 680);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
        glutCreateWindow("Village in Day Time");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(Display2S);
    }
    if (key == '5')    //Summer village
    {
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 680);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
        glutCreateWindow("Village in Day Time");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(Display3);
    }

}






int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1240, 680);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
    glutCreateWindow("Rasel");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display);
    glutKeyboardFunc(handleKeypress);
//    glutMouseFunc(handleMouse);
    glutTimerFunc(1000, update, 0);
    glutMainLoop();
    return 0;
}

