#include <GL/glut.h>
#include<cmath>
#include<drawLibAlekseeva.h>

/*
    место для творчества
*/


    void drawGraf(){
    glColor3f(0.2,0.5,0.8);
    glBegin(GL_LINES);
    glVertex2f(-6,0);
    glVertex2f(6,0);

    glColor3f(0.2,0.8,0.5);
    glVertex2f(0,6);
    glVertex2f(0,-6);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINE_STRIP);
    for(float i=-2.0;i<5.0;i+=0.1)
//        glVertex2f(i*0.5,-0.23*(i*i)+i);//1 график
//        glVertex2f(i,-0.1*i*i+2*i+1); //2график
//        glVertex2f(i,-2*i*i+3*i-1);   //3 график
        glVertex2f(i,(-3+i)*(-3*i)+2*i+5); //4 график

    glEnd();
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна здесь жить


     glPushMatrix();
     glScalef(0.2,0.2,0);
     drawGraf();
     glPopMatrix();



   /*
     //небо
    glColor3f(0.3,0.4,0.8);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,-1);
    glEnd();

    //земля
    glColor3f(0.2,0.54,0.2);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(-1,-0.5);
    glVertex2f(1,-0.5);
    glVertex2f(1,-1);
    glEnd();

    //забор
    for(int j=0;j<20;j++){
        zabor(-0.1*j,0);
    }

    //кот
    glPushMatrix();
    glTranslatef(0.7,-0.5,0);
    glScalef(0.5,0.5,0);
    drawCat(.1,.1,.8);
    glPopMatrix();

    //цветы
    glPushMatrix();
    glTranslatef(0.6,-0.9,0);
    drawFl(0.2,0.2,0);
    glTranslatef(0.2,0.15,0);
    drawFl(0.2,0.2,0);
    glTranslatef(-0.4,0,0);
    drawFl(0.2,0.2,0);
    glPopMatrix();

    //дом
    glPushMatrix();
    drawHome(0,-0.1,0);
    glPopMatrix();

    //лес
    for (int i=0;i<3;i++)
    drawElka(-0.1*i,-0.2*i);

    //машина
    glPushMatrix();
    glScalef(0.3,0.3,0);
    Car(-1.5,-1.9);
    glPopMatrix();

    //нло
    glPushMatrix();
    glScalef(0.4,0.4,0);
    Tarelka(-0.4,0.4);
    glPopMatrix();

    //солнце
    glPushMatrix();
    glTranslatef(0,0.7,0);
    drawSun(1,1.2,0);
    glPopMatrix();

    //облака
    glPushMatrix();
    for (int i =0;i<2;i++){
    glTranslatef(-0.2*i,0.3,0);
    drawClaud(1,1,1);
    }
    glPopMatrix();

    //пришелец
    glPushMatrix();
    glScalef(0.3,0.3,0);
    alien(0,0);
    glPopMatrix();

    //армия грибов
    glPushMatrix();
    for (int i=0;i<180;i+=10){
        mushroom(0.1,0);
        glPushMatrix();
        glTranslatef(0.1,0,0);
        mushroom(-0.4*sin(i*M_PI/180),0.1*cos(i*M_PI/180));
        glPopMatrix();
    }
    glPopMatrix();

    //заяц
    drawBunny(0,-0.95,0);
    */

    // эта функция должна здесь жить
    glutSwapBuffers();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(renderScene);
    glutMainLoop();
    return 0;
}
