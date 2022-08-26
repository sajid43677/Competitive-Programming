#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>

#define PI          3.141516

GLfloat poshuman = 0.0f;
GLfloat sphuman = 0.01f;
GLfloat position = 0.0f;
GLfloat speed = 0.03f;
GLfloat rain_position = 1.0f;
GLfloat rain_speed = 0.1f;
GLfloat sposition = 1.0f;
GLfloat Sspeed = 0.01f;

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

 void update(int value) {




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
    {
       position = -1.0f;
    }
    else if(positionjrtree1>1.5)
    {
        positionjrtree1 =-1.5;
    }
    else if(rain_position <0.10)
    {
       rain_position = 0.50f;
    }
    else if (poshuman > 1.0)
    {
        poshuman = -2.0f;
    }
    else if(sposition <0.10)
    {
        sposition = 0.50f;
    }


    sposition -= Sspeed;

    poshuman += sphuman;
    rain_position -= rain_speed;
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





void StartingText()
{
   char text[120];
    sprintf(text, "PROJECT ON:: SEASSONS",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , 32 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -20 , 22 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
     sprintf(text,"RASEL MAHMUD <=>20-43867-2",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , 20 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"SUJOY KUMAR DAS<=>20-43775-2",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , 10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"SANZANA IMAM CHOWDHURY <=>20-43437-1  ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"TAIFUR MOHAMMAD TANIM<=>20-43338-1 ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"SADMAN SANID TANIM<=>20-43866-2 ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -20 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"Press 1,2,3,4,5,6 to continue the story In SUMMER",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press D,E,F,d,e,f to continue the story In RAINY",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press A,B,C,a,b,c to continue the story In SPRING",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -40 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press J,K,L,j,k,l to continue the story In WINTER",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"Press G,H,I,g,h,i to continue the story In AUTUMN",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -50 , -50 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }


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
   GLfloat  p1=a; GLfloat q1=b; GLfloat r1 =c;
    int tringle2=100;

    GLfloat tp2 =2.0f * 3.1416  ;
    glBegin (GL_TRIANGLE_FAN);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
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

void Human()
   {
       ///HUMAN-1----------------------------------
    glPushMatrix();
    glTranslatef(poshuman,0, 0.0f);
    glColor3ub (0,0,0);
    makeCircle(-0.8,0.00, 0.03);

    glBegin(GL_QUADS);
    glColor3ub(199,97,33);
    glVertex2f(-0.84f, -0.036f);
    glVertex2f( -0.84f, -0.2f);
    glVertex2f( -0.76f, -0.2f);
    glVertex2f(-0.76f,  -0.036f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(100,41,93);
    glVertex2f(-0.82f, -0.2f);
    glVertex2f( -0.82f, -0.35f);
    glVertex2f( -0.78f, -0.35f);
    glVertex2f(-0.78f,  -0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,242,233);
    glVertex2f(-0.81f, -0.08f);
    glVertex2f(-0.79f, -0.18f);
    glVertex2f(-0.78f, -0.28f);
    glVertex2f(-0.77f, -0.26f);
    glVertex2f(-0.80f, -0.16f);
    glVertex2f(-0.81f, -0.06f);

    glEnd();
    glPopMatrix();

   ///HUMAN-2----------------------------------
      glPushMatrix();
   glTranslatef(poshuman,0, 0.0f);
    glColor3ub (0,0,0);
    makeCircle(-0.4,0.00, 0.03);

    glBegin(GL_QUADS);
    glColor3ub(240,98,146);
    glVertex2f(-0.44f, -0.036f);
    glVertex2f( -0.44f, -0.2f);
    glVertex2f( -0.36f, -0.2f);
    glVertex2f(-0.36f,  -0.036f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(100,41,93);
    glVertex2f(-0.42f, -0.2f);
    glVertex2f( -0.42f, -0.35f);
    glVertex2f( -0.38f, -0.35f);
    glVertex2f(-0.38f,  -0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,242,233);
    glVertex2f(-0.41f, -0.08f);
    glVertex2f(-0.39f, -0.18f);
    glVertex2f(-0.38f, -0.28f);
    glVertex2f(-0.37f, -0.26f);
    glVertex2f(-0.40f, -0.16f);
    glVertex2f(-0.41f, -0.06f);

    glEnd();
    glPopMatrix();


   }


void rain()
{
    //rainline
    glPushMatrix();
    glTranslatef(0,rain_position,0);
    glColor3ub(229, 232, 232);
    glBegin(GL_LINES);
    glVertex2f(-0.97, 1.0);
    glVertex2f(-0.97, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.90);
    glVertex2f(-0.97, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.82);
    glVertex2f(-0.97, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.71);
    glVertex2f(-0.97, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.62);
    glVertex2f(-0.97, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.52);
    glVertex2f(-0.97, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.43);
    glVertex2f(-0.97, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.33);
    glVertex2f(-0.97, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.22);
    glVertex2f(-0.97, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.11);
    glVertex2f(-0.97, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, 0.01);
    glVertex2f(-0.97, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.1);
    glVertex2f(-0.97, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.2);
    glVertex2f(-0.97, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.30);
    glVertex2f(-0.97, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.41);
    glVertex2f(-0.97, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.50);
    glVertex2f(-0.97, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.61);
    glVertex2f(-0.97, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.72);
    glVertex2f(-0.97, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.81);
    glVertex2f(-0.97, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.97, -0.91);
    glVertex2f(-0.97, -0.93);
    glEnd();
    //2---------------------------

    glBegin(GL_LINES);
    glVertex2f(0.97, 1.0);
    glVertex2f(0.97, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.90);
    glVertex2f(0.97, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.82);
    glVertex2f(0.97, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.71);
    glVertex2f(0.97, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.62);
    glVertex2f(0.97, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.52);
    glVertex2f(0.97, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.43);
    glVertex2f(0.97, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.33);
    glVertex2f(0.97, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.22);
    glVertex2f(0.97, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.11);
    glVertex2f(0.97, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, 0.01);
    glVertex2f(0.97, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.1);
    glVertex2f(0.97, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.2);
    glVertex2f(0.97, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.30);
    glVertex2f(0.97, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.41);
    glVertex2f(0.97, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.50);
    glVertex2f(0.97, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.61);
    glVertex2f(0.97, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.72);
    glVertex2f(0.97, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.81);
    glVertex2f(0.97, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.97, -0.91);
    glVertex2f(0.97, -0.93);
    glEnd();
    //3-----------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.97);
    glVertex2f(-0.91, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.89);
    glVertex2f(-0.91, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.80);
    glVertex2f(-0.91, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.72);
    glVertex2f(-0.91, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.64);
    glVertex2f(-0.91, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.55);
    glVertex2f(-0.91, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.47);
    glVertex2f(-0.91, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.36);
    glVertex2f(-0.91, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.27);
    glVertex2f(-0.91, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.15);
    glVertex2f(-0.91, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, 0.06);
    glVertex2f(-0.91, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.01);
    glVertex2f(-0.91, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.13);
    glVertex2f(-0.91, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.23);
    glVertex2f(-0.91, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.31);
    glVertex2f(-0.91, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.41);
    glVertex2f(-0.91, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.50);
    glVertex2f(-0.91, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.62);
    glVertex2f(-0.91, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.74);
    glVertex2f(-0.91, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.91, -0.88);
    glVertex2f(-0.91, -0.91);
    glEnd();
    //4----------------------------
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.97);
    glVertex2f(0.91, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.89);
    glVertex2f(0.91, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.80);
    glVertex2f(0.91, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.72);
    glVertex2f(0.91, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.64);
    glVertex2f(0.91, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.55);
    glVertex2f(0.91, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.47);
    glVertex2f(0.91, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.36);
    glVertex2f(0.91, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.27);
    glVertex2f(0.91, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.15);
    glVertex2f(0.91, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, 0.06);
    glVertex2f(0.91, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.01);
    glVertex2f(0.91, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.13);
    glVertex2f(0.91, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.23);
    glVertex2f(0.91, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.31);
    glVertex2f(0.91, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.41);
    glVertex2f(0.91, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.50);
    glVertex2f(0.91, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.62);
    glVertex2f(0.91, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.74);
    glVertex2f(0.91, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.91, -0.88);
    glVertex2f(0.91, -0.91);
    glEnd();
    //5-------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.86, 1.0);
    glVertex2f(-0.86, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.90);
    glVertex2f(-0.86, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.82);
    glVertex2f(-0.86, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.71);
    glVertex2f(-0.86, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.62);
    glVertex2f(-0.86, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.52);
    glVertex2f(-0.86, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.43);
    glVertex2f(-0.86, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.33);
    glVertex2f(-0.86, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.22);
    glVertex2f(-0.86, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.11);
    glVertex2f(-0.86, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, 0.01);
    glVertex2f(-0.86, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.1);
    glVertex2f(-0.86, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.2);
    glVertex2f(-0.86, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.30);
    glVertex2f(-0.86, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.41);
    glVertex2f(-0.86, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.50);
    glVertex2f(-0.86, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.61);
    glVertex2f(-0.86, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.72);
    glVertex2f(-0.86, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.81);
    glVertex2f(-0.86, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.86, -0.91);
    glVertex2f(-0.86, -0.93);
    glEnd();
    //6-----------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.86, 1.0);
    glVertex2f(0.86, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.90);
    glVertex2f(0.86, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.82);
    glVertex2f(0.86, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.71);
    glVertex2f(0.86, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.62);
    glVertex2f(0.86, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.52);
    glVertex2f(0.86, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.43);
    glVertex2f(0.86, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.33);
    glVertex2f(0.86, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.22);
    glVertex2f(0.86, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.11);
    glVertex2f(0.86, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, 0.01);
    glVertex2f(0.86, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.1);
    glVertex2f(0.86, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.2);
    glVertex2f(0.86, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.30);
    glVertex2f(0.86, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.41);
    glVertex2f(0.86, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.50);
    glVertex2f(0.86, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.61);
    glVertex2f(0.86, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.72);
    glVertex2f(0.86, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.81);
    glVertex2f(0.86, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.86, -0.91);
    glVertex2f(0.86, -0.93);
    glEnd();
    //7--------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.97);
    glVertex2f(-0.78, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.89);
    glVertex2f(-0.78, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.80);
    glVertex2f(-0.78, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.72);
    glVertex2f(-0.78, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.64);
    glVertex2f(-0.78, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.55);
    glVertex2f(-0.78, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.47);
    glVertex2f(-0.78, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.36);
    glVertex2f(-0.78, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.27);
    glVertex2f(-0.78, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.15);
    glVertex2f(-0.78, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, 0.06);
    glVertex2f(-0.78, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.01);
    glVertex2f(-0.78, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.13);
    glVertex2f(-0.78, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.23);
    glVertex2f(-0.78, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.31);
    glVertex2f(-0.78, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.41);
    glVertex2f(-0.78, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.50);
    glVertex2f(-0.78, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.62);
    glVertex2f(-0.78, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.74);
    glVertex2f(-0.78, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.78, -0.88);
    glVertex2f(-0.78, -0.91);
    glEnd();
    //8---------------------------
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.97);
    glVertex2f(0.79, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.89);
    glVertex2f(0.79, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.80);
    glVertex2f(0.79, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.72);
    glVertex2f(0.79, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.64);
    glVertex2f(0.79, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.55);
    glVertex2f(0.79, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.47);
    glVertex2f(0.79, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.36);
    glVertex2f(0.79, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.27);
    glVertex2f(0.79, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.15);
    glVertex2f(0.79, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.06);
    glVertex2f(0.79, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.01);
    glVertex2f(0.79, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.13);
    glVertex2f(0.79, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.23);
    glVertex2f(0.79, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.31);
    glVertex2f(0.79, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.41);
    glVertex2f(0.79, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.50);
    glVertex2f(0.79, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.62);
    glVertex2f(0.79, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.74);
    glVertex2f(0.79, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.79, -0.88);
    glVertex2f(0.79, -0.91);
    glEnd();
    //9-------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.73, 1.0);
    glVertex2f(0.73, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.90);
    glVertex2f(0.73, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.82);
    glVertex2f(0.73, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.71);
    glVertex2f(0.73, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.62);
    glVertex2f(0.73, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.52);
    glVertex2f(0.73, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.43);
    glVertex2f(0.73, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.33);
    glVertex2f(0.73, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.22);
    glVertex2f(0.73, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.11);
    glVertex2f(0.73, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, 0.01);
    glVertex2f(0.73, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.1);
    glVertex2f(0.73, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.2);
    glVertex2f(0.73, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.30);
    glVertex2f(0.73, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.41);
    glVertex2f(0.73, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.50);
    glVertex2f(0.73, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.61);
    glVertex2f(0.73, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.72);
    glVertex2f(0.73, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.81);
    glVertex2f(0.73, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.73, -0.91);
    glVertex2f(0.73, -0.93);
    glEnd();
    //10----------------------
    glBegin(GL_LINES);
    glVertex2f(-0.73, 1.0);
    glVertex2f(-0.73, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.90);
    glVertex2f(-0.73, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.82);
    glVertex2f(-0.73, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.71);
    glVertex2f(-0.73, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.62);
    glVertex2f(-0.73, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.52);
    glVertex2f(-0.73, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.43);
    glVertex2f(-0.73, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.33);
    glVertex2f(-0.73, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.22);
    glVertex2f(-0.73, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.11);
    glVertex2f(-0.73, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, 0.01);
    glVertex2f(-0.73, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.1);
    glVertex2f(-0.73, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.2);
    glVertex2f(-0.73, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.30);
    glVertex2f(-0.73, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.41);
    glVertex2f(-0.73, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.50);
    glVertex2f(-0.73, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.61);
    glVertex2f(-0.73, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.72);
    glVertex2f(-0.73, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.81);
    glVertex2f(-0.73, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.73, -0.91);
    glVertex2f(-0.73, -0.93);
    glEnd();
    //11--------------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.97);
    glVertex2f(-0.68, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.89);
    glVertex2f(-0.68, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.80);
    glVertex2f(-0.68, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.72);
    glVertex2f(-0.68, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.64);
    glVertex2f(-0.68, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.55);
    glVertex2f(-0.68, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.47);
    glVertex2f(-0.68, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.36);
    glVertex2f(-0.68, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.27);
    glVertex2f(-0.68, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.15);
    glVertex2f(-0.68, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, 0.06);
    glVertex2f(-0.68, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.01);
    glVertex2f(-0.68, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.13);
    glVertex2f(-0.68, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.23);
    glVertex2f(-0.68, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.31);
    glVertex2f(-0.68, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.41);
    glVertex2f(-0.68, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.50);
    glVertex2f(-0.68, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.62);
    glVertex2f(-0.68, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.74);
    glVertex2f(-0.68, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.68, -0.88);
    glVertex2f(-0.68, -0.91);
    glEnd();
    //12-----------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.97);
    glVertex2f(0.68, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.89);
    glVertex2f(0.68, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.80);
    glVertex2f(0.68, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.72);
    glVertex2f(0.68, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.64);
    glVertex2f(0.68, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.55);
    glVertex2f(0.68, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.47);
    glVertex2f(0.68, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.36);
    glVertex2f(0.68, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.27);
    glVertex2f(0.68, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.15);
    glVertex2f(0.68, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, 0.06);
    glVertex2f(0.68, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.01);
    glVertex2f(0.68, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.13);
    glVertex2f(0.68, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.23);
    glVertex2f(0.68, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.31);
    glVertex2f(0.68, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.41);
    glVertex2f(0.68, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.50);
    glVertex2f(0.68, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.62);
    glVertex2f(0.68, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.74);
    glVertex2f(0.68, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.68, -0.88);
    glVertex2f(0.68, -0.91);
    glEnd();
    //13---------------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.62, 1.0);
    glVertex2f(-0.62, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.90);
    glVertex2f(-0.62, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.82);
    glVertex2f(-0.62, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.71);
    glVertex2f(-0.62, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.62);
    glVertex2f(-0.62, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.52);
    glVertex2f(-0.62, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.43);
    glVertex2f(-0.62, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.33);
    glVertex2f(-0.62, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.22);
    glVertex2f(-0.62, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.11);
    glVertex2f(-0.62, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, 0.01);
    glVertex2f(-0.62, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.1);
    glVertex2f(-0.62, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.2);
    glVertex2f(-0.62, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.30);
    glVertex2f(-0.62, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.41);
    glVertex2f(-0.62, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.50);
    glVertex2f(-0.62, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.61);
    glVertex2f(-0.62, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.72);
    glVertex2f(-0.62, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.81);
    glVertex2f(-0.62, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.62, -0.91);
    glVertex2f(-0.62, -0.93);
    glEnd();
    //14-------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.62, 1.0);
    glVertex2f(0.62, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.90);
    glVertex2f(0.62, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.82);
    glVertex2f(0.62, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.71);
    glVertex2f(0.62, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.62);
    glVertex2f(0.62, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.52);
    glVertex2f(0.62, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.43);
    glVertex2f(0.62, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.33);
    glVertex2f(0.62, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.22);
    glVertex2f(0.62, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.11);
    glVertex2f(0.62, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, 0.01);
    glVertex2f(0.62, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.1);
    glVertex2f(0.62, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.2);
    glVertex2f(0.62, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.30);
    glVertex2f(0.62, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.41);
    glVertex2f(0.62, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.50);
    glVertex2f(0.62, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.61);
    glVertex2f(0.62, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.72);
    glVertex2f(0.62, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.81);
    glVertex2f(0.62, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.62, -0.91);
    glVertex2f(0.62, -0.93);
    glEnd();
    //15------------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.97);
    glVertex2f(-0.55, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.89);
    glVertex2f(-0.55, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.80);
    glVertex2f(-0.55, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.72);
    glVertex2f(-0.55, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.64);
    glVertex2f(-0.55, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.55);
    glVertex2f(-0.55, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.47);
    glVertex2f(-0.55, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.36);
    glVertex2f(-0.55, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.27);
    glVertex2f(-0.55, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.15);
    glVertex2f(-0.55, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, 0.06);
    glVertex2f(-0.55, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.01);
    glVertex2f(-0.55, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.13);
    glVertex2f(-0.55, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.23);
    glVertex2f(-0.55, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.31);
    glVertex2f(-0.55, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.41);
    glVertex2f(-0.55, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.50);
    glVertex2f(-0.55, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.62);
    glVertex2f(-0.55, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.74);
    glVertex2f(-0.55, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.55, -0.88);
    glVertex2f(-0.55, -0.91);
    glEnd();
    //16------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.97);
    glVertex2f(0.55, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.89);
    glVertex2f(0.55, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.80);
    glVertex2f(0.55, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.72);
    glVertex2f(0.55, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.64);
    glVertex2f(0.55, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.55);
    glVertex2f(0.55, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.47);
    glVertex2f(0.55, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.36);
    glVertex2f(0.55, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.27);
    glVertex2f(0.55, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.15);
    glVertex2f(0.55, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, 0.06);
    glVertex2f(0.55, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.01);
    glVertex2f(0.55, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.13);
    glVertex2f(0.55, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.23);
    glVertex2f(0.55, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.31);
    glVertex2f(0.55, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.41);
    glVertex2f(0.55, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.50);
    glVertex2f(0.55, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.62);
    glVertex2f(0.55, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.74);
    glVertex2f(0.55, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.55, -0.88);
    glVertex2f(0.55, -0.91);
    glEnd();
    //17-------------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.49, 1.0);
    glVertex2f(-0.49, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.90);
    glVertex2f(-0.49, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.82);
    glVertex2f(-0.49, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.71);
    glVertex2f(-0.49, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.62);
    glVertex2f(-0.49, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.52);
    glVertex2f(-0.49, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.43);
    glVertex2f(-0.49, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.33);
    glVertex2f(-0.49, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.22);
    glVertex2f(-0.49, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.11);
    glVertex2f(-0.49, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, 0.01);
    glVertex2f(-0.49, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.1);
    glVertex2f(-0.49, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.2);
    glVertex2f(-0.49, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.30);
    glVertex2f(-0.49, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.41);
    glVertex2f(-0.49, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.50);
    glVertex2f(-0.49, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.61);
    glVertex2f(-0.49, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.72);
    glVertex2f(-0.49, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.81);
    glVertex2f(-0.49, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.49, -0.91);
    glVertex2f(-0.49, -0.93);
    glEnd();
    //18--------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.49, 1.0);
    glVertex2f(0.49, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.90);
    glVertex2f(0.49, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.82);
    glVertex2f(0.49, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.71);
    glVertex2f(0.49, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.62);
    glVertex2f(0.49, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.52);
    glVertex2f(0.49, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.43);
    glVertex2f(0.49, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.33);
    glVertex2f(0.49, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.22);
    glVertex2f(0.49, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.11);
    glVertex2f(0.49, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.01);
    glVertex2f(0.49, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.1);
    glVertex2f(0.49, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.2);
    glVertex2f(0.49, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.30);
    glVertex2f(0.49, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.41);
    glVertex2f(0.49, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.50);
    glVertex2f(0.49, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.61);
    glVertex2f(0.49, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.72);
    glVertex2f(0.49, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.81);
    glVertex2f(0.49, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.49, -0.91);
    glVertex2f(0.49, -0.93);
    glEnd();
    //19--------------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.97);
    glVertex2f(-0.43, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.89);
    glVertex2f(-0.43, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.80);
    glVertex2f(-0.43, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.72);
    glVertex2f(-0.43, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.64);
    glVertex2f(-0.43, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.55);
    glVertex2f(-0.43, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.47);
    glVertex2f(-0.43, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.36);
    glVertex2f(-0.43, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.27);
    glVertex2f(-0.43, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.15);
    glVertex2f(-0.43, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, 0.06);
    glVertex2f(-0.43, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.01);
    glVertex2f(-0.43, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.13);
    glVertex2f(-0.43, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.23);
    glVertex2f(-0.43, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.31);
    glVertex2f(-0.43, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.41);
    glVertex2f(-0.43, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.50);
    glVertex2f(-0.43, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.62);
    glVertex2f(-0.43, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.74);
    glVertex2f(-0.43, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.43, -0.88);
    glVertex2f(-0.43, -0.91);
    glEnd();
    //20-----------------------------
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.97);
    glVertex2f(0.43, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.89);
    glVertex2f(0.43, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.80);
    glVertex2f(0.43, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.72);
    glVertex2f(0.43, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.64);
    glVertex2f(0.43, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.55);
    glVertex2f(0.43, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.47);
    glVertex2f(0.43, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.36);
    glVertex2f(0.43, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.27);
    glVertex2f(0.43, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.15);
    glVertex2f(0.43, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.06);
    glVertex2f(0.43, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.01);
    glVertex2f(0.43, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.13);
    glVertex2f(0.43, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.23);
    glVertex2f(0.43, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.31);
    glVertex2f(0.43, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.41);
    glVertex2f(0.43, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.50);
    glVertex2f(0.43, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.62);
    glVertex2f(0.43, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.74);
    glVertex2f(0.43, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.43, -0.88);
    glVertex2f(0.43, -0.91);
    glEnd();
    //21-------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.37, 1.0);
    glVertex2f(-0.37, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.90);
    glVertex2f(-0.37, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.82);
    glVertex2f(-0.37, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.71);
    glVertex2f(-0.37, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.62);
    glVertex2f(-0.37, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.52);
    glVertex2f(-0.37, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.43);
    glVertex2f(-0.37, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.33);
    glVertex2f(-0.37, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.22);
    glVertex2f(-0.37, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.11);
    glVertex2f(-0.37, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, 0.01);
    glVertex2f(-0.37, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.1);
    glVertex2f(-0.37, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.2);
    glVertex2f(-0.37, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.30);
    glVertex2f(-0.37, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.41);
    glVertex2f(-0.37, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.50);
    glVertex2f(-0.37, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.61);
    glVertex2f(-0.37, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.72);
    glVertex2f(-0.37, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.81);
    glVertex2f(-0.37, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.37, -0.91);
    glVertex2f(-0.37, -0.93);
    glEnd();
    //22---------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.37, 1.0);
    glVertex2f(0.37, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.90);
    glVertex2f(0.37, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.82);
    glVertex2f(0.37, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.71);
    glVertex2f(0.37, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.62);
    glVertex2f(0.37, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.52);
    glVertex2f(0.37, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.43);
    glVertex2f(0.37, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.33);
    glVertex2f(0.37, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.22);
    glVertex2f(0.37, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.11);
    glVertex2f(0.37, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, 0.01);
    glVertex2f(0.37, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.1);
    glVertex2f(0.37, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.2);
    glVertex2f(0.37, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.30);
    glVertex2f(0.37, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.41);
    glVertex2f(0.37, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.50);
    glVertex2f(0.37, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.61);
    glVertex2f(0.37, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.72);
    glVertex2f(0.37, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.81);
    glVertex2f(0.37, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.37, -0.91);
    glVertex2f(0.37, -0.93);
    glEnd();
    //23--------------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.97);
    glVertex2f(-0.33, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.89);
    glVertex2f(-0.33, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.80);
    glVertex2f(-0.33, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.72);
    glVertex2f(-0.33, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.64);
    glVertex2f(-0.33, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.55);
    glVertex2f(-0.33, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.47);
    glVertex2f(-0.33, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.36);
    glVertex2f(-0.33, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.27);
    glVertex2f(-0.33, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.15);
    glVertex2f(-0.33, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, 0.06);
    glVertex2f(-0.33, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.01);
    glVertex2f(-0.33, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.13);
    glVertex2f(-0.33, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.23);
    glVertex2f(-0.33, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.31);
    glVertex2f(-0.33, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.41);
    glVertex2f(-0.33, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.50);
    glVertex2f(-0.33, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.62);
    glVertex2f(-0.33, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.74);
    glVertex2f(-0.33, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.33, -0.88);
    glVertex2f(-0.33, -0.91);
    glEnd();
    //24---------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.97);
    glVertex2f(0.33, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.89);
    glVertex2f(0.33, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.80);
    glVertex2f(0.33, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.72);
    glVertex2f(0.33, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.64);
    glVertex2f(0.33, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.55);
    glVertex2f(0.33, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.47);
    glVertex2f(0.33, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.36);
    glVertex2f(0.33, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.27);
    glVertex2f(0.33, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.15);
    glVertex2f(0.33, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, 0.06);
    glVertex2f(0.33, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.01);
    glVertex2f(0.33, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.13);
    glVertex2f(0.33, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.23);
    glVertex2f(0.33, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.31);
    glVertex2f(0.33, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.41);
    glVertex2f(0.33, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.50);
    glVertex2f(0.33, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.62);
    glVertex2f(0.33, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.74);
    glVertex2f(0.33, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.33, -0.88);
    glVertex2f(0.33, -0.91);
    glEnd();
    //25--------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.26, 1.0);
    glVertex2f(-0.26, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.90);
    glVertex2f(-0.26, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.82);
    glVertex2f(-0.26, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.71);
    glVertex2f(-0.26, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.62);
    glVertex2f(-0.26, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.52);
    glVertex2f(-0.26, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.43);
    glVertex2f(-0.26, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.33);
    glVertex2f(-0.26, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.22);
    glVertex2f(-0.26, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.11);
    glVertex2f(-0.26, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, 0.01);
    glVertex2f(-0.26, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.1);
    glVertex2f(-0.26, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.2);
    glVertex2f(-0.26, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.30);
    glVertex2f(-0.26, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.41);
    glVertex2f(-0.26, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.50);
    glVertex2f(-0.26, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.61);
    glVertex2f(-0.26, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.72);
    glVertex2f(-0.26, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.81);
    glVertex2f(-0.26, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.91);
    glVertex2f(-0.26, -0.93);
    glEnd();
    //26-----------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.26, 1.0);
    glVertex2f(0.26, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.90);
    glVertex2f(0.26, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.82);
    glVertex2f(0.26, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.71);
    glVertex2f(0.26, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.62);
    glVertex2f(0.26, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.52);
    glVertex2f(0.26, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.43);
    glVertex2f(0.26, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.33);
    glVertex2f(0.26, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.22);
    glVertex2f(0.26, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.11);
    glVertex2f(0.26, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, 0.01);
    glVertex2f(0.26, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.26, -0.1);
    glVertex2f(-0.26, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.2);
    glVertex2f(0.26, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.30);
    glVertex2f(0.26, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.41);
    glVertex2f(0.26, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.50);
    glVertex2f(0.26, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.61);
    glVertex2f(0.26, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.72);
    glVertex2f(0.26, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.81);
    glVertex2f(0.26, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.26, -0.91);
    glVertex2f(0.26, -0.93);
    glEnd();
    //27----------------------------
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.97);
    glVertex2f(0.18, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.89);
    glVertex2f(0.18, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.80);
    glVertex2f(0.18, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.72);
    glVertex2f(0.18, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.64);
    glVertex2f(0.18, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.55);
    glVertex2f(0.18, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.47);
    glVertex2f(0.18, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.36);
    glVertex2f(0.18, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.27);
    glVertex2f(0.18, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.15);
    glVertex2f(0.18, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.06);
    glVertex2f(0.18, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.01);
    glVertex2f(0.18, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.13);
    glVertex2f(0.18, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.23);
    glVertex2f(0.18, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.31);
    glVertex2f(0.18, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.41);
    glVertex2f(0.18, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.50);
    glVertex2f(0.18, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.62);
    glVertex2f(0.18, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.74);
    glVertex2f(0.18, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, -0.88);
    glVertex2f(0.18, -0.91);
    glEnd();
    //28---------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.97);
    glVertex2f(-0.18, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.89);
    glVertex2f(-0.18, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.80);
    glVertex2f(-0.18, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.72);
    glVertex2f(-0.18, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.64);
    glVertex2f(-0.18, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.55);
    glVertex2f(-0.18, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.18, 0.47);
    glVertex2f(0.18, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.36);
    glVertex2f(-0.18, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.27);
    glVertex2f(-0.18, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.15);
    glVertex2f(-0.18, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, 0.06);
    glVertex2f(-0.18, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.01);
    glVertex2f(-0.18, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.13);
    glVertex2f(-0.18, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.23);
    glVertex2f(-0.18, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.31);
    glVertex2f(-0.18, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.41);
    glVertex2f(-0.18, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.50);
    glVertex2f(-0.18, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.62);
    glVertex2f(-0.18, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.74);
    glVertex2f(-0.18, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.18, -0.88);
    glVertex2f(-0.18, -0.91);
    glEnd();
    //30----------------------------------------
    glBegin(GL_LINES);
    glVertex2f(0.1, 1.0);
    glVertex2f(0.1, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.90);
    glVertex2f(0.1, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.82);
    glVertex2f(0.1, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.71);
    glVertex2f(0.1, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.62);
    glVertex2f(0.1, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.52);
    glVertex2f(0.1, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.43);
    glVertex2f(0.1, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.33);
    glVertex2f(0.1, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.22);
    glVertex2f(0.1, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.11);
    glVertex2f(0.1, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, 0.01);
    glVertex2f(0.1, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.1, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.2);
    glVertex2f(0.1, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.30);
    glVertex2f(0.1, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.41);
    glVertex2f(0.1, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.50);
    glVertex2f(0.1, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.61);
    glVertex2f(0.1, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.72);
    glVertex2f(0.1, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.81);
    glVertex2f(0.1, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.91);
    glVertex2f(0.1, -0.93);
    glEnd();
    //31---------------------------
    glBegin(GL_LINES);
    glVertex2f(-0.1, 1.0);
    glVertex2f(-0.1, 0.97);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.90);
    glVertex2f(-0.1, 0.89);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.82);
    glVertex2f(-0.1, 0.80);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.71);
    glVertex2f(-0.1, 0.69);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.62);
    glVertex2f(-0.1, 0.60);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.52);
    glVertex2f(-0.1, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.43);
    glVertex2f(-0.1, 0.41);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.33);
    glVertex2f(-0.1, 0.30);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.22);
    glVertex2f(-0.1, 0.19);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.11);
    glVertex2f(-0.1, 0.09);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, 0.01);
    glVertex2f(-0.1, -0.02);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.1, -0.1);
    glVertex2f(0.1, -0.13);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.2);
    glVertex2f(-0.1, -0.22);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.30);
    glVertex2f(-0.1, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.41);
    glVertex2f(-0.1, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.50);
    glVertex2f(-0.1, -0.52);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.61);
    glVertex2f(-0.1, -0.64);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.72);
    glVertex2f(-0.1, -0.75);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.81);
    glVertex2f(-0.1, -0.83);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.1, -0.91);
    glVertex2f(-0.1, -0.93);
    glEnd();
    //34---------------------------
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.97);
    glVertex2f(0.0, 0.94);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.89);
    glVertex2f(0.0, 0.86);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.80);
    glVertex2f(0.0, 0.78);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.72);
    glVertex2f(0.0, 0.70);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.64);
    glVertex2f(0.0, 0.62);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.55);
    glVertex2f(0.00, 0.53);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.47);
    glVertex2f(0.0, 0.45);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.36);
    glVertex2f(0.0, 0.32);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.27);
    glVertex2f(0.0, 0.24);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.15);
    glVertex2f(0.0, 0.11);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.06);
    glVertex2f(0.0, 0.03);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.01);
    glVertex2f(0.0, -0.04);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.13);
    glVertex2f(0.0, -0.15);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.23);
    glVertex2f(0.0, -0.26);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.31);
    glVertex2f(0.0, -0.33);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.41);
    glVertex2f(0.0, -0.43);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.50);
    glVertex2f(0.0, -0.54);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.62);
    glVertex2f(0.0, -0.65);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.74);
    glVertex2f(0.0, -0.77);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.0, -0.88);
    glVertex2f(0.0, -0.91);
    glEnd();
    glPopMatrix();



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

