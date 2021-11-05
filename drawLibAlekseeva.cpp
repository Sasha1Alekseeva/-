#include "drawLibAlekseeva.h"
void drawCat(float r,float g,float b){
    glBegin(GL_TRIANGLES);
    glColor3f(.9,.3,.9);//начало тела2
    glVertex2f(-.2,-.3);
    glColor3f(.3,.3,.9);
    glVertex2f( .2,-0.3);
    glColor3f(1,.1,.4);
    glVertex2f(  0,.2);

    glColor3f(r,g,b);
    glVertex2f(.2,.3);//хвост2
    glVertex2f(.5,.4);
    glVertex2f(.0,-.1);

    glColor3f(1,.1,.4);
    glVertex2f(0,.2);//голова2
    glVertex2f(-0.2,0.5);
    glVertex2f(0.2,0.5);

    glVertex2f(-.2,.5);//ушко 1
    glVertex2f(0,.5);
    glVertex2f(-.1,.7);

    glVertex2f(0.2,0.5);//ушко 2
    glVertex2f(0,0.5);
    glVertex2f(0.1,0.7);
    glEnd();
}

void drawFl(float x,float y, float z){
    glPushMatrix();
    glScalef(x,y,z);
    glBegin(GL_TRIANGLES);
    glColor3f(.1,.7,.1);//стебель,палка цветка
    glVertex2f(.6,-.1);
    glColor3f(.1,.7,.1);
    glVertex2f(.65,-.1);
    glColor3f(.1,.7,.1);
    glVertex2f(.7,1);

    glColor3f(.5,.1,.2);//лепесток 2
    glVertex2f(.7,1);
    glColor3f(.5,.1,.2);
    glVertex2f(.3,1.3);
    glColor3f(.5,.1,.2);
    glVertex2f(1.1,1.3);

    glColor3f(.5,.1,.3);//лепесток 1
    glVertex2f(.7,1);
    glColor3f(.5,.1,.3);
    glVertex2f(.1,1.2);
    glColor3f(.5,.1,.3);
    glVertex2f(1.3,1.2);

    glColor3f(0.9,0.3,0.7);//лепестки3
    glVertex2f(0.7,1);
    glVertex2f(0.1,1);
    glVertex2f(0.6,1.1);

    glVertex2f(0.7,1);
    glVertex2f(0.8,1.1);
    glVertex2f(1.3,1);


    glColor3f(.1,.7,.1);//лист 1
    glVertex2f(.62,.2);
    glColor3f(.1,.7,.1);
    glVertex2f(.77,.4);
    glColor3f(.1,.7,.1);
    glVertex2f(.79,.8);

    glColor3f(.1,.7,.1);//лист 2
    glVertex2f(.9,.6);
    glColor3f(.1,.7,.1);
    glVertex2f(.77,.4);
    glColor3f(.1,.7,.1);
    glVertex2f(.79,.8);
    glEnd();
    glPopMatrix();
}

void drawSun(float r,float g,float b){
    glPushMatrix();
    glColor3f(r,g,b);
    glBegin(GL_TRIANGLES);//луч вниз
    glVertex2f(0,0);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0);

    glVertex2f(0.1,0);
    glVertex2f(0.05,0.1);
    glVertex2f(0.15,0.05);

    glVertex2f(0.15,0.05);
    glVertex2f(0.05,0.1);
    glVertex2f(0.15,0.1);

    glVertex2f(0.15,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0.15);

    glVertex2f(0.1,0.15);
    glVertex2f(0.05,0.1);
    glVertex2f(0,0.15);

    glVertex2f(0,0.15);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.1);

    glVertex2f(-0.05,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.05);

    glVertex2f(-0.05,0.05);
    glVertex2f(0.05,0.1);
    glVertex2f(0,0);
    glEnd();
    glPopMatrix();
}

void drawClaud(float r,float g,float b){
    glPushMatrix();
    glColor3f(r,g,b);
    drawSun(1,1,1);
    glTranslatef(0.15,0.05,0);
    drawSun(1,1,1);
    glTranslatef(0.17,-0.02,0);
    drawSun(1,1,1);
    glTranslatef(-0.14,-0.05,0);
    drawSun(1,1,1);
    glPopMatrix();
}
void mushroom(float x,float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.8,0.8,0.9);
    glBegin(GL_QUADS);
    glVertex2f(0.4,-0.75);
    glVertex2f(.36,-0.75);
    glVertex2f(.36,-.7);
    glVertex2f(.4,-.7);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.2,0.2);
    glVertex2f(.345,-.707);
    glVertex2f(.415,-.707);
    glVertex2f(.383,-.68);
    glEnd();
    glPopMatrix();
}