void Car2()
{

   int i;
   //1st car:

glPushMatrix();
glTranslatef(position,0.0f,0.0f);

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(65, 105, 225); // blue
	glVertex2f(-0.87f, -0.54f);
	glVertex2f(-0.86f, -0.59f);
	glVertex2f(-0.87f, -0.63);
	glVertex2f(-0.99f, -0.64);
	glVertex2f(-0.99f, -0.68);
	glVertex2f(-0.6f, -0.68);
	glVertex2f(-0.62f, -0.63);
	glVertex2f(-0.68f, -0.62);
	glVertex2f(-0.74f, -0.54);


	glEnd();
	glColor3ub(77, 77, 77);
	make_quads(-1.0,-0.65,-1.0,-0.68,-0.91,-0.68,-0.91,-0.67);

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(77, 77, 77); // Yellow
	make_quads(-0.7,-0.65,-0.7,-0.68,-0.59,-0.68,-0.59,-0.67);

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(72, 61, 139); // Yellow
	make_quads(-0.76f, -0.56,-0.71f, -0.62,-0.68f, -0.62,-0.74f,-0.54);


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(72, 61, 139); // Yellow
	make_quads(-0.87f, -0.56,-0.95f, -0.62,-0.82f, -0.62,-0.82,-0.56);



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(72, 61, 139); // Yellow
	glVertex2f(-0.81f, -0.56);
	glVertex2f(-0.81f, -0.62);
	glVertex2f(-0.72f, -0.62);
	glVertex2f(-0.77f, -0.56);

	glEnd();

	glLineWidth(2.0);
   glBegin(GL_LINES);
    glColor3ub(72, 61, 139);
    glVertex2f(-0.81f, -0.62);
    glVertex2f(-0.82f, -0.65);

    glEnd();

    glLineWidth(2.0);
   glBegin(GL_LINES);
    glColor3ub(72, 61, 139);
    glVertex2f(-0.82f, -0.65);
    glVertex2f(-0.81f, -0.68);

    glEnd();

    glLineWidth(2.0);
   glBegin(GL_LINES);
    glColor3ub(72, 61, 139);
    glVertex2f(-0.72f, -0.62);
    glVertex2f(-0.7f, -0.65);

    glEnd();

    glBegin(GL_QUADS);
      glColor3ub(255,0, 0);
      glVertex2f(-0.8f, -0.62);
      glVertex2f( -0.8f, -0.63);
      glVertex2f(-0.78f,  -0.63);
      glVertex2f( -0.78f,  -0.62);

   glEnd();

   glBegin(GL_QUADS);
      glColor3ub(255, 165, 0);
      glVertex2f(-0.64f, -0.63);
      glVertex2f( -0.64f, -0.64);
      glVertex2f(-0.62f,  -0.64);
      glVertex2f( -0.63f,  -0.63);

   glEnd();

    glBegin(GL_QUADS);
      glColor3ub(255, 165, 0);
      glVertex2f(-0.64f, -0.63);
      glVertex2f( -0.64f, -0.64);
      glVertex2f(-0.62f,  -0.64);
      glVertex2f( -0.63f,  -0.63);

   glEnd();


    glBegin(GL_QUADS);
      glColor3ub(255, 165, 0);
      glVertex2f(-0.99f, -0.64);
	  glVertex2f(-0.99f, -0.65);
      glVertex2f(-0.98f,  -0.65);
      glVertex2f( -0.97f,  -0.64);

   glEnd();

glPopMatrix();
   glPushMatrix();
   glTranslatef(position,0.0f, 0.0f);

    glColor3ub ( 66, 66, 66);
    makeCircle(-0.9f,-0.68, 0.04);

    glColor3ub ( 13, 13, 13);
    makeCircle(-0.9f,-0.68, 0.03);

    glColor3ub ( 66, 66, 66);
    makeCircle(-0.7f,-0.68, 0.04);

    glColor3ub (13, 13, 13);
    makeCircle(-0.7f, -0.68,0.03f);


glPopMatrix();
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


   glLineWidth(2);
glBegin(GL_LINES);
      glColor3ub(205, 97, 85);;

      glVertex2f(1.0,-0.45f);
      glVertex2f(-1.0f,-0.45f);

   glEnd();


}