void Tarelka(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);

    //фары
    glBegin(GL_TRIANGLES);
    glColor3f(.9,.8,.2);
    glVertex2f(1.2,0);
    glVertex2f(1.25,-.05);
    glVertex2f(1.2,-.1);

    glVertex2f(0,0);
    glVertex2f(0,-0.1);
    glVertex2f(-0.05,-0.05);

    glEnd();

    //верх тарелки
    glColor3f(.6,.6,1);
    glPushMatrix();
    glTranslatef(0.6,0,0);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=-90;i<91;i+=10)
        glVertex2f(0.5*sin(i*M_PI/180),0.3*cos(i*M_PI/180));
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);

    //свет
    glColor3f(.9,.8,.2);
    glVertex2f(.8,-0.3);
    glVertex2f(.4,-.3);
    glVertex2f(.3,-0.9);
    glVertex2f(.9,-.9);

    //жилой отсек тарелки
    glColor3f(.6,.6,.7);
    glVertex2f(0,-.1);
    glVertex2f(0,0);
    glVertex2f(1.2,0);
    glVertex2f(1.2,-.1);

    //низ тарелки
    glColor3f(.2,.3,.5);
    glVertex2f(0,-.1);
    glVertex2f(1.2,-.1);
    glVertex2f(.8,-0.3);
    glVertex2f(.4,-.3);

    //окошечко
    glColor3f(0,0,0);
    glVertex2f(.4,.06);
    glVertex2f(.4,0.14);
    glVertex2f(.8,0.14);
    glVertex2f(.8,.06);
    glEnd();
    glPopMatrix();
}

void Car(float x,float y,float z){
    z=0;
    glPushMatrix();
    glScalef(1.5,1.5,0);
    glTranslatef(x,y,z);
    glColor3f(0.7,0.1,0.2);
    //корпус1
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(0,0.2);
    glVertex2f(1,0.2);
    glVertex2f(1,0);
    glEnd();

    //корпус2
    glBegin(GL_QUADS);
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,0.2);
    glEnd();

   //колёса
    glColor3f(0.1,0.1,0.1);
    glPushMatrix();
    glTranslatef(0.2,0,0);
    glScalef(0.2,0.2,0);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<360;i+=10)
        glVertex2f(0.5*sin(i*M_PI/180),0.5*cos(i*M_PI/180));
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8,0,0);
    glScalef(0.2,0.2,0);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0;i<360;i+=10)
        glVertex2f(0.5*sin(i*M_PI/180),0.5*cos(i*M_PI/180));
    glEnd();
    glPopMatrix();

    //окно
    glColor3f(0.1,0.3,0.6);
    glBegin(GL_QUADS);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.35);
    glVertex2f(0.7,0.35);
    glVertex2f(0.7,0.25);
    glEnd();
    glPopMatrix();
}

void drawHome(float x, float y, float z){
    glPushMatrix();
    glColor3f(0.35,0.1,0.35);
    glTranslatef(x,y,z);
    //основание
    glBegin(GL_QUADS);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.6,-0.3);
    glVertex2f(0,-0.3);
    glVertex2f(0,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0,-0.6);
    glVertex2f(0,-0.3);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.1,-0.5);
    glEnd();

    //2 этаж
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-0.3);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.05,-0.1);
    glEnd();

    //крыша
    glColor3f(0.125,0,0.075);
    glBegin(GL_QUADS);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.6,-0.1);
    glVertex2f(0.05,-0.1);
    glVertex2f(0,-0.35);
    glEnd();

    //дверь
    glBegin(GL_QUADS);
    glVertex2f(0.03,-0.56);
    glVertex2f(0.03,-0.4);
    glVertex2f(0.05,-0.375);
    glVertex2f(0.05,-0.53);
    glEnd();

    //okno
    glColor3f(0,0.6,1);
    glBegin(GL_QUADS);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.45,-0.4);
    glVertex2f(-0.15,-0.4);
    glVertex2f(-0.15,-0.5);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.3,-0.5);
    glEnd();
    glPopMatrix();
}

void drawElka(float x,float y, float z){
    z=0;
    glPushMatrix();
    glTranslatef(x,y,z);
    glColor3f(0.15,0.05,0.05);
    glBegin(GL_QUADS);
    glVertex2f(-0.8,-0.7);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.7,-0.4);
    glVertex2f(-0.7,-0.7);
    glEnd();

    glColor3f(0.05,0.15,0.05);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.9,-0.55);
    glVertex2f(-0.75,-0.3);
    glVertex2f(-0.6,-0.55);
    glEnd();

    glColor3f(0.05,0.15,0.05);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.85,-0.35);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.65,-0.35);
    glEnd();
    glPopMatrix();
}

void zabor(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.3,0.15,0.2);
    glBegin(GL_QUADS);
    glVertex2f(0.9,-0.52);
    glVertex2f(0.9,-0.35);
    glVertex2f(0.95,-0.35);
    glVertex2f(0.95,-0.52);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.9,-0.35);
    glVertex2f(0.925,-0.3);
    glVertex2f(0.95,-0.35);
    glEnd();
    glPopMatrix();
}