void  DesignWall()
{

    glLineWidth(3);
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
   glLineWidth(2);
   glBegin(GL_LINES);
      glColor3ub(189, 189, 189);

      glVertex2f(-0.023,-0.14f);
      glVertex2f(-0.030,0.03f);

   glEnd();
glLineWidth(2);
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

 glLineWidth(2);
   glBegin(GL_LINES);
      glColor3ub(189, 189, 189);

      glVertex2f(-0.030,0.03f);
      glVertex2f(-0.035,0.19f);

   glEnd();
  glLineWidth(2);
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
   glLineWidth(2);
   glBegin(GL_LINES);
      glColor3ub(189, 189, 189);
     glVertex2f(-0.016,0.19f);
     glVertex2f(-0.100f,0.19f);

   glEnd();
glLineWidth(2);
   glBegin(GL_LINES);
      glColor3ub(189, 189, 189);
      glVertex2f(-0.100f,0.19f);
      glVertex2f(-0.0582,0.29);
   glEnd();
glLineWidth(2);
 glBegin(GL_LINES);
      glColor3ub(189, 189, 189);
      glVertex2f(-0.0582,0.29);
      glVertex2f(-0.0538,0.29);

   glEnd();
glLineWidth(2);
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

      glVertex2f(-0.219,0.39f);
      glVertex2f(-0.084,0.39f);

      glVertex2f(-0.084,0.39f);
      glVertex2f(-0.084,0.29f);


      glVertex2f(-0.020,0.29f); //2
      glVertex2f(-0.020,0.19f);


      glVertex2f(-0.020,0.19f);
      glVertex2f(0.12,0.19f);

      glVertex2f(0.12,0.19f);
      glVertex2f(0.12,0.29);








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


void Childrenpark()
{
   glColor3ub(0, 151, 167);
   make_quads(-.14,0.15,-0.15,0.15,-0.15,0.35,-.14,0.35);
   make_quads(-.08,0.15,-0.09,0.15,-0.09,0.35,-.08,0.35);

   make_quads(-.03,0.15,-0.04,0.15,-0.04,0.37,-.03,0.37);
   make_quads(.05,0.15,0.04,0.15,0.04,0.37,.05,0.37);

   glLineWidth(6.5);
   glBegin(GL_LINES);
   glColor3ub(255, 255, 102);
   glVertex2f(-0.14,0.32);
   glVertex2f(-0.09,0.32);

    glColor3ub(204, 0, 102);
    glVertex2f(-0.03,0.35);
   glVertex2f(0.04,0.35);


    glEnd();


   glColor3ub(0, 151, 167);

   //make_quads(.04,0.15,0.02,0.15,0.02,0.37,.04,0.37);
   make_quads(0.08,-0.08,0.065,-0.08,0.065,0.17,.08,0.17);
   make_quads(0.14,-0.08,0.125,-0.08,0.125,0.17,.14,0.17);
   glColor3ub(153, 255, 51);
   make_triangles(.050,0.17,.155,0.17,0.105,0.24);
    glColor3ub(253, 216, 53);
   make_triangles(.070,0.18,.138,0.18,0.105,0.22);
    glLineWidth(5);
   glBegin(GL_LINES);
   glColor3ub(204, 102, 204);
   glVertex2f(0.080,0.12);
   glVertex2f(0.125,0.12);

   glVertex2f(0.080,0.06);
   glVertex2f(0.125,0.06);

   glEnd();

   glLineWidth(4);
   glBegin(GL_LINES);
   glColor3ub(253, 216, 53);
   glVertex2f(0.091,0.12);
   glVertex2f(0.091,0.06);

   glVertex2f(0.12,0.12);
   glVertex2f(0.12,0.06);


   glVertex2f(0.105,0.12);
   glVertex2f(0.105,0.06);


   glEnd();

   glColor3ub(253, 216, 53);
   make_quads(0.140,0.06,0.140,0.12,0.205,-0.00,0.205,-0.06);
   make_quads(0.205,-0.058,0.205,-0.002,0.245,-0.002,0.245,-0.058);

   glLineWidth(8);
   glBegin(GL_LINES);
   glColor3ub(204, 102, 204);
   glVertex2f(0.020,-0.058);
   glVertex2f(0.065,0.06);

   glVertex2f(0.018,0.01);
   glVertex2f(0.061,0.12);

   glEnd();


}

void FCar1()
{

   glPushMatrix();


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


     glColor3ub(102, 102 ,102);
     make_quads(0.7, -0.85,0.59, -0.9,0.67,-0.9,0.71, -0.86);

	 glColor3ub(102, 102 ,102);
     make_quads(0.72, -0.86,0.69,-0.9,0.79, -0.9,0.79, -0.86);

     glColor3ub(102, 102 ,102);
     make_quads(0.8, -0.86,0.8, -0.9,0.9, -0.9,0.85, -0.86);

	 glColor3ub(176, 48, 96);
     make_quads(0.7f, -0.9f,0.7f, -0.91,0.73f,  -0.91f,0.73f,  -0.9f);


     glColor3ub(176, 48, 96);
     make_quads(0.8,-0.9,0.8,-0.91,0.83,-0.91,0.83,-0.9);


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub (102, 102 ,102);
    glVertex2f(0.69f, -0.9f);
    glVertex2f(0.67f, -0.93f);

    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.91f, -0.91f);


     glEnd();
     glLineWidth(2.0);
     glBegin(GL_LINES);
     glColor3ub (102, 102 ,102);
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
      //glTranslatef(-position,0.0f, 0.0f);
      glColor3ub (102, 102 ,102);
      makeCircle(0.65,-0.95,0.03);

      glColor3ub (102, 102 ,102);
      makeCircle(0.83f,-0.95,0.03);

      glColor3ub (33, 97, 140 );
      makeCircle(0.83f,-0.95,0.02);

      glColor3ub (33, 97, 140 );
      makeCircle(0.65f,-0.95,0.02);



    glPopMatrix();

    glFlush();


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


     glColor3ub(102, 102 ,102);
     make_quads(0.7, -0.85,0.59, -0.9,0.67,-0.9,0.71, -0.86);

	 glColor3ub(102, 102 ,102);
     make_quads(0.72, -0.86,0.69,-0.9,0.79, -0.9,0.79, -0.86);

     glColor3ub(102, 102 ,102);
     make_quads(0.8, -0.86,0.8, -0.9,0.9, -0.9,0.85, -0.86);

	 glColor3ub(176, 48, 96);
     make_quads(0.7f, -0.9f,0.7f, -0.91,0.73f,  -0.91f,0.73f,  -0.9f);


     glColor3ub(176, 48, 96);
     make_quads(0.8,-0.9,0.8,-0.91,0.83,-0.91,0.83,-0.9);


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub (102, 102 ,102);
    glVertex2f(0.69f, -0.9f);
    glVertex2f(0.67f, -0.93f);

    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.91f, -0.91f);


     glEnd();
     glLineWidth(2.0);
     glBegin(GL_LINES);
     glColor3ub (102, 102 ,102);
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
      glColor3ub (102, 102 ,102);
      makeCircle(0.65,-0.95,0.03);

      glColor3ub (102, 102 ,102);
      makeCircle(0.83f,-0.95,0.03);

      glColor3ub (33, 97, 140 );
      makeCircle(0.83f,-0.95,0.02);

      glColor3ub (33, 97, 140 );
      makeCircle(0.65f,-0.95,0.02);



    glPopMatrix();

    glFlush();


}

void BigCloud()
{
     glPushMatrix();
    glColor3ub (189, 189, 189);
    glTranslatef(positionCloud1,0.0f, 0.0f);
    makeCircle(-0.80,0.82,0.12);
    //2
    makeCircle(-0.75,0.82,0.11);
    //3
    makeCircle(-0.85f,0.82,0.11);
    glPopMatrix();


  //Second Cloud
    glPushMatrix();
    glColor3ub (189, 189, 189);
    glTranslatef(positionCloud2,0.0f, 0.0f);
    makeCircle(0.80,0.76f,0.12);
    makeCircle(0.75,0.76f,0.11);
    makeCircle(0.85,0.76f,0.11);
    glPopMatrix();

}

//Tree For the Journey

void JourneyTree()
{
    glPushMatrix();
    glColor3ub (175, 96, 26);
    glTranslatef(positionjrtree1,0.0f, 0.0f);
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
    glTranslatef(positionjrtree1,0.0f, 0.0f);
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
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.49,-0.30,0.45,-0.30,0.45,0.10,0.49,0.10);
    make_quads(0.45,0.01,0.40,0.08,0.40,0.10,0.45,0.05);
     make_quads(0.47,0.01,0.51,0.10,0.51,0.12,0.47,0.05);
    glColor3ub(25, 111, 61);
    makeCircle(0.37,0.14,0.09);
    makeCircle(0.46,0.237,0.14);
    makeCircle(0.52,0.16,0.09);
    glPopMatrix();





}


void WJourneyTree()
{
    glPushMatrix();
    glColor3ub (175, 96, 26);
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.63,-0.20,0.59,-0.20,0.59,0.20,0.63,0.20);
    make_quads(0.59,0.11,0.54,0.18,0.54,0.20,0.59,0.15);
     make_quads(0.61,0.11,0.65,0.20,0.65,0.22,0.61,0.15);
    glColor3ub(158, 157, 36);
    makeCircle(0.51,0.24,0.09);
    glColor3ub(130, 119, 23);
    makeCircle(0.60,0.337,0.14);
    makeCircle(0.70,0.26,0.08);
    glPopMatrix();




glPushMatrix();
    glColor3ub (175, 96, 26);
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.79,-0.30,0.75,-0.30,0.75,0.10,0.79,0.10);
    make_quads(0.75,0.01,0.70,0.08,0.70,0.10,0.75,0.05);
     make_quads(0.77,0.01,0.81,0.10,0.81,0.12,0.77,0.05);
    glColor3ub(158, 157, 36);
    makeCircle(0.67,0.14,0.09);
    makeCircle(0.76,0.237,0.14);
    makeCircle(0.86,0.16,0.08);
    glPopMatrix();




    glPushMatrix();
    glColor3ub (175, 96, 26);
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(0.49,-0.30,0.45,-0.30,0.45,0.10,0.49,0.10);
    make_quads(0.45,0.01,0.40,0.08,0.40,0.10,0.45,0.05);
     make_quads(0.47,0.01,0.51,0.10,0.51,0.12,0.47,0.05);
    glColor3ub(158, 157, 36);
    makeCircle(0.37,0.14,0.09);
    makeCircle(0.46,0.237,0.14);
    makeCircle(0.52,0.16,0.09);
    glPopMatrix();





}



void CircleTreeWinter()
{

    glPushMatrix();
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    //makeCircle(-0.16,0.32,0.15);
    glColor3ub (102, 0, 0);

    make_quads(-0.14,-0.20,-0.16,-0.20,-0.16,0.20,-0.14,0.20);
    make_triangles(-0.16,0.20,-0.15,0.14,-0.20,0.27);
    make_triangles(-0.16,0.20,-0.145,0.20,-0.155,0.34);
    make_triangles(-0.147,0.20,-0.14,0.17,-0.128,0.28);

    glPopMatrix();




    glPushMatrix();
     glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    //makeCircle(0.015,0.24,0.15);
    glColor3ub (102, 0, 0);

    make_quads(0.03,-0.30,0.01,-0.30,0.01,0.10,0.03,0.10);
    make_triangles(0.01,0.10,0.01,0.06,-0.020,0.17);
    make_triangles(0.025,0.10,0.012,0.10,0.018,0.27);
    make_triangles(0.03,0.10,0.025,0.10,0.040,0.19);

    glPopMatrix();






    glPushMatrix();
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    //makeCircle(-0.30,0.24,0.15);
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
void CircleTree()
{


    glPushMatrix();
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    makeCircle(-0.16,0.32,0.15);
    glColor3ub (102, 0, 0);

    make_quads(-0.14,-0.20,-0.16,-0.20,-0.16,0.20,-0.14,0.20);
    make_triangles(-0.16,0.20,-0.15,0.14,-0.20,0.27);
    make_triangles(-0.16,0.20,-0.145,0.20,-0.155,0.34);
    make_triangles(-0.147,0.20,-0.14,0.17,-0.128,0.28);

    glPopMatrix();




    glPushMatrix();
     glTranslatef(positionjrtree1,0.0f, 0.0f);
    glColor3ub (154,205,50);
    makeCircle(0.015,0.24,0.15);
    glColor3ub (102, 0, 0);

    make_quads(0.03,-0.30,0.01,-0.30,0.01,0.10,0.03,0.10);
    make_triangles(0.01,0.10,0.01,0.06,-0.020,0.17);
    make_triangles(0.025,0.10,0.012,0.10,0.018,0.27);
    make_triangles(0.03,0.10,0.025,0.10,0.040,0.19);

    glPopMatrix();






    glPushMatrix();
   glTranslatef(positionjrtree1,0.0f, 0.0f);
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

void rainCloud()
{
    glColor3ub(96, 125, 139);
    makeCircle(-0.9, 0.89, 0.1);
    makeCircle(-0.8, 0.9, 0.15);
    makeCircle(-0.7, 0.89, 0.1);
    makeCircle(-0.5, 0.86, 0.15);
    makeCircle(-0.3, 0.88, 0.13);
    makeCircle(-0.7, 0.88, 0.1);
    makeCircle(-0.4, 0.86, 0.14);
    makeCircle(-0.3, 0.88, 0.09);
    makeCircle(-0.2, 0.88, 0.12);
    makeCircle(-0.1, 0.89, 0.08);
    makeCircle(0.9, 0.89, 0.1);
    makeCircle(0.85, 0.9, 0.15);
    makeCircle(0.7, 0.89, 0.1);
    makeCircle(0.5, 0.85, 0.15);
    makeCircle(0.3, 0.88, 0.13);
    makeCircle(0.7, 0.88, 0.1);
    makeCircle(0.4, 0.86, 0.14);
    makeCircle(0.3, 0.88, 0.09);
    makeCircle(0.2, 0.88, 0.12);
    makeCircle(0.1, 0.89, 0.15);
}



void thada()
{
    glPushMatrix();
    //glTranslatef(0, thada_position, 0);
    glColor3ub(255, 249, 196);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.9, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.9, 0.7);
    glVertex2f(-0.8, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.8, 0.7);
    glVertex2f(-0.9, 0.6);
    glEnd();



   glBegin(GL_LINES);
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.3, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.3, 0.7);
    glVertex2f(-0.2, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.2, 0.7);
    glVertex2f(-0.3, 0.6);
    glEnd();



   glBegin(GL_LINES);
    glVertex2f(0.8, 0.8);
    glVertex2f(0.9, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.9, 0.7);
    glVertex2f(0.8, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.8, 0.7);
    glVertex2f(0.9, 0.6);
    glEnd();



   glBegin(GL_LINES);
    glVertex2f(0.2, 0.8);
    glVertex2f(0.3, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.2, 0.7);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.2, 0.7);
    glVertex2f(0.3, 0.6);
    glEnd();
}


void LeftmostTree()
{

    glPushMatrix();
    glColor3ub (139,69,19);
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(-0.78,-0.40,-0.73,-0.40,-0.73,0.17,-0.78,0.17);
    glColor3ub (0,100,0);
    makeCircle(-0.76,0.32,0.11);
    makeCircle(-0.64,0.22,0.11);
    makeCircle(-0.88,0.22,0.11);
    makeCircle(-0.67,0.17,0.11);
    makeCircle(-0.87,0.10,0.11);
    glPopMatrix();

}

  void Sonid()
{

          glLineWidth(.7);
    // Draw a Red 1x1 Square centered at origin


   glBegin(GL_POLYGON);
    glColor3f(0.5, 0.2, 0.5);
    glVertex2f(-0.5f, -0.36);
    glVertex2f(-0.9f, -0.36);
    glVertex2f(-0.9f, -0.16f);
    glVertex2f(-0.55f, -0.16);
    glVertex2f(-0.5f, -0.243f);
    glEnd();
    //Light
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0, 0.0);
    glVertex2f(-0.5f, -0.26);
    glVertex2f(-0.52f, -0.26);
    glVertex2f(-0.52f, -0.29);
    glVertex2f(-0.5f, -0.29);
    glEnd();
    //Top
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.0, 0.5);
    glVertex2f(-0.55f, -0.16);
    glVertex2f(-0.9f, -0.16);
    glVertex2f(-0.9f, -0.03f);
    glVertex2f(-0.6f, -0.03);
    glEnd();

    //Glass
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-0.58f, -0.13, 0.0f);
    glVertex3f(-0.64, -0.13, 0.0f);
    glVertex3f(-0.64, -0.04, 0.0f);
    glVertex3f(-0.61, -0.04, 0.0f);
    glEnd();
     //Display Glass
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-0.65f, -0.16, 0.0f);
    glVertex3f(-0.88f, -0.16, 0.0f);
    glVertex3f(-0.88f, -0.06, 0.0f);
    glVertex3f(-0.65f, -0.06, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0, 0.0);
    glVertex2f(-0.75f, -0.08);
    glVertex2f(-0.79f, -0.08);
    glVertex2f(-0.78f, -0.16);
    glVertex2f(-0.76f, -0.16);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0, 0.0);
    glVertex2f(-0.80f, -0.08);
    glVertex2f(-0.84f, -0.08);
    glVertex2f(-0.83f, -0.16);
    glVertex2f(-0.81f, -0.16);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0, 1.0);
    glVertex2f(-0.70f, -0.08);
    glVertex2f(-0.74f, -0.08);
    glVertex2f(-0.73f, -0.16);
    glVertex2f(-0.71f, -0.16);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0, 0.0);
    glVertex2f(-0.63f, 0.016f);
    glVertex2f(-0.64f, 0.016f);
    glVertex2f(-0.64f,- 0.03);
    glVertex2f(-0.63f, -0.03);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.65f, -0.01f);
    glVertex2f(-0.60f, -0.05f);
    glVertex2f(-0.60f, 0.03f);
    glEnd();

   int i;

   glColor3ub (0.26,0.26,0.26);
   makeCircle(-0.83f,-0.37,-0.03);
   glColor3ub (0.26,0.26,0.26);
   makeCircle(-0.6f,-0.37,-0.03);

   glColor3ub (240, 243, 244);
   makeCircle(-0.83f,-0.37,-0.015);
   glColor3ub (240, 243, 244);
   makeCircle(-0.6f,-0.37,-0.015);

   /*GLfloat p1=-0.83f; GLfloat q1= -0.35f; GLfloat r1 = -0.05f;
    int tringle2=30;

   GLfloat tp2 =2.0f * PI  ;

   glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0.26,0.26,0.26);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();*/


   /*GLfloat p2=-0.6f; GLfloat q2= -0.35f; GLfloat r2 = -0.05f;
    int tringle=30;

   GLfloat tp =2.0f * PI  ;

   glBegin (GL_TRIANGLE_FAN);
    glColor3ub (0.26,0.26,0.26);
    glVertex2f (p2,q2);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f
        (
         p2+(r2*cos(i*tp/tringle)),
         q2+(r2*sin(i*tp/tringle))
        );

    }
    glEnd ();*/

}

void WLeftmostTree()
{

    glPushMatrix();
    glColor3ub (139,69,19);
    glTranslatef(positionjrtree1,0.0f, 0.0f);
    make_quads(-0.78,-0.40,-0.73,-0.40,-0.73,0.17,-0.78,0.17);
    glColor3ub (130, 119, 23);
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
     glColor3ub (0,128,0);
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


     //8
     glColor3ub (34,139,34);
     make_triangles(-0.98,-0.40,-0.95,-0.40,-1.0,-0.24);
     make_triangles(-0.95,-0.40,-0.92,-0.40,-0.94,-0.20);
     make_triangles(-0.94,-0.40,-0.91,-0.40,-0.88,-0.20);
     make_triangles(-0.92,-0.40,-0.89,-0.40,-0.85,-0.20);
     glColor3ub (0,128,0);
     make_triangles(-0.95,-0.40,-0.92,-0.40,-0.97,-0.24);
     make_triangles(-0.91,-0.40,-0.88,-0.40,-0.81,-0.20);
     make_triangles(-0.89,-0.40,-0.86,-0.40,-0.75,-0.20);




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


void rainy_grass()
{

  //1
     glColor3ub (0,128,0);
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

void WTanim()
{


    ///Tree part Tanim


     glColor3ub(153, 51, 0);
      make_quads(-0.64,0.02,-0.61,0.02,-0.61,0.35,-0.64,0.35);

/// Tringle part tree
      glColor3ub(141, 108, 3);
      make_triangles(-0.640,0.027,-0.63,0.02,-0.68,0.0);
      make_triangles(-0.61,0.027,-0.62,0.02,-0.56,0.0);
      make_triangles(-0.63,0.027,-0.615,0.02,-0.60,-0.03);




/// Circle part tree


    glColor3ub (175, 180, 43);
    makeCircle(-0.63,0.4,0.065);
    makeCircle(-0.68,0.34,0.050f);
    makeCircle(-0.58f,0.34,0.050f);




 ///2nd tree
      glBegin(GL_QUADS);
      glColor3ub(153, 51, 0);
      make_quads(0.84,0.00,0.81,0.0,0.81,0.37,0.84,0.37);

/// 2nd tree circle part 1


    glColor3ub (175, 180, 43);
    makeCircle(0.77,0.41,0.07);
    makeCircle(0.82,0.49,0.07);
    makeCircle(0.86,0.41,0.07);

    ///3rd tree
      glBegin(GL_QUADS);
      glColor3ub(160, 64, 0);
      make_quads(-0.45, 0.20,-0.431,0.20,-0.431, 0.32,-0.45,0.32);
      //make_triangles(-0.435,0.245,-0.415,0.245,-0.425,0.28);
      glColor3ub(30, 132, 73 );
      make_triangles(-0.48, 0.27,-0.40,0.27,-0.440,0.33);
      make_triangles(-0.47,0.30,-0.41,0.30,-0.440,0.35);
      make_triangles(-0.465,0.325,-0.415,0.325,-0.440,0.38);

}

void Tanim()
{


    ///Tree part Tanim


     glColor3ub(141, 108, 3);
      make_quads(-0.64,0.02,-0.61,0.02,-0.61,0.35,-0.64,0.35);

/// Tringle part tree
      glColor3ub(141, 108, 3);
      make_triangles(-0.640,0.027,-0.63,0.02,-0.68,0.0);
      make_triangles(-0.61,0.027,-0.62,0.02,-0.56,0.0);
      make_triangles(-0.63,0.027,-0.615,0.02,-0.60,-0.03);




/// Circle part tree


    glColor3ub (25, 111, 61);
    makeCircle(-0.63,0.4,0.065);
    makeCircle(-0.68,0.34,0.050f);
    makeCircle(-0.58f,0.34,0.050f);




 ///2nd tree
      glBegin(GL_QUADS);
      glColor3ub(141, 108, 3);
      make_quads(0.84,0.00,0.81,0.0,0.81,0.37,0.84,0.37);

/// 2nd tree circle part 1


    glColor3ub ( 34, 129, 29);
    makeCircle(0.77,0.41,0.07);
    makeCircle(0.82,0.49,0.07);
    makeCircle(0.86,0.41,0.07);




    ///3rd tree
      glBegin(GL_QUADS);
      glColor3ub(160, 64, 0);
      make_quads(-0.45, 0.20,-0.431,0.20,-0.431, 0.32,-0.45,0.32);
      //make_triangles(-0.435,0.245,-0.415,0.245,-0.425,0.28);
      glColor3ub(30, 132, 73 );
      make_triangles(-0.48, 0.27,-0.40,0.27,-0.440,0.33);
      make_triangles(-0.47,0.30,-0.41,0.30,-0.440,0.35);
      make_triangles(-0.465,0.325,-0.415,0.325,-0.440,0.38);

}

void Townbuilding3()
{

    /// 1st building
    glColor3ub(36, 202, 184);
    make_quads(.2,-.1,.32,-.1,.32,.55,.2,.55);
    /// 1st building windows
     glPointSize(8);
     glBegin(GL_POINTS);
     glColor3ub (240, 243,244);
     glVertex2f(0.22,0.5);
     glVertex2f(0.24,0.5);
     glVertex2f(0.26,0.5);
     glVertex2f(0.28,0.5);
     glVertex2f(0.3,0.5);

     glVertex2f(0.22,0.4);
     glVertex2f(0.24,0.4);
     glVertex2f(0.26,0.4);
     glVertex2f(0.28,0.4);
     glVertex2f(0.3,0.4);

     glVertex2f(0.22,0.3);
     glVertex2f(0.24,0.3);
     glVertex2f(0.26,0.3);
     glVertex2f(0.28,0.3);
     glVertex2f(0.3,0.3);

     glVertex2f(0.22,0.2);
     glVertex2f(0.24,0.2);
     glVertex2f(0.26,0.2);
     glVertex2f(0.28,0.2);
     glVertex2f(0.3,0.2);

     glVertex2f(0.22,0.1);
     glVertex2f(0.24,0.1);
     glVertex2f(0.26,0.1);
     glVertex2f(0.28,0.1);
     glVertex2f(0.3,0.1);

     glVertex2f(0.22,0);
     glVertex2f(0.24,0);
     glVertex2f(0.26,0);
     glVertex2f(0.28,0);
     glVertex2f(0.3,0);


     glEnd();

     glPointSize(25);
     glBegin(GL_POINTS);
     glColor3ub (61, 57, 56);
      glVertex2f(0.26,-0.065);
       glEnd();

    /// 2nd building of my part
    glColor3ub(60, 161, 231);
    make_quads(.1,-.1,.2,-.1,.2,.35,.1,.35);

    /// 2nd building windows

     glColor3ub (69, 90, 100);
     make_quads(0.11,0.26,0.19,0.26,0.19,0.3,0.11,0.3);
     make_quads(0.11,0.18,0.19,0.18,0.19,0.22,0.11,0.22);
     make_quads(0.11,0.10,0.19,0.10,0.19,0.14,0.11,0.14);
     make_quads(0.11,0.02,0.19,0.02,0.19,0.06,0.11,0.06);
     glLineWidth(1.5);
     glBegin(GL_LINES);
     glColor3ub (69, 90, 100);
     glVertex2f(0.105,0.259);
     glVertex2f(0.195,0.259);

     glVertex2f(0.105,0.179);
     glVertex2f(0.195,0.179);


     glVertex2f(0.105,0.099);
     glVertex2f(0.195,0.099);

     glVertex2f(0.105,0.019);
     glVertex2f(0.195,0.019);

     glEnd();

     glColor3ub (117, 117, 117);
     make_quads(0.18,-.1,.12,-.1,0.12,-0.02,0.18,-0.02);
     glLineWidth(2.5);
     glBegin(GL_LINES);
     glColor3ub (224, 224, 224);
     glVertex2f(0.15,-0.1);
     glVertex2f(0.15,-0.02);
     glEnd();


    /// 3rd inner building of my part
    glColor3ub(0, 131, 143);
    make_quads(-.05,-.1,.1,-.1,.1,.66,-.05,.66);

    /// Windows 3rd building
     glPointSize(8);
     glBegin(GL_POINTS);
     glColor3ub (238, 238, 238);
     glVertex2f(-0.03,0.6);
     glVertex2f(-0.01,0.6);
     glVertex2f(0.01,0.6);
     glVertex2f(0.03,0.6);
     glVertex2f(0.05,0.6);
     glVertex2f(0.07,0.6);
     glVertex2f(0.09,0.6);

     glVertex2f(-0.03,0.5);
     glVertex2f(-0.01,0.5);
     glVertex2f(0.01,0.5);
     glVertex2f(0.03,0.5);
     glVertex2f(0.05,0.5);
     glVertex2f(0.07,0.5);
     glVertex2f(0.09,0.5);

     glVertex2f(-0.03,0.4);
     glVertex2f(-0.01,0.4);
     glVertex2f(0.01,0.4);
     glVertex2f(0.03,0.4);
     glVertex2f(0.05,0.4);
     glVertex2f(0.07,0.4);
     glVertex2f(0.09,0.4);

     glVertex2f(-0.03,0.3);
     glVertex2f(-0.01,0.3);
     glVertex2f(0.01,0.3);
     glVertex2f(0.03,0.3);
     glVertex2f(0.05,0.3);
     glVertex2f(0.07,0.3);
     glVertex2f(0.09,0.3);

     glVertex2f(-0.03,0.2);
     glVertex2f(-0.01,0.2);
     glVertex2f(0.01,0.2);
     glVertex2f(0.03,0.2);
     glVertex2f(0.05,0.2);
     glVertex2f(0.07,0.2);
     glVertex2f(0.09,0.2);

     glVertex2f(-0.03,0.1);
     glVertex2f(-0.01,0.1);
     glVertex2f(0.01,0.1);
     glVertex2f(0.03,0.1);
     glVertex2f(0.05,0.1);
     glVertex2f(0.07,0.1);
     glVertex2f(0.09,0.1);

     glVertex2f(-0.03,0.0);
     glVertex2f(-0.01,0.0);
     glVertex2f(0.01,0.0);
     glVertex2f(0.03,0.0);
     glVertex2f(0.05,0.0);
     glVertex2f(0.07,0.0);
     glVertex2f(0.09,0.0);


     glEnd();

     glPointSize(25);
     glBegin(GL_POINTS);
     glColor3ub (0, 105, 92);
      glVertex2f(0.035,-0.065);
       glEnd();

    /// upper tringle part
    glColor3ub (242, 83, 40);
    make_triangles(-0.05,0.66,0.1,0.66,0.025,0.72);
     glLineWidth(1);
     glBegin(GL_LINES);
     glColor3ub (0, 0, 0);
     glVertex2f(0.025,0.72);
     glVertex2f(0.025,0.80);
     glEnd();

    /// 4th buildng
    glColor3ub(26, 82, 118);
    make_quads(-.1,-.1,0.03,-.1,0.03,.4,-.1,.4);
    glColor3ub(236, 240, 241);
    make_quads(-.09,-.08,0.02,-.08,0.02,.38,-.09,.38);
    ///4th building windows part

    glLineWidth(1);
     glBegin(GL_LINES);
     glColor3ub(26, 82, 118);
     glVertex2f(-.088,-.08);
     glVertex2f(-.088,.38);

     glVertex2f(-.083,-.08);
     glVertex2f(-.083,.38);

     glVertex2f(-.078,-.08);
     glVertex2f(-.078,.38);

     glVertex2f(-.073,-.08);
     glVertex2f(-.073,.38);

     glVertex2f(-.068,-.08);
     glVertex2f(-.068,.38);

     glVertex2f(-.063,-.08);
     glVertex2f(-.063,.38);

     glVertex2f(-.058,-.08);
     glVertex2f(-.058,.38);

     glVertex2f(-.053,-.08);
     glVertex2f(-.053,.38);

     glVertex2f(-.048,-.08);
     glVertex2f(-.048,.38);

     glVertex2f(-.043,-.08);
     glVertex2f(-.043,.38);

     glVertex2f(-.038,-.08);
     glVertex2f(-.038,.38);

     glVertex2f(-.033,-.08);
     glVertex2f(-.033,.38);

     glVertex2f(-.028,-.08);
     glVertex2f(-.028,.38);

     glVertex2f(-.023,-.08);
     glVertex2f(-.023,.38);

     glVertex2f(-.018,-.08);
     glVertex2f(-.018,.38);

     glVertex2f(-.013,-.08);
     glVertex2f(-.013,.38);

     glVertex2f(-.008,-.08);
     glVertex2f(-.008,.38);

     glVertex2f(.0042,-.08);
     glVertex2f(.0042,.38);

     glVertex2f(.0047,-.08);
     glVertex2f(.0047,.38);


     glVertex2f(.0052,-.08);
     glVertex2f(.0052,.38);


     glVertex2f(.0057,-.08);
     glVertex2f(.0057,.38);


     glEnd();




    /// 5th building
    glColor3ub(75, 103, 129);
    make_quads(-.15,-.1,-.1,-.1,-.1,.35,-.15,.35);

    /// 6th building
    glColor3ub(66, 231, 211 );
    make_quads(-.3,-.1,-.15,-.1,-.15,.6,-.3,.6);
    make_triangles(-.3,.6,-.15,.6,-0.225,0.7);

    ///windows 6th building

     glPointSize(7);
     glBegin(GL_POINTS);
     glColor3ub (240, 243,244);
     glVertex2f(-0.288,0.58);
     glVertex2f(-0.268,0.58);
     glVertex2f(-0.248,0.58);
     glVertex2f(-0.228,0.58);
     glVertex2f(-0.208,0.58);
     glVertex2f(-0.188,0.58);
     glVertex2f(-0.168,0.58);


     glVertex2f(-0.288,0.53);
     glVertex2f(-0.268,0.53);
     glVertex2f(-0.248,0.53);
     glVertex2f(-0.228,0.53);
     glVertex2f(-0.208,0.53);
     glVertex2f(-0.188,0.53);
     glVertex2f(-0.168,0.53);

     glVertex2f(-0.288,0.48);
     glVertex2f(-0.268,0.48);
     glVertex2f(-0.248,0.48);
     glVertex2f(-0.228,0.48);
     glVertex2f(-0.208,0.48);
     glVertex2f(-0.188,0.48);
     glVertex2f(-0.168,0.48);

     glVertex2f(-0.288,0.43);
     glVertex2f(-0.268,0.43);
     glVertex2f(-0.248,0.43);
     glVertex2f(-0.228,0.43);
     glVertex2f(-0.208,0.43);
     glVertex2f(-0.188,0.43);
     glVertex2f(-0.168,0.43);


     glVertex2f(-0.288,0.38);
     glVertex2f(-0.268,0.38);
     glVertex2f(-0.248,0.38);
     glVertex2f(-0.228,0.38);
     glVertex2f(-0.208,0.38);
     glVertex2f(-0.188,0.38);
     glVertex2f(-0.168,0.38);



     glVertex2f(-0.288,0.33);
     glVertex2f(-0.268,0.33);
     glVertex2f(-0.248,0.33);
     glVertex2f(-0.228,0.33);
     glVertex2f(-0.208,0.33);
     glVertex2f(-0.188,0.33);
     glVertex2f(-0.168,0.33);


     glVertex2f(-0.288,0.28);
     glVertex2f(-0.268,0.28);
     glVertex2f(-0.248,0.28);
     glVertex2f(-0.228,0.28);
     glVertex2f(-0.208,0.28);
     glVertex2f(-0.188,0.28);
     glVertex2f(-0.168,0.28);


     glVertex2f(-0.288,0.23);
     glVertex2f(-0.268,0.23);
     glVertex2f(-0.248,0.23);
     glVertex2f(-0.228,0.23);
     glVertex2f(-0.208,0.23);
     glVertex2f(-0.188,0.23);
     glVertex2f(-0.168,0.23);

     glVertex2f(-0.288,0.18);
     glVertex2f(-0.268,0.18);
     glVertex2f(-0.248,0.18);
     glVertex2f(-0.228,0.18);
     glVertex2f(-0.208,0.18);
     glVertex2f(-0.188,0.18);
     glVertex2f(-0.168,0.18);

     glVertex2f(-0.288,0.13);
     glVertex2f(-0.268,0.13);
     glVertex2f(-0.248,0.13);
     glVertex2f(-0.228,0.13);
     glVertex2f(-0.208,0.13);
     glVertex2f(-0.188,0.13);
     glVertex2f(-0.168,0.13);

     glVertex2f(-0.288,0.08);
     glVertex2f(-0.268,0.08);
     glVertex2f(-0.248,0.08);
     glVertex2f(-0.228,0.08);
     glVertex2f(-0.208,0.08);
     glVertex2f(-0.188,0.08);
     glVertex2f(-0.168,0.08);

     glVertex2f(-0.288,0.08);
     glVertex2f(-0.268,0.08);
     glVertex2f(-0.248,0.08);
     glVertex2f(-0.228,0.08);
     glVertex2f(-0.208,0.08);
     glVertex2f(-0.188,0.08);
     glVertex2f(-0.168,0.08);


     glVertex2f(-0.288,0.03);
     glVertex2f(-0.268,0.03);
     glVertex2f(-0.248,0.03);
     glVertex2f(-0.228,0.03);
     glVertex2f(-0.208,0.03);
     glVertex2f(-0.188,0.03);
     glVertex2f(-0.168,0.03);


     glVertex2f(-0.288,-0.02);
     glVertex2f(-0.268,-0.02);
     glVertex2f(-0.248,-0.02);
     glVertex2f(-0.228,-0.02);
     glVertex2f(-0.208,-0.02);
     glVertex2f(-0.188,-0.02);
     glVertex2f(-0.168,-0.02);


     glVertex2f(-0.288,-0.07);
     glVertex2f(-0.268,-0.07);
     glVertex2f(-0.248,-0.07);
     glVertex2f(-0.228,-0.07);
     glVertex2f(-0.208,-0.07);
     glVertex2f(-0.188,-0.07);
     glVertex2f(-0.168,-0.07);

     glEnd();



}


void Townbuilding4()
{
    /// One
    glColor3ub(93, 173, 226);
    //make_quads(.2,-.1,.32,-.1,.32,.55,.2,.55);
    make_quads(-.5,-.1,-.3,-.1,-.3,.15,-.5,.15);
    glColor3ub(41, 128, 185);
    make_quads(-.49,.15,-.31,.15,-.31,.30,-.49,.30);
    glColor3ub(93, 173, 226);
    make_quads(-.48,.30,-.32,.30,-.32,.65,-.48,.65);
    glColor3ub(166, 172, 175);
    make_quads(-.46,.65,-.34,.65,-.34,.75,-.46,.75);
    glColor3ub(211, 84, 0);
    make_quads(-.44,.75,-.36,.75,-.36,.80,-.44,.80);
    glColor3ub(21, 67, 96);
    make_quads(-.42,.80,-.38,.80,-.38,.83,-.42,.83);
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2f(-0.40,0.83);
    glVertex2f(-0.40,0.90);
    glEnd();

    glLineWidth(27);
    glBegin(GL_LINES);
    glColor3ub (251, 252, 252);
    glVertex2f(-0.40,-0.00);
    glVertex2f(-0.40,0.73);
    glEnd();

     glLineWidth(15);
     glBegin(GL_LINES);
     glColor3ub (27, 79, 114);
     glVertex2f(-0.40,-0.00);
     glVertex2f(-0.40,0.73);
     glEnd();


     glLineWidth(8);
     glBegin(GL_LINES);
     glColor3ub (41, 128, 185);
     glVertex2f(-0.40,-0.00);
     glVertex2f(-0.40,0.73);
     glEnd();

     glLineWidth(4);
     glBegin(GL_LINES);
     glColor3ub (46, 64, 83);
     glVertex2f(-0.40,-0.00);
     glVertex2f(-0.40,0.73);
     glEnd();

     glColor3ub (95, 106, 106);
     make_quads(-.45,-.1,-.35,-.1,-.35,-.01,-.45,-.01);


     ///Two

     glColor3ub (127, 179, 213);
     make_quads(-.70,-.1,-.5,-.1,-.5,.05,-.70,.05);
     glColor3ub (31, 97, 141);
     make_quads(-.68,.05,-.52,.05,-.52,.25,-.68,.25);
     make_quads(-.66,.25,-.54,.25,-.54,.50,-.66,.50);
     glColor3ub (21, 101, 192);
     make_quads(-.675,.055,-.525,.055,-.525,.245,-.675,.245);
     glLineWidth(3);
     glBegin(GL_LINES);
     glColor3ub (253, 254, 254);
     glVertex2f(-.670,.055);
     glVertex2f(-.670,.245);


     glVertex2f(-.650,.055);
     glVertex2f(-.650,.245);


     glVertex2f(-.630,.055);
     glVertex2f(-.630,.245);

     glVertex2f(-.610,.055);
     glVertex2f(-.610,.245);

     glVertex2f(-.590,.055);
     glVertex2f(-.590,.245);

     glVertex2f(-.570,.055);
     glVertex2f(-.570,.245);

     glVertex2f(-.550,.055);
     glVertex2f(-.550,.245);

     glVertex2f(-.530,.055);
     glVertex2f(-.530,.245);
     glEnd();

     glPointSize(15);
     glBegin(GL_POINTS);
     glColor3ub (81, 90, 90);
     glVertex2f(-.63,.46);
     glVertex2f(-.60,.46);
     glVertex2f(-.57,.46);

     glVertex2f(-.63,.40);
     glVertex2f(-.60,.40);
     glVertex2f(-.57,.40);


     glVertex2f(-.63,.34);
     glVertex2f(-.60,.34);
     glVertex2f(-.57,.34);

     glEnd();



     ///Three
     glColor3ub (21, 67, 96);
     make_quads(-.92,-.1,-.70,-.1,-.70,-.07,-.92,-.07);
     glColor3ub (93, 173, 226);
     make_quads(-.91,-.07,-.71,-.07,-.71,.70,-.91,.70);
     glColor3ub (240, 243, 244);
     make_quads(-.90,-.06,-.72,-.06,-.72,.69,-.90,.69);
     glLineWidth(3);
     glBegin(GL_LINES);
     glColor3ub (169, 204, 227);
     glVertex2f(-.89,-.06);
     glVertex2f(-.89,.69);

     glVertex2f(-.88,-.06);
     glVertex2f(-.88,.69);

     glVertex2f(-.87,-.06);
     glVertex2f(-.87,.69);

     glVertex2f(-.86,-.06);
     glVertex2f(-.86,.69);

     glVertex2f(-.85,-.06);
     glVertex2f(-.85,.69);

     glVertex2f(-.84,-.06);
     glVertex2f(-.84,.69);

     glVertex2f(-.83,-.06);
     glVertex2f(-.83,.69);


     glVertex2f(-.82,-.06);
     glVertex2f(-.82,.69);

     glVertex2f(-.81,-.06);
     glVertex2f(-.81,.69);

     glVertex2f(-.80,-.06);
     glVertex2f(-.80,.69);


     glVertex2f(-.79,-.06);
     glVertex2f(-.79,.69);

     glVertex2f(-.78,-.06);
     glVertex2f(-.78,.69);

     glVertex2f(-.77,-.06);
     glVertex2f(-.77,.69);

     glVertex2f(-.76,-.06);
     glVertex2f(-.76,.69);


     glVertex2f(-.75,-.06);
     glVertex2f(-.75,.69);

     glVertex2f(-.74,-.06);
     glVertex2f(-.74,.69);

     glVertex2f(-.73,-.06);
     glVertex2f(-.73,.69);

     glEnd();

     glColor3ub (211, 84, 0);
     make_quads(-.86,.70,-.76,.70,-.76,.80,-.86,.80);

     glLineWidth(1.5);
     glBegin(GL_LINES);
     glColor3ub (86, 101, 115);
     glVertex2f(-.81,0.80);
     glVertex2f(-.81,.95);
     glEnd();


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
void snowman()
{

      /// snowman upper body
        glColor3ub (255, 255, 255);
        makeCircle(0.87,-0.235,0.04);
        ///snoman eyes and nose
        glPointSize(3.5);
     glBegin(GL_POINTS);
     glColor3ub (32, 28, 27);
     glVertex2f(0.855,-0.225);
     glEnd();
     glPointSize(3.5);
     glBegin(GL_POINTS);
     glColor3ub (32, 28, 27);
     glVertex2f(0.88,-0.225);
     glEnd();
     glPointSize(3.5);
     glBegin(GL_POINTS);
     glColor3ub (255, 31, 0);
     glVertex2f(0.868,-0.235);
     glEnd();
     /// snowman keft hand
     glLineWidth(2.5);
     glBegin(GL_LINES);
     glColor3ub (32, 28, 27);
     glVertex2f(0.82,-0.3);
     glVertex2f(0.78,-0.34);
     glEnd();
     ///snowmen right hand
      glLineWidth(2.5);
     glBegin(GL_LINES);
     glColor3ub (32, 28, 27);
     glVertex2f(0.91,-0.3);
     glVertex2f(0.963,-0.34);
     glEnd();

       /// snowman lower body
        glColor3ub (255, 255, 255);
        makeCircle(0.87,-0.34,0.07);


        ///1st snow men


         /// snowman upper body
        glColor3ub (255, 255, 255);
        makeCircle(0.67,-0.235,0.04);
        ///snoman eyes and nose
        glPointSize(3.5);
     glBegin(GL_POINTS);
     glColor3ub (32, 28, 27);
     glVertex2f(0.655,-0.225);
     glEnd();
     glPointSize(3.5);
     glBegin(GL_POINTS);
     glColor3ub (32, 28, 27);
     glVertex2f(0.68,-0.225);
     glEnd();
     glPointSize(3.5);
     glBegin(GL_POINTS);
     glColor3ub (255, 31, 0);
     glVertex2f(0.668,-0.235);
     glEnd();
     /// snowman keft hand
     glLineWidth(2.5);
     glBegin(GL_LINES);
     glColor3ub (32, 28, 27);
     glVertex2f(0.62,-0.3);
     glVertex2f(0.58,-0.34);
     glEnd();
     ///snowmen right hand
      glLineWidth(2.5);
     glBegin(GL_LINES);
     glColor3ub (32, 28, 27);
     glVertex2f(0.71,-0.3);
     glVertex2f(0.763,-0.34);
     glEnd();

       /// snowman lower body
        glColor3ub (255, 255, 255);
        makeCircle(0.67,-0.34,0.07);
}

void Mountain1()
{
     glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2f(0.46f, 0.35f);
	glVertex2f(1.0f, 0.35f);
	glVertex2f(1.0f, 0.6f);
	glVertex2f(0.97f, 0.64f);
	glVertex2f(0.95f, 0.68f);
	glVertex2f(0.93f, 0.71f);
	glVertex2f(0.89f, 0.715f);
	glVertex2f(0.87f, 0.7f);
	glVertex2f(0.835f, 0.67f);
	glVertex2f(0.8f, 0.6f);
	glVertex2f(0.8f, 0.6f);
	glVertex2f(0.76f, 0.5f);
	glVertex2f(0.74f, 0.47f);
	glVertex2f(0.72f, 0.5f);
	glVertex2f(0.68f, 0.55f);
	glVertex2f(0.67f, 0.58f);
	glVertex2f(0.67f, 0.58f);
	glVertex2f(0.64f, 0.62f);
	glVertex2f(0.63f, 0.63f);
	glVertex2f(0.58f, 0.66f);
	glVertex2f(0.56f, 0.64f);
	glVertex2f(0.53f, 0.61f);
	glVertex2f(0.5f, 0.585f);
	glVertex2f(0.47f, 0.545f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(28, 185, 90);
	glVertex2f(-0.63f, 0.35f);
	glVertex2f(0.56f, 0.35f);
	glVertex2f(0.48f, 0.55f);
	glVertex2f(0.44f, 0.59f);
	glVertex2f(0.36f, 0.64f);
	glVertex2f(0.28f, 0.7f);
    glVertex2f(0.22f, 0.62f);
	glVertex2f(0.17f, 0.61f);
	glVertex2f(0.125f, 0.63f);
	glVertex2f(0.065f, 0.645f);
	glVertex2f(-0.09f, 0.8f);
	glVertex2f(-0.27f, 0.61f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.36f, 0.64f);
	glVertex2f(-0.42f, 0.63f);
    glVertex2f(-0.48f, 0.61f);
	glVertex2f(-0.5f, 0.61f);
	glVertex2f(-0.55f, 0.59f);
	glVertex2f(-0.58f, 0.55f);
	glVertex2f(-0.58f, 0.55f);
	glVertex2f(-0.61f, 0.51f);
    glEnd();
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
void truck()
{
      glPushMatrix();
     //main body
    glColor3ub(146, 43, 33);


  make_quads(0.25, -0.55,
               0.20, -0.7,
               0.35, -0.7,
               0.35, -0.55);
 make_quads(0.16, -0.7,
               0.16, -0.80,
               0.35, -0.80,
               0.35, -0.7);
  make_quads(0.35, -0.52,
               0.35, -0.80,
               0.45, -0.80,
               0.45, -0.52);
//Bumper
  glColor3ub(48, 63, 159);
 make_quads(0.45, -0.78,
               0.45, -0.80,
               0.85, -0.80,
               0.85, -0.78);
//Container
glColor3ub(189, 189, 189);
    make_quads(0.46, -0.55,
               0.46, -0.78,
               0.85, -0.78,
               0.85, -0.55);
  glColor3ub(66, 165, 245);
 make_quads(0.27, -0.57,
               0.23, -0.70,
               0.36, -0.70,
               0.36, -0.57);




    //WHEEL
    glColor3ub(52,73,94);
    makeCircle(0.74, -0.83, 0.05);
    makeCircle(0.34,-0.83, 0.05);
    glColor3ub(86,101,115);
    makeCircle(0.74, -0.83, 0.03);
    makeCircle(0.34,-0.83, 0.03);



   //light
    glPointSize(12.0);
    glBegin(GL_POINTS);
    glColor3ub(255,0,0);
    glVertex2f(0.85f, -0.78);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(255,255,0);
    glVertex2f(0.16f, -0.78);
    glEnd();





   glPopMatrix();





}
void zebraCrossing()
{
   glLineWidth(13.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(0.25f, -0.55f);

	glVertex2f(-0.05f, -0.65f);
	glVertex2f(0.25f, -0.65f);

	glVertex2f(-0.05f, -0.75f);
	glVertex2f(0.25f, -0.75f);

	glVertex2f(-0.05f, -0.85f);
	glVertex2f(0.25f, -0.85f);

	glVertex2f(-0.05f, -0.95f);
	glVertex2f(0.25f, -0.95f);
	glEnd();
}
void juicebar()
{

    glBegin(GL_QUADS);
      glColor3ub(210, 105, 30);
      glVertex2f(0.1f, -0.3f);
      glVertex2f(0.1f, -0.4f);
      glVertex2f(0.25f,  -0.4f);
      glVertex2f(0.25f,  -0.3f);
      glEnd();
   /*glBegin(GL_LINES);
      glColor3ub(240, 243, 244);
      glVertex2f(1.0,-0.40);
      glEnd();*/
      glBegin(GL_QUADS);
      glColor3ub(139, 69, 19);
      glVertex2f(0.09f, -0.29f);
      glVertex2f(0.09f, -0.3f);
      glVertex2f(0.26f,  -0.3f);
      glVertex2f(0.26f,  -0.29f);
      glEnd();


      glBegin(GL_QUADS);
      glColor3ub(210, 105, 30);
      glVertex2f(0.25f, -0.1f);
      glVertex2f(0.25f, -0.4f);
      glVertex2f(0.3f,  -0.4f);
      glVertex2f(0.3f,  -0.1f);
      glEnd();
       glBegin(GL_QUADS);
      glColor3ub(139, 69, 19);
      glVertex2f(0.25f, -0.1f);
      glVertex2f(0.25f, -0.4f);
      glVertex2f(0.26f,  -0.4f);
      glVertex2f(0.26f,  -0.1f);
      glEnd();

       glBegin(GL_QUADS);
      glColor3ub(139, 69, 19);
      glVertex2f(0.3f, -0.1f);
      glVertex2f(0.3f, -0.4f);
      glVertex2f(0.31f,  -0.4f);
      glVertex2f(0.31f,  -0.1f);
      glEnd();

      glBegin(GL_POLYGON);
	glColor3ub(255, 165, 0);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.05f, -0.15f);
	glVertex2f(0.07f, -0.17f);
	glVertex2f(0.1f, -0.15f);
	glVertex2f(0.12f, -0.1f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(165, 42, 42);
	glVertex2f(0.12f, -0.1f);
	glVertex2f(0.1f, -0.15f);
	glVertex2f(0.13f, -0.17f);
	glVertex2f(0.15f, -0.15f);
	glVertex2f(0.19f, -0.1f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 165, 0);
	glVertex2f(0.19f, -0.1f);
	glVertex2f(0.15f, -0.15f);
	glVertex2f(0.19f, -0.17f);
	glVertex2f(0.21f, -0.15f);
	glVertex2f(0.25f, -0.1f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(165, 42, 42);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.21f, -0.15f);
	glVertex2f(0.25f, -0.17f);
	//glVertex2f(0.15f, -0.15f);
	//glVertex2f(0.19f, -0.1f);
	glEnd();

	 glBegin(GL_QUADS);
      glColor3ub(139, 69, 19);
      glVertex2f(0.09f, -0.09f);
      glVertex2f(0.09f, -0.1f);
      glVertex2f(0.31f,  -0.1f);
      glVertex2f(0.31f,  -0.09f);
      glEnd();

     glBegin(GL_QUADS);
      glColor3ub(139, 69, 19);
      glVertex2f(0.01f, -0.35f);
      glVertex2f(0.01f, -0.4f);
      glVertex2f(0.05f,  -0.4f);
      glVertex2f(0.05f,  -0.35f);
      glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(165, 42, 42);
    glVertex2f(0.03f, -0.23f);
    glVertex2f(0.03f, -0.35f);
    glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(255, 165, 0);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.01f, -0.23f);
	glVertex2f(0.03f, -0.23f);
	glVertex2f(0.03f, -0.16f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 165, 0);
	glVertex2f(0.03f, -0.16f);
	glVertex2f(0.03f, -0.23f);
	glVertex2f(0.05f, -0.23f);
	glVertex2f(0.06f, -0.2f);

	glEnd();

   glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(139, 69, 19);
    glVertex2f(0.1f, -0.29f);
    glVertex2f(0.15f, -0.4f);
    glEnd();

     glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(139, 69, 19);
    glVertex2f(0.15f, -0.29f);
    glVertex2f(0.1f, -0.4f);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(139, 69, 19);
    glVertex2f(0.15f, -0.29f);
    glVertex2f(0.2f, -0.4f);
    glEnd();

   glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(139, 69, 19);
    glVertex2f(0.2f, -0.29f);
    glVertex2f(0.15f, -0.4f);
    glEnd();

     glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3ub(139, 69, 19);
    glVertex2f(0.2f, -0.29f);
    glVertex2f(0.25f, -0.4f);
     glVertex2f(0.2f, -0.4f);
    glVertex2f(0.25f, -0.29f);
    glEnd();


     glBegin(GL_QUADS);
      glColor3ub(255, 165, 0);
      glVertex2f(0.27f, -0.16f);
      glVertex2f(0.27f, -0.23f);
      glVertex2f(0.29f,  -0.23f);
      glVertex2f(0.29f,  -0.16f);
      glEnd();

}

void TownSTART()
{


      glColor3ub(208, 211, 212);
      make_quads(1.0,-0.40,-1.0,-0.40,-1.0,0.30,1.0,0.30);
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
void Star()
{

    glPointSize(5);
    glBegin(GL_POINTS);
    glColor3ub(245, 245, 245);
    glVertex2f(-0.97,0.70);
    glVertex2f(0.97,0.70);
    glVertex2f(-0.75,0.80);

    glVertex2f(-0.89,0.75);
    glVertex2f(0.87,0.79);
    glVertex2f(0.75,0.82);


    glVertex2f(0.50,0.75);
    glVertex2f(0.55,0.79);
    glVertex2f(0.53,0.82);

    glVertex2f(0.40,0.85);
    glVertex2f(0.45,0.79);
    glVertex2f(0.43,0.75);

    glVertex2f(0.30,0.78);
    glVertex2f(0.33,0.79);
    glVertex2f(0.39,0.89);


    glVertex2f(0.03,0.78);
    glVertex2f(0.10,0.79);
    glVertex2f(0.19,0.89);


    glVertex2f(-0.03,0.78);
    glVertex2f(-0.10,0.79);
    glVertex2f(-0.19,0.89);

    glVertex2f(-0.33,0.80);
    glVertex2f(-0.40,0.79);
    glVertex2f(-0.49,0.89);


    glVertex2f(-0.53,0.70);
    glVertex2f(-0.60,0.78);
    glVertex2f(-0.69,0.88);
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

void Springflower()
{


    glPushMatrix();
   //FIRST PHASE
   //1
   glColor3ub (251, 192, 45);
   glTranslatef(positionjrtree1,0.0f, 0.0f);
   makeCircle(-0.64,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(-0.64,0.205,0.01);
   makeCircle(-0.625,0.215,0.01);
   makeCircle(-0.655,0.215,0.01);
   makeCircle(-0.64,0.235,0.01);
   makeCircle(-0.63,0.230,0.01);
   makeCircle(-0.655,0.230,0.01);



   //2
   glColor3ub (251, 192, 45);
   makeCircle(-0.67,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(-0.67,0.205,0.01);
   makeCircle(-0.655,0.215,0.01);
   makeCircle(-0.685,0.215,0.01);
   makeCircle(-0.67,0.235,0.01);
   makeCircle(-0.66,0.230,0.01);
   makeCircle(-0.685,0.230,0.01);




   //3
   glColor3ub (251, 192, 45);
   makeCircle(-0.87,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(-0.87,0.205,0.01);
   makeCircle(-0.855,0.215,0.01);
   makeCircle(-0.885,0.215,0.01);
   makeCircle(-0.87,0.235,0.01);
   makeCircle(-0.86,0.230,0.01);
   makeCircle(-0.885,0.230,0.01);




   //4
   glColor3ub (251, 192, 45);
   makeCircle(-0.87,0.12,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(-0.87,0.105,0.01);
   makeCircle(-0.855,0.115,0.01);
   makeCircle(-0.885,0.115,0.01);
   makeCircle(-0.87,0.135,0.01);
   makeCircle(-0.86,0.130,0.01);
   makeCircle(-0.885,0.130,0.01);


   //5
   glColor3ub (251, 192, 45);
   makeCircle(-0.77,0.32,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(-0.77,0.305,0.01);
   makeCircle(-0.755,0.315,0.01);
   makeCircle(-0.785,0.315,0.01);
   makeCircle(-0.77,0.335,0.01);
   makeCircle(-0.76,0.330,0.01);
   makeCircle(-0.785,0.330,0.01);


   //6
   glColor3ub (251, 192, 45);
   makeCircle(-0.77,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(-0.77,0.205,0.01);
   makeCircle(-0.755,0.215,0.01);
   makeCircle(-0.785,0.215,0.01);
   makeCircle(-0.77,0.235,0.01);
   makeCircle(-0.76,0.230,0.01);
   makeCircle(-0.785,0.230,0.01);


   //SECOND PHASE

   //1
   glColor3ub (251, 192, 45);
   makeCircle(0.64,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.64,0.205,0.01);
   makeCircle(0.625,0.215,0.01);
   makeCircle(0.655,0.215,0.01);
   makeCircle(0.64,0.235,0.01);
   makeCircle(0.63,0.230,0.01);
   makeCircle(0.655,0.230,0.01);



   //2
   glColor3ub (251, 192, 45);
   makeCircle(0.67,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.67,0.205,0.01);
   makeCircle(0.655,0.215,0.01);
   makeCircle(0.685,0.215,0.01);
   makeCircle(0.67,0.235,0.01);
   makeCircle(0.66,0.230,0.01);
   makeCircle(0.685,0.230,0.01);




   //3
   glColor3ub (251, 192, 45);
   makeCircle(0.87,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.87,0.205,0.01);
   makeCircle(0.855,0.215,0.01);
   makeCircle(0.885,0.215,0.01);
   makeCircle(0.87,0.235,0.01);
   makeCircle(0.86,0.230,0.01);
   makeCircle(0.885,0.230,0.01);




   //4
   glColor3ub (251, 192, 45);
   makeCircle(0.87,0.12,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.87,0.105,0.01);
   makeCircle(0.855,0.115,0.01);
   makeCircle(0.885,0.115,0.01);
   makeCircle(0.87,0.135,0.01);
   makeCircle(0.86,0.130,0.01);
   makeCircle(0.885,0.130,0.01);


   //5
   glColor3ub (251, 192, 45);
   makeCircle(0.77,0.32,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.77,0.305,0.01);
   makeCircle(0.755,0.315,0.01);
   makeCircle(0.785,0.315,0.01);
   makeCircle(0.77,0.335,0.01);
   makeCircle(0.76,0.330,0.01);
   makeCircle(0.785,0.330,0.01);


   //6
   glColor3ub (251, 192, 45);
   makeCircle(0.77,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.77,0.205,0.01);
   makeCircle(0.755,0.215,0.01);
   makeCircle(0.785,0.215,0.01);
   makeCircle(0.77,0.235,0.01);
   makeCircle(0.76,0.230,0.01);
   makeCircle(0.785,0.230,0.01);


   //THIRD PHASE

   //1
   glColor3ub (251, 192, 45);
   makeCircle(0.44,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.44,0.205,0.01);
   makeCircle(0.425,0.215,0.01);
   makeCircle(0.455,0.215,0.01);
   makeCircle(0.44,0.235,0.01);
   makeCircle(0.43,0.230,0.01);
   makeCircle(0.455,0.230,0.01);



   //2
   glColor3ub (251, 192, 45);
   makeCircle(0.37,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.37,0.205,0.01);
   makeCircle(0.355,0.215,0.01);
   makeCircle(0.385,0.215,0.01);
   makeCircle(0.37,0.235,0.01);
   makeCircle(0.36,0.230,0.01);
   makeCircle(0.385,0.230,0.01);




   //3
   glColor3ub (251, 192, 45);
   makeCircle(0.67,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.67,0.205,0.01);
   makeCircle(0.655,0.215,0.01);
   makeCircle(0.685,0.215,0.01);
   makeCircle(0.67,0.235,0.01);
   makeCircle(0.66,0.230,0.01);
   makeCircle(0.685,0.230,0.01);




   //4
   glColor3ub (251, 192, 45);
   makeCircle(0.67,0.12,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.67,0.105,0.01);
   makeCircle(0.655,0.115,0.01);
   makeCircle(0.685,0.115,0.01);
   makeCircle(0.67,0.135,0.01);
   makeCircle(0.66,0.130,0.01);
   makeCircle(0.685,0.130,0.01);


   //5
   glColor3ub (251, 192, 45);
   makeCircle(0.57,0.32,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.57,0.305,0.01);
   makeCircle(0.555,0.315,0.01);
   makeCircle(0.585,0.315,0.01);
   makeCircle(0.57,0.335,0.01);
   makeCircle(0.56,0.330,0.01);
   makeCircle(0.585,0.330,0.01);


   //6
   glColor3ub (251, 192, 45);
   makeCircle(0.57,0.22,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.57,0.205,0.01);
   makeCircle(0.555,0.215,0.01);
   makeCircle(0.585,0.215,0.01);
   makeCircle(0.57,0.235,0.01);
   makeCircle(0.56,0.230,0.01);
   makeCircle(0.585,0.230,0.01);


    //7
   glColor3ub (251, 192, 45);
   makeCircle(0.64,0.42,0.01);
   glColor3ub (229, 57, 53);
   makeCircle(0.64,0.405,0.01);
   makeCircle(0.625,0.415,0.01);
   makeCircle(0.655,0.415,0.01);
   makeCircle(0.64,0.435,0.01);
   makeCircle(0.63,0.430,0.01);
   makeCircle(0.655,0.430,0.01);



   //FOURTH PHASE
   //1
   glColor3ub (251, 192, 45);
   makeCircle(0.08,0.22,0.01);
   glColor3ub (251, 252, 252);
   makeCircle(0.08,0.205,0.01);
   makeCircle(0.065,0.215,0.01);
   makeCircle(0.095,0.215,0.01);
   makeCircle(0.08,0.235,0.01);
   makeCircle(0.07,0.230,0.01);
   makeCircle(0.095,0.230,0.01);



   //2
   glColor3ub (251, 192, 45);
   makeCircle(0.11,0.22,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(0.11,0.205,0.01);
   makeCircle(0.095,0.215,0.01);
   makeCircle(0.125,0.215,0.01);
   makeCircle(0.11,0.235,0.01);
   makeCircle(0.10,0.230,0.01);
   makeCircle(0.125,0.230,0.01);


   //3
   glColor3ub (251, 192, 45);
   makeCircle(-0.07,0.32,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(-0.07,0.305,0.01);
   makeCircle(-0.055,0.315,0.01);
   makeCircle(-0.085,0.315,0.01);
   makeCircle(-0.07,0.335,0.01);
   makeCircle(-0.06,0.330,0.01);
   makeCircle(-0.085,0.330,0.01);


   //4
   glColor3ub (251, 192, 45);
   makeCircle(-0.07,0.22,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(-0.07,0.205,0.01);
   makeCircle(-0.055,0.215,0.01);
   makeCircle(-0.085,0.215,0.01);
   makeCircle(-0.07,0.235,0.01);
   makeCircle(-0.06,0.230,0.01);
   makeCircle(-0.085,0.230,0.01);




//5
   glColor3ub (251, 192, 45);
   makeCircle(0.07,0.32,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(0.07,0.305,0.01);
   makeCircle(0.055,0.315,0.01);
   makeCircle(0.085,0.315,0.01);
   makeCircle(0.07,0.335,0.01);
   makeCircle(0.06,0.330,0.01);
   makeCircle(0.085,0.330,0.01);



 //6
   glColor3ub (251, 192, 45);
   makeCircle(-0.27,0.32,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(-0.27,0.305,0.01);
   makeCircle(-0.255,0.315,0.01);
   makeCircle(-0.285,0.315,0.01);
   makeCircle(-0.27,0.335,0.01);
   makeCircle(-0.26,0.330,0.01);
   makeCircle(-0.285,0.330,0.01);


//7
   glColor3ub (251, 192, 45);
   makeCircle(-0.22,0.22,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(-0.22,0.205,0.01);
   makeCircle(-0.205,0.215,0.01);
   makeCircle(-0.235,0.215,0.01);
   makeCircle(-0.22,0.235,0.01);
   makeCircle(-0.21,0.230,0.01);
   makeCircle(-0.235,0.230,0.01);



 //8
   glColor3ub (251, 192, 45);
   makeCircle(-0.17,0.42,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(-0.17,0.405,0.01);
   makeCircle(-0.155,0.415,0.01);
   makeCircle(-0.185,0.415,0.01);
   makeCircle(-0.17,0.435,0.01);
   makeCircle(-0.16,0.430,0.01);
   makeCircle(-0.185,0.430,0.01);


 //9
   glColor3ub (251, 192, 45);
   makeCircle(-0.37,0.32,0.01);
   glColor3ub (251, 252, 252 );
   makeCircle(-0.37,0.305,0.01);
   makeCircle(-0.355,0.315,0.01);
   makeCircle(-0.385,0.315,0.01);
   makeCircle(-0.37,0.335,0.01);
   makeCircle(-0.36,0.330,0.01);
   makeCircle(-0.385,0.330,0.01);


//10
   glColor3ub (251, 192, 45);
   makeCircle(-0.42,0.22,0.01);
   glColor3ub (251, 252, 252);
   makeCircle(-0.42,0.205,0.01);
   makeCircle(-0.405,0.215,0.01);
   makeCircle(-0.435,0.215,0.01);
   makeCircle(-0.42,0.235,0.01);
   makeCircle(-0.41,0.230,0.01);
   makeCircle(-0.435,0.230,0.01);
    glPopMatrix();

   glLoadIdentity();


}


void Traffic_Light()
{

    glColor3ub (112, 123, 124);
    make_quads(-0.07,-0.50,-0.085,-0.50,-0.085,-0.15,-0.07,-0.15);
    glColor3ub (44, 62, 80);
    make_quads(-0.06,-0.22,-0.095,-0.22,-0.095,-0.03,-0.06,-0.03);
    glColor3ub (255, 0, 0);
    makeCircle(-0.077,-0.057,0.015);
    glColor3ub (255, 255, 0);
    makeCircle(-0.077,-0.12,0.015);
    glColor3ub (51, 255, 0);
    makeCircle(-0.077,-0.19,0.015);



}


void VSpringflower()
{



   //FIRST PHASE
   //1
   glColor3ub (251, 192, 45);
   makeCircle(-0.64,0.42,0.008);
   glColor3ub (229, 57, 53);
   makeCircle(-0.64,0.409,0.008);
   makeCircle(-0.629,0.415,0.008);
   makeCircle(-0.64,0.433,0.008);
   makeCircle(-0.647,0.423,0.008);
   makeCircle(-0.628,0.428,0.008);
   //2
   glColor3ub (255, 255, 0);
   makeCircle(-0.59,0.415,0.008);
   glColor3ub (123, 31, 162);
   makeCircle(-0.59,0.404,0.008);
   makeCircle(-0.579,0.410,0.008);
   makeCircle(-0.59,0.428,0.008);
   makeCircle(-0.597,0.418,0.008);
   makeCircle(-0.578,0.423,0.008);


   //3
   glColor3ub (255, 255, 0);
   makeCircle(-0.59,0.375,0.008);
   glColor3ub (239, 108, 0);
   makeCircle(-0.59,0.364,0.008);
   makeCircle(-0.579,0.370,0.008);
   makeCircle(-0.59,0.388,0.008);
   makeCircle(-0.597,0.378,0.008);
   makeCircle(-0.578,0.383,0.008);

   //4
   glColor3ub (255, 255, 0);
   makeCircle(-0.69,0.375,0.008);
   glColor3ub (239, 108, 0);
   makeCircle(-0.69,0.364,0.008);
   makeCircle(-0.679,0.370,0.008);
   makeCircle(-0.69,0.388,0.008);
   makeCircle(-0.697,0.378,0.008);
   makeCircle(-0.678,0.383,0.008);



    //5
   glColor3ub (255, 255, 0);
   makeCircle(-0.68,0.345,0.008);
   glColor3ub (229, 57, 53);
   makeCircle(-0.68,0.334,0.008);
   makeCircle(-0.669,0.340,0.008);
   makeCircle(-0.68,0.358,0.008);
   makeCircle(-0.687,0.348,0.008);
   makeCircle(-0.668,0.353,0.008);

    //6
   glColor3ub (255, 255, 0);
   makeCircle(-0.62,0.345,0.008);
   glColor3ub (142, 36, 170);
   makeCircle(-0.62,0.334,0.008);
   makeCircle(-0.609,0.340,0.008);
   makeCircle(-0.62,0.358,0.008);
   makeCircle(-0.627,0.348,0.008);
   makeCircle(-0.608,0.353,0.008);

   //SECOND PHASE
   //1
   glColor3ub (251, 192, 45);
   makeCircle(0.84,0.42,0.008);
   glColor3ub (229, 57, 53);
   makeCircle(0.84,0.409,0.008);
   makeCircle(0.829,0.415,0.008);
   makeCircle(0.84,0.433,0.008);
   makeCircle(0.847,0.423,0.008);
   makeCircle(0.828,0.428,0.008);
 //2
   glColor3ub (255, 255, 0);
   makeCircle(0.75,0.415,0.008);
   glColor3ub (123, 31, 162);
   makeCircle(0.75,0.404,0.008);
   makeCircle(0.739,0.410,0.008);
   makeCircle(0.75,0.428,0.008);
   makeCircle(0.757,0.418,0.008);
   makeCircle(0.738,0.423,0.008);


   //3
   glColor3ub (255, 255, 0);
   makeCircle(0.79,0.375,0.008);
   glColor3ub (239, 108, 0);
   makeCircle(0.79,0.364,0.008);
   makeCircle(0.779,0.370,0.008);
   makeCircle(0.79,0.388,0.008);
   makeCircle(0.797,0.378,0.008);
   makeCircle(0.778,0.383,0.008);

   //4
   glColor3ub (255, 255, 0);
   makeCircle(0.89,0.375,0.008);
   glColor3ub (239, 108, 0);
   makeCircle(0.89,0.364,0.008);
   makeCircle(0.879,0.370,0.008);
   makeCircle(0.89,0.388,0.008);
   makeCircle(0.897,0.378,0.008);
   makeCircle(0.878,0.383,0.008);



    //5
   glColor3ub (255, 255, 0);
   makeCircle(0.88,0.445,0.008);
   glColor3ub (229, 57, 53);
   makeCircle(0.88,0.434,0.008);
   makeCircle(0.869,0.440,0.008);
   makeCircle(0.88,0.458,0.008);
   makeCircle(0.887,0.448,0.008);
   makeCircle(0.868,0.453,0.008);

    //6
   glColor3ub (255, 255, 0);
   makeCircle(0.82,0.525,0.008);
   glColor3ub (142, 36, 170);
   makeCircle(0.82,0.514,0.008);
   makeCircle(0.809,0.520,0.008);
   makeCircle(0.82,0.538,0.008);
   makeCircle(0.827,0.528,0.008);
   makeCircle(0.808,0.533,0.008);



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

void VKansgrass()
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


//11
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


//12
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

void Grass_Flower_Under_HillsL()
{


     glLineWidth(0.5);
     glBegin(GL_LINES);
     glColor3ub (46, 125, 50);
     glVertex2f(-0.75,0.35);
     glVertex2f(-0.74,0.41);

     glVertex2f(-0.77,0.35);
     glVertex2f(-0.77,0.41);

     glVertex2f(-0.79,0.35);
     glVertex2f(-0.79,0.41);

     glVertex2f(-0.81,0.35);
     glVertex2f(-0.80,0.41);

     glVertex2f(-0.83,0.35);
     glVertex2f(-0.84,0.41);

     glVertex2f(-0.85,0.35);
     glVertex2f(-0.85,0.41);

     glVertex2f(-0.87,0.35);
     glVertex2f(-0.86,0.41);

     glVertex2f(-0.89,0.35);
     glVertex2f(-0.90,0.41);

     glVertex2f(-0.92,0.35);
     glVertex2f(-0.93,0.41);

     glVertex2f(-0.95,0.35);
     glVertex2f(-0.95,0.41);

     glVertex2f(-0.97,0.35);
     glVertex2f(-0.96,0.41);

     glVertex2f(-0.99,0.35);
     glVertex2f(-0.98,0.41);

     glVertex2f(-0.73,0.35);
     glVertex2f(-0.72,0.41);

     glVertex2f(-0.71,0.35);
     glVertex2f(-0.71,0.41);

     glVertex2f(-0.69,0.35);
     glVertex2f(-0.68,0.41);

     glVertex2f(-0.67,0.35);
     glVertex2f(-0.67,0.41);

     glVertex2f(-0.65,0.35);
     glVertex2f(-0.64,0.41);

     glVertex2f(-0.63,0.35);
     glVertex2f(-0.65,0.41);

     glVertex2f(-0.60,0.35);
     glVertex2f(-0.62,0.41);

     glVertex2f(-0.59,0.35);
     glVertex2f(-0.59,0.41);

     glVertex2f(-0.57,0.35);
     glVertex2f(-0.56,0.41);

     glVertex2f(-0.53,0.35);
     glVertex2f(-0.54,0.41);

     glVertex2f(-0.52,0.35);
     glVertex2f(-0.51,0.41);

     glVertex2f(-0.49,0.35);
     glVertex2f(-0.50,0.41);

     glVertex2f(-0.47,0.35);
     glVertex2f(-0.47,0.41);

     glVertex2f(-0.45,0.35);
     glVertex2f(-0.45,0.41);

     glVertex2f(-0.43,0.35);
     glVertex2f(-0.44,0.41);

     glVertex2f(-0.41,0.35);
     glVertex2f(-0.42,0.41);

     glVertex2f(-0.39,0.35);
     glVertex2f(-0.38,0.41);

     glVertex2f(-0.36,0.35);
     glVertex2f(-0.36,0.41);

     glVertex2f(-0.35,0.35);
     glVertex2f(-0.35,0.41);

     glVertex2f(-0.33,0.35);
     glVertex2f(-0.32,0.41);

     glVertex2f(-0.30,0.35);
     glVertex2f(-0.31,0.41);

     glVertex2f(-0.28,0.35);
     glVertex2f(-0.28,0.41);

     glVertex2f(-0.26,0.35);
     glVertex2f(-0.27,0.41);

     glVertex2f(-0.25,0.35);
     glVertex2f(-0.24,0.41);

     glVertex2f(-0.22,0.35);
     glVertex2f(-0.23,0.41);

     glVertex2f(-0.20,0.35);
     glVertex2f(-0.21,0.41);

     glVertex2f(-0.19,0.35);
     glVertex2f(-0.18,0.41);

     glVertex2f(-0.16,0.35);
     glVertex2f(-0.17,0.41);

     glVertex2f(-0.14,0.35);
     glVertex2f(-0.15,0.41);

     glVertex2f(-0.12,0.35);
     glVertex2f(-0.11,0.41);

     glVertex2f(-0.09,0.35);
     glVertex2f(-0.10,0.41);

     glVertex2f(-0.07,0.35);
     glVertex2f(-0.07,0.41);

     glVertex2f(-0.05,0.35);
     glVertex2f(-0.06,0.41);

     glVertex2f(-0.03,0.35);
     glVertex2f(-0.04,0.41);

     glVertex2f(0.00,0.35);
     glVertex2f(-0.01,0.41);

     glEnd();


     //Yellow Flower
     glColor3ub (251, 192, 45);
     makeCircle(-0.74,0.41,0.008);
     makeCircle(-0.10,0.41,0.008);
     makeCircle(-0.77,0.41,0.008);
     makeCircle(-0.11,0.41,0.008);
     makeCircle(-0.24,0.41,0.008);
     makeCircle(-0.36,0.41,0.008);
     makeCircle(-0.50,0.41,0.008);
      makeCircle(-0.64,0.41,0.008);
      makeCircle(-0.90,0.41,0.008);
      makeCircle(-0.84,0.41,0.008);


     glColor3ub (244, 67, 54);
     makeCircle(-0.79,0.41,0.008);
     makeCircle(-0.15,0.41,0.008);
     makeCircle(-0.27,0.41,0.008);
     makeCircle(-0.38,0.41,0.008);
     makeCircle(-0.51,0.41,0.008);
      makeCircle(-0.65,0.41,0.008);
      makeCircle(-0.93,0.41,0.008);
      makeCircle(-0.85,0.41,0.008);




     glColor3ub (194, 24, 91);
     makeCircle(-0.01,0.41,0.008);
     makeCircle(-0.17,0.41,0.008);
     makeCircle(-0.28,0.41,0.008);
     makeCircle(-0.42,0.41,0.008);
     makeCircle(-0.54,0.41,0.008);
      makeCircle(-0.67,0.41,0.008);
      makeCircle(-0.95,0.41,0.008);
      makeCircle(-0.86,0.41,0.008);

     glColor3ub (123, 31, 162);
     makeCircle(-0.04,0.41,0.008);
     makeCircle(-0.18,0.41,0.008);
     makeCircle(-0.31,0.41,0.008);
     makeCircle(-0.44,0.41,0.008);
     makeCircle(-0.56,0.41,0.008);
      makeCircle(-0.68,0.41,0.008);
      makeCircle(-0.96,0.41,0.008);


     glColor3ub (1, 87, 155);
     makeCircle(-0.06,0.41,0.008);
     makeCircle(-0.21,0.41,0.008);
     makeCircle(-0.32,0.41,0.008);
     makeCircle(-0.45,0.41,0.008);
     makeCircle(-0.59,0.41,0.008);
      makeCircle(-0.71,0.41,0.008);
      makeCircle(-0.98,0.41,0.008);


     glColor3ub (255, 51, 51);
     makeCircle(-0.07,0.41,0.008);
     makeCircle(-0.23,0.41,0.008);
     makeCircle(-0.35,0.41,0.008);
     makeCircle(-0.47,0.41,0.008);
     makeCircle(-0.62,0.41,0.008);
      makeCircle(-0.72,0.41,0.008);
      makeCircle(-0.80,0.41,0.008);

}
void Grass_Flower_Under_HillsR()
{


     glLineWidth(0.5);
     glBegin(GL_LINES);
     glColor3ub (46, 125, 50);
     glVertex2f(0.75,0.35);
     glVertex2f(0.74,0.41);

     glVertex2f(0.77,0.35);
     glVertex2f(0.77,0.41);

     glVertex2f(0.79,0.35);
     glVertex2f(0.79,0.41);

     glVertex2f(0.81,0.35);
     glVertex2f(0.80,0.41);

     glVertex2f(0.83,0.35);
     glVertex2f(0.84,0.41);

     glVertex2f(0.85,0.35);
     glVertex2f(0.85,0.41);

     glVertex2f(0.87,0.35);
     glVertex2f(0.86,0.41);

     glVertex2f(0.89,0.35);
     glVertex2f(0.90,0.41);

     glVertex2f(0.92,0.35);
     glVertex2f(0.93,0.41);

     glVertex2f(0.95,0.35);
     glVertex2f(0.95,0.41);

     glVertex2f(0.97,0.35);
     glVertex2f(0.96,0.41);

     glVertex2f(0.99,0.35);
     glVertex2f(0.98,0.41);

     glVertex2f(0.73,0.35);
     glVertex2f(0.72,0.41);

     glVertex2f(0.71,0.35);
     glVertex2f(0.71,0.41);

     glVertex2f(0.69,0.35);
     glVertex2f(0.68,0.41);

     glVertex2f(0.67,0.35);
     glVertex2f(0.67,0.41);

     glVertex2f(0.65,0.35);
     glVertex2f(0.64,0.41);

     glVertex2f(0.63,0.35);
     glVertex2f(0.65,0.41);

     glVertex2f(0.60,0.35);
     glVertex2f(0.62,0.41);

     glVertex2f(0.59,0.35);
     glVertex2f(0.59,0.41);

     glVertex2f(0.57,0.35);
     glVertex2f(0.56,0.41);

     glVertex2f(0.53,0.35);
     glVertex2f(0.54,0.41);

     glVertex2f(0.52,0.35);
     glVertex2f(0.51,0.41);

     glVertex2f(0.49,0.35);
     glVertex2f(0.50,0.41);

     glVertex2f(0.47,0.35);
     glVertex2f(0.47,0.41);

     glVertex2f(0.45,0.35);
     glVertex2f(0.45,0.41);

     glVertex2f(0.43,0.35);
     glVertex2f(0.44,0.41);

     glVertex2f(0.41,0.35);
     glVertex2f(0.42,0.41);

     glVertex2f(0.39,0.35);
     glVertex2f(0.38,0.41);

     glVertex2f(0.36,0.35);
     glVertex2f(0.36,0.41);

     glVertex2f(0.35,0.35);
     glVertex2f(0.35,0.41);

     glVertex2f(0.33,0.35);
     glVertex2f(0.32,0.41);

     glVertex2f(0.30,0.35);
     glVertex2f(0.31,0.41);

     glVertex2f(0.28,0.35);
     glVertex2f(0.28,0.41);

     glVertex2f(0.26,0.35);
     glVertex2f(0.27,0.41);

     glVertex2f(0.25,0.35);
     glVertex2f(0.24,0.41);

     glVertex2f(0.22,0.35);
     glVertex2f(0.23,0.41);

     glVertex2f(0.20,0.35);
     glVertex2f(0.21,0.41);

     glVertex2f(0.19,0.35);
     glVertex2f(0.18,0.41);

     glVertex2f(0.16,0.35);
     glVertex2f(0.17,0.41);

     glVertex2f(0.14,0.35);
     glVertex2f(0.15,0.41);

     glVertex2f(0.12,0.35);
     glVertex2f(0.11,0.41);

     glVertex2f(0.09,0.35);
     glVertex2f(0.10,0.41);

     glVertex2f(0.07,0.35);
     glVertex2f(0.07,0.41);

     glVertex2f(0.05,0.35);
     glVertex2f(0.06,0.41);

     glVertex2f(0.03,0.35);
     glVertex2f(0.04,0.41);

     glVertex2f(0.00,0.35);
     glVertex2f(0.01,0.41);

     glEnd();


     //Yellow Flower
     glColor3ub (251, 192, 45);
     makeCircle(0.74,0.41,0.008);
     makeCircle(0.10,0.41,0.008);
     makeCircle(0.77,0.41,0.008);
     makeCircle(0.11,0.41,0.008);
     makeCircle(0.24,0.41,0.008);
     makeCircle(0.36,0.41,0.008);
     makeCircle(0.50,0.41,0.008);
      makeCircle(0.64,0.41,0.008);
      makeCircle(0.90,0.41,0.008);
      makeCircle(0.84,0.41,0.008);


     glColor3ub (244, 67, 54);
     makeCircle(0.79,0.41,0.008);
     makeCircle(0.15,0.41,0.008);
     makeCircle(0.27,0.41,0.008);
     makeCircle(0.38,0.41,0.008);
     makeCircle(0.51,0.41,0.008);
      makeCircle(0.65,0.41,0.008);
      makeCircle(0.93,0.41,0.008);
      makeCircle(0.85,0.41,0.008);




     glColor3ub (194, 24, 91);
     makeCircle(0.01,0.41,0.008);
     makeCircle(0.17,0.41,0.008);
     makeCircle(0.28,0.41,0.008);
     makeCircle(0.42,0.41,0.008);
     makeCircle(0.54,0.41,0.008);
      makeCircle(0.67,0.41,0.008);
      makeCircle(0.95,0.41,0.008);
      makeCircle(0.86,0.41,0.008);

     glColor3ub (123, 31, 162);
     makeCircle(0.04,0.41,0.008);
     makeCircle(0.18,0.41,0.008);
     makeCircle(0.31,0.41,0.008);
     makeCircle(0.44,0.41,0.008);
     makeCircle(0.56,0.41,0.008);
      makeCircle(0.68,0.41,0.008);
      makeCircle(0.96,0.41,0.008);


     glColor3ub (1, 87, 155);
     makeCircle(0.06,0.41,0.008);
     makeCircle(0.21,0.41,0.008);
     makeCircle(0.32,0.41,0.008);
     makeCircle(0.45,0.41,0.008);
     makeCircle(0.59,0.41,0.008);
      makeCircle(0.71,0.41,0.008);
      makeCircle(0.98,0.41,0.008);


     glColor3ub (255, 51, 51);
     makeCircle(0.07,0.41,0.008);
     makeCircle(0.23,0.41,0.008);
     makeCircle(0.35,0.41,0.008);
     makeCircle(0.47,0.41,0.008);
     makeCircle(0.62,0.41,0.008);
      makeCircle(0.72,0.41,0.008);
      makeCircle(0.80,0.41,0.008);





}

void snow()
{
    glPushMatrix();
    glTranslatef(0, -position, 0);
    glColor3ub(255,255,255);
    makeCircle(-0.97, 0.96, 0.003);
    makeCircle(-0.98, 0.90, 0.004);

    makeCircle(-0.96, 0.58, 0.006);
    makeCircle(-0.98, 0.51, 0.005);
    makeCircle(-0.97, 0.45, 0.004);

    makeCircle(-0.96, 0.27, 0.006);
    makeCircle(-0.97, 0.19, 0.004);

    makeCircle(-0.98, -0.25, 0.003);

    makeCircle(-0.97, -0.63, 0.005);
    makeCircle(-0.97, -0.71, 0.004);
    makeCircle(-0.97, -0.95, 0.004);
    //2----------------------------------
    makeCircle(-0.92, 0.96, 0.006);

    makeCircle(-0.93, 0.65, 0.003);
    makeCircle(-0.91, 0.58, 0.004);
    makeCircle(-0.92, 0.39, 0.004);
    makeCircle(-0.93, 0.30, 0.006);
    makeCircle(-0.93, 0.10, 0.005);
    makeCircle(-0.93, 0.00, 0.002);
    makeCircle(-0.92, -0.09, 0.003);
    makeCircle(-0.92, -0.17, 0.005);
    makeCircle(-0.93, -0.33, 0.003);
    makeCircle(-0.93, -0.49, 0.004);
    makeCircle(-0.93, -0.55, 0.004);
    makeCircle(-0.93, -0.88, 0.003);
    makeCircle(-0.93, -0.95, 0.004);
    //3--------------------------------------
    makeCircle(-0.92, 0.96, 0.006);
    makeCircle(-0.93, 0.88, 0.002);
    makeCircle(-0.92, 0.75, 0.004);
    makeCircle(-0.91, 0.58, 0.003);
    makeCircle(-0.93, 0.51, 0.004);
    makeCircle(-0.92, 0.39, 0.003);
    makeCircle(-0.91, 0.27, 0.003);
    makeCircle(-0.93, 0.10, 0.005);
    makeCircle(-0.94, -0.09, 0.005);
    makeCircle(-0.92, -0.17, 0.005);;
    makeCircle(-0.92, -0.41, 0.004);
    makeCircle(-0.93, -0.49, 0.006);
    makeCircle(-0.92, -0.63, 0.005);
    makeCircle(-0.91, -0.78, 0.003);
    makeCircle(-0.91, -0.82, 0.003);
    makeCircle(-0.93, -0.95, 0.002);
    //4-------------------------------------
    makeCircle(-0.85, 0.96, 0.003);
    makeCircle(-0.83, 0.88, 0.002);
    makeCircle(-0.83, 0.63, 0.005);
    makeCircle(-0.85, 0.55, 0.003);
    makeCircle(-0.84, 0.39, 0.004);
    makeCircle(-0.85, 0.32, 0.005);
    makeCircle(-0.84, 0.19, 0.004);
    makeCircle(-0.85, 0.00, 0.003);
    makeCircle(-0.84, -0.09, 0.004);
    makeCircle(-0.84, -0.17, 0.003);
    makeCircle(-0.85, -0.49, 0.004);
    makeCircle(-0.84, -0.71, 0.005);
    makeCircle(-0.83, -0.78, 0.003);
    makeCircle(-0.85, -0.95, 0.004);
    //5---------------------------------------
    makeCircle(-0.78, 0.96, 0.005);
    makeCircle(-0.78, 0.88, 0.004);
    makeCircle(-0.78, 0.68, 0.003);
    makeCircle(-0.78, 0.63, 0.004);
    makeCircle(-0.78, 0.55, 0.003);
    makeCircle(-0.78, 0.32, 0.004);
    makeCircle(-0.78, 0.27, 0.003);
    makeCircle(-0.78, 0.19, 0.004);
    makeCircle(-0.78, -0.09, 0.003);
    makeCircle(-0.78, -0.17, 0.003);
    makeCircle(-0.78, -0.25, 0.004);
    makeCircle(-0.78, -0.41, 0.005);
    makeCircle(-0.78, -0.55, 0.004);
    makeCircle(-0.78, -0.63, 0.004);
    makeCircle(-0.78, -0.71, 0.006);
    makeCircle(-0.78, -0.88, 0.004);
    makeCircle(-0.78, -0.95, 0.005);
    //6-----------------------------------
    makeCircle(-0.71, 0.96, 0.006);
    makeCircle(-0.7, 0.88, 0.005);
    makeCircle(-0.72, 0.80, 0.002);
    makeCircle(-0.7, 0.55, 0.005);
    makeCircle(-0.71, 0.45, 0.003);
    makeCircle(-0.7, 0.39, 0.004);
    makeCircle(-0.7, 0.32, 0.004);
    makeCircle(-0.72, 0.27, 0.003);
    makeCircle(-0.71, 0.12, 0.003);
    makeCircle(-0.7, -0.09, 0.004);
    makeCircle(-0.72, -0.25, 0.006);
    makeCircle(-0.7, -0.33, 0.005);
    makeCircle(-0.7, -0.49, 0.003);
    makeCircle(-0.7, -0.55, 0.005);
    makeCircle(-0.71, -0.71, 0.004);
    makeCircle(-0.72, -0.95, 0.005);
    //7--------------------------------
    makeCircle(-0.61, 0.96, 0.003);
    makeCircle(-0.61, 0.88, 0.004);
    makeCircle(-0.61, 0.58, 0.006);
    makeCircle(-0.61, 0.51, 0.004);
    makeCircle(-0.6, 0.45, 0.005);
    makeCircle(-0.61, 0.32, 0.006);
    makeCircle(-0.61, 0.27, 0.002);
    makeCircle(-0.6, -0.01, 0.002);
    makeCircle(-0.61, -0.09, 0.006);
    makeCircle(-0.61, -0.33, 0.005);
    makeCircle(-0.6, -0.41, 0.003);
    makeCircle(-0.61, -0.49, 0.006);
    makeCircle(-0.61, -0.88, 0.003);
    makeCircle(-0.61, -0.94, 0.005);
    //8-------------------------------------
    makeCircle(-0.53, 0.96, 0.004);
    makeCircle(-0.53, 0.75, 0.002);
    makeCircle(-0.53, 0.58, 0.004);
    makeCircle(-0.53, 0.51, 0.003);
    makeCircle(-0.51, 0.32, 0.004);
    makeCircle(-0.53, 0.27, 0.005);
    makeCircle(-0.53, 0.19, 0.005);
    makeCircle(-0.53, -0.25, 0.006);
    makeCircle(-0.53, -0.55, 0.004);
    makeCircle(-0.52, -0.63, 0.005);
    makeCircle(-0.52, -0.78, 0.004);
    makeCircle(-0.53, -0.82, 0.002);
    //9------------------------------------
    makeCircle(-0.41, 0.97, 0.003);
    makeCircle(-0.41, 0.75, 0.002);
    makeCircle(-0.43, 0.65, 0.004);
    makeCircle(-0.4, 0.45, 0.003);
    makeCircle(-0.42, 0.32, 0.004);
    makeCircle(-0.4, 0.26, 0.004);
    makeCircle(-0.4, 0.19, 0.003);
    makeCircle(-0.4, -0.09, 0.004);
    makeCircle(-0.4, -0.41, 0.003);
    makeCircle(-0.42, -0.49, 0.004);
    makeCircle(-0.42, -0.63, 0.005);
    makeCircle(-0.4, -0.71, 0.003);
    makeCircle(-0.43, -0.88, 0.003);
    //10----------------------------------
    makeCircle(-0.31, 0.88, 0.005);
    makeCircle(-0.31, 0.80, 0.002);
    makeCircle(-0.30, 0.51, 0.002);
    makeCircle(-0.31, 0.45, 0.004);
    makeCircle(-0.31, 0.39, 0.003);
    makeCircle(-0.31, 0.19, 0.003);
    makeCircle(-0.32, 0.10, 0.002);
    makeCircle(-0.31, 0.00, 0.003);
    makeCircle(-0.31, -0.42, 0.003);
    makeCircle(-0.31, -0.5, 0.004);
    makeCircle(-0.32, -0.55, 0.005);
    makeCircle(-0.32, -0.78, 0.004);
    makeCircle(-0.31, -0.82, 0.005);
    makeCircle(-0.31, -0.88, 0.004);
    //11---------------------------------
    makeCircle(-0.2, 0.88, 0.002);
    makeCircle(-0.2, 0.80, 0.004);
    makeCircle(-0.2, 0.32, 0.006);
    makeCircle(-0.22, 0.00, 0.004);
    makeCircle(-0.2, -0.25, 0.004);
    makeCircle(-0.22, -0.31, 0.005);
    makeCircle(-0.21, -0.95, 0.006);
    //12---------------------------------
    makeCircle(-0.1, 0.88, 0.002);
    makeCircle(-0.12, 0.58, 0.004);
    makeCircle(-0.11, 0.51, 0.004);
    makeCircle(-0.11, 0.39, 0.003);
    makeCircle(-0.12, 0.27, 0.004);
    makeCircle(-0.12, 0.10, 0.005);
    makeCircle(-0.13, -0.33, 0.004);
    makeCircle(-0.12, -0.40, 0.003);
    makeCircle(-0.12, -0.49, 0.005);
    makeCircle(-0.12, -0.78, 0.003);
    makeCircle(-0.13, -0.82, 0.001);
    makeCircle(-0.11, -0.88, 0.004);
    //13--------------------------------------
    makeCircle(0.0, 0.88, 0.002);
    makeCircle(0.0, 0.80, 0.005);
    makeCircle(0.0, 0.51, 0.004);
    makeCircle(0.0, 0.45, 0.002);
    makeCircle(0.0, 0.32, 0.003);
    makeCircle(0.0, 0.27, 0.003);
    makeCircle(0.0, 0.19, 0.008);
    makeCircle(0.0, 0.10, 0.005);
    makeCircle(0.0, -0.17, 0.004);
    makeCircle(0.0, -0.25, 0.004);
    makeCircle(0.0, -0.49, 0.005);
    makeCircle(0.0, -0.55, 0.002);
    makeCircle(0.0, -0.78, 0.004);
    makeCircle(0.0, -0.82, 0.002);
    //14--------------------------------------------
    glColor3ub(255,255,255);
    makeCircle( 0.98, 0.82, 0.003);
    makeCircle( 0.96, 0.58, 0.005);
    makeCircle( 0.98, 0.51, 0.003);
    makeCircle( 0.97, 0.45, 0.004);
    makeCircle( 0.97, - 0.09, 0.005);
    makeCircle( 0.97, - 0.17, 0.002);
    makeCircle( 0.98, - 0.25, 0.003);
    makeCircle( 0.98, - 0.33, 0.006);
    makeCircle( 0.97, - 0.41, 0.003);
    makeCircle( 0.98, - 0.49, 0.004);
    makeCircle( 0.97, - 0.82, 0.003);
    makeCircle( 0.98, - 0.88, 0.004);
    //15
    makeCircle( 0.92, 0.96, 0.004);
    makeCircle( 0.91, 0.80, 0.004);
    makeCircle( 0.92, 0.75, 0.003);
    makeCircle( 0.93, 0.65, 0.002);
    makeCircle( 0.93, 0.51, 0.004);
    makeCircle( 0.92, 0.45, 0.002);
    makeCircle( 0.92, 0.39, 0.003);
    makeCircle( 0.92, 0.19, 0.004);
    makeCircle( 0.93, 0.10, 0.005);
    makeCircle( 0.92,  -0.09, 0.004);
    makeCircle( 0.93,  -0.33, 0.003);
    makeCircle( 0.93, - 0.49, 0.004);
    makeCircle( 0.93, - 0.55, 0.005);
    makeCircle( 0.92, - 0.71, 0.004);
    makeCircle( 0.91, - 0.82, 0.002);
    //16
    makeCircle( 0.93, 0.88, 0.002);
    makeCircle( 0.91, 0.80, 0.003);
    makeCircle( 0.91, 0.58, 0.005);
    makeCircle( 0.92, 0.45, 0.004);
    makeCircle( 0.93, 0.32, 0.006);
    makeCircle( 0.91, 0.27, 0.004);
    makeCircle( 0.93, 0.00, 0.004);
    makeCircle( 0.93,  -0.25, 0.003);
    makeCircle( 0.93,  -0.33, 0.005);
    makeCircle( 0.93, - 0.55, 0.005);
    makeCircle( 0.92, - 0.63, 0.004);
    makeCircle( 0.91,  -0.82, 0.004);
    makeCircle( 0.93,  -0.88, 0.005);
    //17
    makeCircle( 0.83, 0.88, 0.003);
    makeCircle( 0.84, 0.80, 0.004);
    makeCircle( 0.83, 0.63, 0.006);
    makeCircle( 0.85, 0.55, 0.003);
    makeCircle( 0.85, 0.32, 0.004);
    makeCircle( 0.84, 0.19, 0.002);
    makeCircle( 0.85, 0.00, 0.003);
    makeCircle( 0.84,  -0.09, 0.004);
    makeCircle( 0.85,  -0.25, 0.004);
    makeCircle( 0.85,  -0.33, 0.003);
    makeCircle( 0.85,  -0.55, 0.005);
    makeCircle( 0.84, - 0.63, 0.006);
    makeCircle( 0.85,  -0.88, 0.005);
    makeCircle( 0.85,  -0.95, 0.004);
    //18
    makeCircle( 0.78, 0.88, 0.006);
    makeCircle( 0.78, 0.80, 0.005);
    makeCircle( 0.78, 0.75, 0.004);
    makeCircle( 0.78, 0.68, 0.003);
    makeCircle( 0.78, 0.39, 0.004);
    makeCircle( 0.78, 0.32, 0.002);
    makeCircle( 0.78, 0.19, 0.005);
    makeCircle( 0.78, 0.10, 0.0004);
    makeCircle( 0.78, - 0.17, 0.02);
    makeCircle( 0.78,  -0.25, 0.003);
    makeCircle( 0.78,  0.33, 0.004);
    makeCircle( 0.78,  -0.49, 0.004);
    makeCircle( 0.78, - 0.55, 0.004);
    makeCircle( 0.78, - 0.71, 0.005);
    makeCircle( 0.78, - 0.78, 0.006);
    makeCircle( 0.78,  -0.95, 0.005);
    //19
    makeCircle( 0.7, 0.88, 0.004);
    makeCircle( 0.72, 0.63, 0.005);
    makeCircle( 0.7, 0.55, 0.005);
    makeCircle( 0.7, 0.39, 0.004);
    makeCircle( 0.71, 0.12, 0.005);
    makeCircle( 0.7,  -0.09, 0.005);
    makeCircle( 0.7,  -0.17, 0.004);
    makeCircle( 0.72, - 0.25, 0.003);
    makeCircle( 0.7,  -0.33, 0.006);
    makeCircle( 0.71, - 0.41, 0.005);
    makeCircle( 0.7,  -0.63, 0.004);
    makeCircle( 0.71,  -0.71, 0.005);
    makeCircle( 0.7,  -0.78, 0.005);
    makeCircle( 0.71,  -0.88, 0.004);
    //20
    makeCircle( 0.61, 0.88, 0.005);
    makeCircle( 0.6, 0.80, 0.002);
    makeCircle( 0.61, 0.58, 0.003);
    makeCircle( 0.61, 0.51, 0.005);
    makeCircle( 0.6, 0.45, 0.005);
    makeCircle( 0.61, 0.27, 0.004);
    makeCircle( 0.61, 0.19, 0.004);
    makeCircle( 0.61,  -0.09, 0.003);
    makeCircle( 0.61,  -0.17, 0.004);
    makeCircle( 0.61, - 0.55, 0.005);
    makeCircle( 0.6,  -0.63, 0.003);
    makeCircle( 0.61, - 0.71, 0.005);
    makeCircle( 0.61, - 0.78, 0.003);
    makeCircle( 0.61,  -0.88, 0.004);
    //21
    makeCircle( 0.51, 0.80, 0.005);
    makeCircle( 0.53, 0.75, 0.002);
    makeCircle( 0.53, 0.51, 0.004);
    makeCircle( 0.51, 0.45, 0.005);
    makeCircle( 0.53, 0.27, 0.005);
    makeCircle( 0.53, 0.19, 0.008);
    makeCircle( 0.53, 0.10, 0.005);
    makeCircle( 0.53, 0.00, 0.004);
    makeCircle( 0.51,  -0.17, 0.003);
    makeCircle( 0.53,  -0.25, 0.005);
    makeCircle( 0.51,  -0.49, 0.003);
    makeCircle( 0.53,  -0.55, 0.004);
    makeCircle( 0.52,  -0.63, 0.005);
    makeCircle( 0.53,  -0.71, 0.004);
    makeCircle( 0.53,  -0.82, 0.006);
    makeCircle( 0.53,  -0.95, 0.005);
    //22
    makeCircle( 0.4, 0.89, 0.003);
    makeCircle( 0.42, 0.80, 0.004);
    makeCircle( 0.4, 0.58, 0.003);
    makeCircle( 0.4, 0.52, 0.002);
    makeCircle( 0.4, 0.39, 0.005);
    makeCircle( 0.42, 0.32, 0.004);
    makeCircle( 0.43, 0.10, 0.005);
    makeCircle( 0.4, 0.00, 0.003);
    makeCircle( 0.42,  -0.17, 0.003);
    makeCircle( 0.4,  -0.25, 0.004);
    makeCircle( 0.42,  -0.49, 0.003);
    makeCircle( 0.42,  -0.63, 0.002);
    makeCircle( 0.4,  -0.78, 0.003);
    makeCircle( 0.41,  -0.82, 0.002);
    //23
    makeCircle( 0.31, 0.88, 0.003);
    makeCircle( 0.32, 0.75, 0.002);
    makeCircle( 0.31, 0.58, 0.004);
    makeCircle( 0.30, 0.51, 0.003);
    makeCircle( 0.31, 0.39, 0.002);
    makeCircle( 0.32, 0.32, 0.003);
    makeCircle( 0.31, 0.27, 0.004);
    makeCircle( 0.31, 0.19, 0.003);
    makeCircle( 0.32, 0.10, 0.002);
    makeCircle( 0.31,  -0.17, 0.003);
    makeCircle( 0.31,  -0.25, 0.002);
    makeCircle( 0.31,  -0.42, 0.003);
    makeCircle( 0.32,  -0.55, 0.002);
    makeCircle( 0.31,  -0.71, 0.003);
    makeCircle( 0.32, -0.78, 0.003);
    makeCircle( 0.31, -0.82, 0.002);
    //24
    makeCircle( 0.21, 0.96, 0.004);
    makeCircle( 0.2, 0.80, 0.004);
    makeCircle( 0.2, 0.51, 0.004);
    makeCircle( 0.2, 0.39, 0.003);
    makeCircle( 0.21, 0.27, 0.004);
    makeCircle( 0.2, 0.19, 0.003);
    makeCircle( 0.2, 0.10, 0.002);
    makeCircle( 0.2,  -0.09, 0.003);
    makeCircle( 0.23, -0.17, 0.005);
    makeCircle( 0.2,  -0.25, 0.003);
    makeCircle( 0.24,  -0.33, 0.004);
    makeCircle( 0.22,  -0.31, 0.003);
    makeCircle( 0.2,  -0.63, 0.004);
    makeCircle( 0.21,  -0.71, 0.004);
    makeCircle( 0.24,  -0.82, 0.002);
    //25
    makeCircle( 0.12, 0.96, 0.004);
    makeCircle( 0.12, 0.75, 0.002);
    makeCircle( 0.11, 0.65, 0.003);
    makeCircle( 0.1, 0.45, 0.004);
    makeCircle( 0.11, 0.39, 0.002);
    makeCircle( 0.12, 0.27, 0.003);
    makeCircle( 0.11, 0.19, 0.004);
    makeCircle( 0.12,  -0.09, 0.004);
    makeCircle( 0.12,  -0.17, 0.006);
    makeCircle( 0.12,  -0.25, 0.004);
    makeCircle( 0.12,  -0.55, 0.007);
    makeCircle( 0.13,  -0.63, 0.005);
    makeCircle( 0.12,  -0.71, 0.004);
    makeCircle( 0.13,  -0.82, 0.003);
    makeCircle( 0.11,  -0.88, 0.005);
    makeCircle( 0.12,  -0.95, 0.004);


    glPopMatrix();


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


    glColor3ub (255,255,255);
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


    glColor3ub (255,255,255);
    makeCircle(0.240,0.09,0.02);




}


void DisplayLADV()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
     Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    Tanim();
    House();
    Childrenpark();
    VKansgrass();
    rainy_grass();


    WindMill();
    WindMillFan();
    threetree();
    FoodCorner();
    Medicine();
    Lamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    Divider();
    zebraCrossing();
    FenceDesign();
    DesignWall();
    Traffic_Light();
    sun();
    Car1();
    cloud();
    glLoadIdentity();
    glFlush();

}

void DisplayTRD()
{

    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    thada();
    rainCloud();
     //sun();
     Road();
     Divider();
     Wall();
     TownSTART();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     Car2();
     truck();
     Car1();

     rain();
     //Ncloud();
     glLoadIdentity();
     glFlush();

}

void DisplayWN()
{
     glClearColor(0.258f, .258f, 0.258f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     Road();
     MOON();
     Wall();
     FenceDesign();
     DesignWall();
     Grass();
     Soil();
     Divider();
     Mountain1();
     Mountain();

     Grass_Under_Hills();
     SmallHut();
     Hut();
     WJourneyTree();
     CircleTreeWinter();
     WLeftmostTree();
     //forestGrass();

     GrassUndertree();
     snow();
     cloud();
     FCar1();
     glLoadIdentity();
     glFlush();

}

void DisplayVSD()
{

   glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Flower_Under_HillsL();
    Grass_Flower_Under_HillsR();
    Grass_Under_Hills();
    Childrenpark();
    Tanim();
    VSpringflower();
    House();

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
    Traffic_Light();
    WindMillFan();
    Divider();
    zebraCrossing();
    sun();
    Car1();
    cloud();
    glLoadIdentity();
    glFlush();


}

void DisplayVSN()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Star();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Flower_Under_HillsL();
    Grass_Flower_Under_HillsR();
    Grass_Under_Hills();
    Childrenpark();
    Tanim();
    VSpringflower();
    House();
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
    Traffic_Light();
    WindMillFan();
    Divider();
    zebraCrossing();
    MOON();
    Car1();
    Ncloud();
    glLoadIdentity();
    glFlush();



}

void Display1s()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    Childrenpark();
    Tanim();
    House();
    WindMill();

    threetree();
    FoodCorner();
    Medicine();
    Human();
    Lamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    FenceDesign();
    DesignWall();

    Traffic_Light();
    WindMillFan();
    Divider();
    zebraCrossing();
    sun();
    Car1();
    Car2();
    cloud();
    glLoadIdentity();
    glFlush();

}

void DisplayTRN()
{
    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     thada();
     rainCloud();
     Star();
     //MOON();
     Road();
     Divider();
     Wall();

     TownSTART();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     Car2();
     truck();
     Car1();
     rain();
     Ncloud();
     glLoadIdentity();
     glFlush();

}

void DisplayVWD()
{

  glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    Childrenpark();
    WTanim();
    House();
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
    Traffic_Light();
    WindMillFan();
    Divider();
    zebraCrossing();
    snow();
    sun();
    Car1();
    cloud();

    glLoadIdentity();
    glFlush();





}

void DisplayVWN()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Star();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    Childrenpark();
    WTanim();
    House();
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
    Traffic_Light();
    WindMillFan();
    Divider();
    zebraCrossing();
    snow();
    MOON();
    Car1();
    Ncloud();
    glLoadIdentity();
    glFlush();



}
void DisplayLANV()
{

  glClearColor(0.258f, .258f, 0.258f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  Star();
     Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    Tanim();
    House();
    Childrenpark();
    VKansgrass();
    rainy_grass();


    WindMill();
    WindMillFan();
    threetree();
    FoodCorner();
    Medicine();
    Lamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    Divider();
    zebraCrossing();
    FenceDesign();
    DesignWall();
    Traffic_Light();
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
     Mountain1();
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
     FCar1();
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
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     Car2();
     truck();
     Car1();

     cloud();
     cloud();
     glLoadIdentity();
     glFlush();

}
void DisplayTWD()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

     sky();
     sun();
     Road();
     Divider();
     Wall();

     TownSTART();
     snowman();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     truck();
     snow();
     Car2();
     truck();
     Car1();


     cloud();

     glLoadIdentity();
     glFlush();

}

void DisplayTWN()
{
   glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     Star();
     Road();
     Divider();

     Wall();

     TownSTART();
     snowman();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     snow();
      MOON();
      Ncloud();
     Car1();
     Car2();
     glLoadIdentity();
     glFlush();


}
void DisplayWD()
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
     Mountain1();
     Mountain();
     Grass_Under_Hills();
     SmallHut();
     Hut();
     WJourneyTree();
     CircleTreeWinter();
     WLeftmostTree();
     //forestGrass();
     GrassUndertree();
snow();
     cloud();

     FCar1();
     glLoadIdentity();
     glFlush();


}

void DisplayTN()
{

     glClearColor(0.258f, .258f, 0.258f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     Star();
     Road();
     Divider();
     Wall();

     TownSTART();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
      MOON();
      Ncloud();
      Car2();
      truck();
     Car1();

     glLoadIdentity();
     glFlush();




}
void DisplaySD()
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
     Mountain1();
     Mountain();
     Grass_Flower_Under_HillsL();
     Grass_Flower_Under_HillsR();
     Grass_Under_Hills();
     SmallHut();
     Hut();

     JourneyTree();
     CircleTree();
     LeftmostTree();
     forestGrass();
     GrassUndertree();
     Springflower();
     cloud();
     FCar1();
     glLoadIdentity();
     glFlush();


}

void DisplayJN()
{

     glClearColor(0.258f, .258f, 0.258f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     Star();
     Road();
     Wall();
     FenceDesign();
     DesignWall();
     Grass();
     Soil();
     Divider();
     Mountain1();
     Mountain();
     Grass_Under_Hills();
     SmallHut();
     Hut();

     JourneyTree();
     CircleTree();
     LeftmostTree();
     forestGrass();
     GrassUndertree();
     MOON();
     Ncloud();
     FCar1();
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
     Mountain1();
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
     FCar1();
     glLoadIdentity();
     glFlush();



}
void DisplayRN()
{
    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     thada();
     rainCloud();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    threetree();
    FoodCorner();
    Medicine();

    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    FenceDesign();
    Tanim();
    House();
    rainy_grass();
    DesignWall();
    Childrenpark();
    WindMill();
    WindMillFan();


    threetree();

    FoodCorner();
    Medicine();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    Divider();
    zebraCrossing();
    FenceDesign();
    DesignWall();

    Traffic_Light();
    NLamppost();
    MOON();
    rain();
    Car1();
    Ncloud();


    glLoadIdentity();
    glFlush();
}
void DisplayNS()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    Star();
    Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    threetree();
    FoodCorner();
    Medicine();

    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    FenceDesign();
    DesignWall();
    Childrenpark();
    WindMill();
    Tanim();
    House();
    WindMillFan();
    threetree();

    FoodCorner();
    Medicine();
    NLamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    Divider();
    zebraCrossing();
    FenceDesign();
    DesignWall();
    Traffic_Light();
    MOON();
    Car1();
    Ncloud();
    glLoadIdentity();
    glFlush();


}

void DisplayJR()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

     sky();
     thada();
     rainCloud();

     Road();
     Wall();
     FenceDesign();
     DesignWall();
     Grass();
     Soil();
     Divider();
     Mountain1();
     Mountain();
     Grass_Under_Hills();
     SmallHut();
     Hut();

     JourneyTree();
     CircleTree();
     LeftmostTree();
     forestGrass();
     GrassUndertree();
     //sun();
     rain();
    // Ncloud();
     FCar1();
     glLoadIdentity();
     glFlush();


}

void DisplayJRN()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     thada();
     rainCloud();
     Road();
     Wall();
     FenceDesign();
     DesignWall();
     Grass();
     Soil();
     Divider();
     Mountain1();
     Mountain();
     Grass_Under_Hills();
     SmallHut();
     Hut();

     JourneyTree();
     CircleTree();
     LeftmostTree();
     forestGrass();
     GrassUndertree();
     MOON();
     rain();
     Ncloud();
     FCar1();
     glLoadIdentity();
     glFlush();

}

void DisplaySN()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     //sky();
     Star();
     Road();
     Wall();
     FenceDesign();
     DesignWall();
     Grass();
     Soil();
     Divider();
     Mountain1();
     Mountain();
     Grass_Flower_Under_HillsL();
    Grass_Flower_Under_HillsR();
     Grass_Under_Hills();
     SmallHut();
     Hut();

     JourneyTree();
     CircleTree();
     LeftmostTree();
     forestGrass();
     GrassUndertree();
     Springflower();
     MOON();
     Ncloud();
     FCar1();
     glLoadIdentity();
     glFlush();





}

void DisplayRD()
{
    glClearColor(0.68f, .839f, 0.945f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    thada();
    rainCloud();

     Grass();
    Soil();
    Mountain1();
    Mountain();
    Grass_Under_Hills();
    Tanim();
    House();
    rainy_grass();
    Childrenpark();
    WindMill();
    WindMillFan();
    threetree();
    FoodCorner();
    Medicine();
    Lamppost();
    Bench();
    MailBox();
    Road();
    Fence();
    Wall();
    Divider();
    zebraCrossing();
    FenceDesign();
    DesignWall();
    Traffic_Light();
    //sun();
    Car1();
    Car2();
    rain();
    //BigCloud();
    //Ncloud();
    glLoadIdentity();
    glFlush();

}

void DisplayJLN()
{

     glClearColor(0.258f, .258f, 0.258f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     Star();
     Road();
     sun();
     Wall();
     FenceDesign();
     DesignWall();
     Grass();
     Soil();
     Divider();
     Mountain1();
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
     FCar1();
     glLoadIdentity();
     glFlush();

}

void DisplayTLAD()
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
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     Car2();
     truck();
     Car1();
     cloud();

     glLoadIdentity();
     glFlush();

}

void DisplayTSD()
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
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
     Car2();
     truck();
     Car1();


     cloud();

     glLoadIdentity();
     glFlush();
}


void DisplayTSN()
{
 glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     Star();
     Road();
     Divider();

     Wall();

     TownSTART();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
      MOON();
      Ncloud();
      Car2();
     Car1();
     truck();
     glLoadIdentity();
     glFlush();
}


void DisplayTLAN()
{

    glClearColor(0.258f, .258f, 0.258f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     Star();
     Road();
     Divider();

     Wall();

     TownSTART();
     Townbuilding();
     Townbuilding2();
     Townbuilding3();
     Townbuilding4();
     juicebar();
     Sonid();
     Divider();
     zebraCrossing();
      MOON();
      Ncloud();
     Car1();
     Car2();
     glLoadIdentity();
     glFlush();
}


void handleKeypress(unsigned char key, int x, int y) {

    if (key == '1'){   //Summer village
            glutDestroyWindow(1);
            glutInitWindowSize(1240, 680);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
            glutCreateWindow("SEASSONS");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(Display1s);



    }
   else if (key=='3')  //Sunmmer Town
            {
             glutDisplayFunc(Display3);
            }

    else if (key == '2'){  //Summer Jungle

            glutDisplayFunc(Display2);
    }
    else if (key=='H')   //Late Autumn Jungle Day
            {
               glutDisplayFunc(Display2S);
            }
    else if (key == '4'){     //Village Summer Night

           glutDisplayFunc(DisplayNS);

    }

    else if (key == 'd'){     //Village Rainy Night

           glutDisplayFunc(DisplayRN);

    }

    else if (key == 'D'){     //Village Rainy Day

           glutDisplayFunc(DisplayRD);

    }

    else if (key == 'B'){     //The spring (basanta) Jungle Day

           glutDisplayFunc(DisplaySD);

    }

    else if (key == 'K'){     //The Winter Jungle Day

           glutDisplayFunc(DisplayWD);

    }
    else if (key == 'k'){     //The Winter Jungle Night

           glutDisplayFunc(DisplayWN);

    }
    else if (key == '6'){     //The Summer  Night Town

           glutDisplayFunc(DisplayTN);

    }
    else if (key == '5'){     //The Summer  Night Jungle

           glutDisplayFunc(DisplayJN);

    }
    else if (key == 'E'){     //The Rainy Day Jungle

           glutDisplayFunc(DisplayJR);

    }

    else if (key == 'e'){     //The Rainy Night Jungle

           glutDisplayFunc(DisplayJRN);

    }
    else if (key == 'b'){     //The spring (basanta) Jungle Night

           glutDisplayFunc(DisplaySN);

    }

     else if (key=='h')   //Late Autumn Jungle Night
            {
               glutDisplayFunc(DisplayJLN);
            }

    else if (key=='G')   //Late Autumn Village Day
            {
               glutDisplayFunc(DisplayLADV);
            }
   else if (key=='g')   //Late Autumn Village Night
            {
               glutDisplayFunc(DisplayLANV);
            }
   else if (key=='f')   //Town Rainy Night
            {
               glutDisplayFunc(DisplayTRN);
            }

   else if (key=='F')   //Town Rainy Day
            {
               glutDisplayFunc(DisplayTRD);
            }


   else if (key=='J')   //Village Winter Day
            {
               glutDisplayFunc(DisplayVWD);
            }
   else if (key=='j')   //Village Winter Night
            {
               glutDisplayFunc(DisplayVWN);
            }
   else if (key=='A')   //Village Spring Day
            {
               glutDisplayFunc(DisplayVSD);
            }

  else if (key=='a')   //Village Spring Night
            {
               glutDisplayFunc(DisplayVSN);
            }

  else if (key=='L')   //Town Winter  Day
            {
               glutDisplayFunc(DisplayTWD);
            }

  else if (key=='l')   //Town Winter Night
            {
               glutDisplayFunc(DisplayTWN);
            }

 else if (key=='I')   //Town LATE AUTUMN  Day
            {
               glutDisplayFunc(DisplayTLAD);
            }

  else if (key=='i')   //Town LATE AUTUMN Night
            {
               glutDisplayFunc(DisplayTLAN);
            }

   else if (key=='C')   //Town SPRING  Day
            {
               glutDisplayFunc(DisplayTSD);
            }

  else if (key=='c')   //Town SPRING Night
            {
               glutDisplayFunc(DisplayTSN);
            }

}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1240, 680);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
    glutCreateWindow("BISMILLAH");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(1000, update, 0);
    glutMainLoop();
    return 0;
}