void alien(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.1,0.7,0.5);
    glBegin(GL_QUADS);
    glVertex2f(0,0.025);//голова
    glVertex2f(-0.1,0.1);
    glVertex2f(0.2,0.1);
    glVertex2f(0.1,0.025);

    glVertex2f(-0.1,0.1);
    glVertex2f(-0.1,0.2);
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,0.1);

    glVertex2f(-0.1,0.2);
    glVertex2f(-0.15,0.3);
    glVertex2f(0.25,0.3);
    glVertex2f(0.2,0.2);

    glVertex2f(-0.15,0.3);
    glVertex2f(-0.15,0.4);
    glVertex2f(0.25,0.4);
    glVertex2f(0.25,0.3);

    glVertex2f(-0.15,0.4);
    glVertex2f(-0.1,0.5);
    glVertex2f(0.2,0.5);
    glVertex2f(0.25,0.4);

    glColor3f(0,0,0);//глаза
    glVertex2f(-0.05,0.15);
    glVertex2f(0,0.15);
    glVertex2f(0,0.1);
    glVertex2f(-0.05,0.1);

    glVertex2f(0.15,0.15);
    glVertex2f(0.1,0.15);
    glVertex2f(0.1,0.1);
    glVertex2f(0.15,0.1);

    glColor3f(0.1,0.7,0.5);
    glVertex2f(0.025,0.025);//шея
    glVertex2f(0.075,0.025);
    glVertex2f(0.075,-0.15);
    glVertex2f(0.025,-0.15);

    glVertex2f(-0.1,-0.15);//груд.клетка
    glVertex2f(0.2,-0.15);
    glVertex2f(0.15,-0.4);
    glVertex2f(-0.05,-0.4);

    glVertex2f(-0.05,-0.4);//животик
    glVertex2f(0.15,-0.4);
    glVertex2f(0.15,-0.6);
    glVertex2f(-0.05,-0.6);

    glVertex2f(0,-0.6);//нога1
    glVertex2f(0.05,-0.6);
    glVertex2f(0.025,-1);
    glVertex2f(-0.025,-1);

    glVertex2f(0.05,-0.6);//нога2
    glVertex2f(0.1,-0.6);
    glVertex2f(0.1255,-1);
    glVertex2f(0.075,-1);

    glVertex2f(-0.05,-0.42);//руки1
    glVertex2f(-0.05,-0.44);
    glVertex2f(-0.4,-0.38);
    glVertex2f(-0.4,-0.34);

    glVertex2f(0.15,-0.42);//
    glVertex2f(0.15,-0.44);
    glVertex2f(0.55,-0.38);
    glVertex2f(0.55,-0.34);

    glVertex2f(-0.05,-0.15);//руки2
    glVertex2f(-0.1,-0.15);
    glVertex2f(-0.12,-0.6);
    glVertex2f(-0.1,-0.6);

    glVertex2f(0.2,-0.15);//
    glVertex2f(0.25,-0.15);
    glVertex2f(0.27,-0.6);
    glVertex2f(0.25,-0.6);
    glEnd();
    glPopMatrix();
}

    void drawBunny(float x,float y,float z){
    glPushMatrix();
    glTranslatef(x,y,z);
    glScalef(0.8,0.8,0);
    glColor3f(0.7,0.7,0.7);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,0);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0);

    glVertex2f(0.1,0);
    glVertex2f(0.05,0.1);
    glVertex2f(0.15,0.05);

    glVertex2f(0.15,0.05);
    glVertex2f(0.05,0.1);
    glVertex2f(0.15,0.1);

    glVertex2f(0.15,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(0.1,0.15);

    glVertex2f(0.1,0.15);
    glVertex2f(0.05,0.1);
    glVertex2f(0,0.15);

    glVertex2f(0,0.15);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.1);

    glVertex2f(-0.05,0.1);
    glVertex2f(0.05,0.1);
    glVertex2f(-0.05,0.05);

    glVertex2f(-0.05,0.05);
    glVertex2f(0.05,0.1);
    glVertex2f(0,0);

    glVertex2f(0,0);
    glVertex2f(-0.05,-0.05);
    glVertex2f(0.05,-0.05);

    glVertex2f(0.1,0);
    glVertex2f(0.15,-0.05);
    glVertex2f(0.06,-0.05);

    glVertex2f(-0.12,0.2);
    glVertex2f(-0.14,0.25);
    glVertex2f(-0.10,0.25);

    glVertex2f(-0.07,0.2);
    glVertex2f(-0.09,0.25);
    glVertex2f(-0.05,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.04,0.1);
    glVertex2f(-0.04,0.2);
    glVertex2f(-0.15,0.2);
    glVertex2f(-0.15,0.1);

    glVertex2f(-0.14,0.1);
    glVertex2f(-0.14,0.15);
    glVertex2f(-0.17,0.15);
    glVertex2f(-0.17,0.1);

    glVertex2f(0.12,0.1);
    glVertex2f(0.12,0.15);
    glVertex2f(0.17,0.15);
    glVertex2f(0.17,0.1);
    glEnd();
    glPopMatrix();
    }
