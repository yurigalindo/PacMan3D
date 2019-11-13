#include <GL/glut.h>


//closed
void pacman1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,0.0);

    glPushMatrix();
        glScalef(2.6,1,1);
        glutSolidCube(5);
    glPopMatrix();

    glPushMatrix();
        glScalef(1,2.6,1);
        glutSolidCube(5);
    glPopMatrix();

    glPushMatrix();
        glScalef(1.8,2.2,1);
        glutSolidCube(5);
    glPopMatrix();

    glPushMatrix();
        glScalef(2.2,1.8,1);
        glutSolidCube(5);
    glPopMatrix();

    glFlush();
}

//half
void pacman2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,0.0);

    glPushMatrix();
        glTranslatef(0,-6,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5,0);
        glScalef(9,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-3.5,0);
        glScalef(11,2,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-1.4,-2,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.9,-1,0);
        glScalef(7,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3.9,0,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.9,1,0);
        glScalef(7,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-1.4,2,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,3.5,0);
        glScalef(11,2,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5,0);
        glScalef(9,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//open
void pacman3(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,0.0);

    glPushMatrix();
        glTranslatef(0,-6,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-1,-5,0);
        glScalef(7,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,-4,0);
        glScalef(7,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,-3,0);
        glScalef(6,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3.5,-2,0);
        glScalef(6,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,-1,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4.5,0,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,1,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3.5,2,0);
        glScalef(6,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,3,0);
        glScalef(6,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,4,0);
        glScalef(7,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-1,5,0);
        glScalef(7,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6,0);
        glScalef(5,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//red 4 skirt
void blinky1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//red 3 skirt
void blinky2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//pink 4 skirt
void pinky1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.753,0.796);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//pink 3 skirt
void pinky2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.753,0.796);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//cyan 4 skirt
void inky1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//cyan 3 skirt
void inky2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//orange 4 skirt
void clyde1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.647,0.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//orange 3 skirt
void clyde2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.647,0.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//blue 4 skirt
void ghost1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,0.0,1.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(-2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//blue 3 skirt
void ghost2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.0,0.0,1.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(-2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//white 4 skirt
void ghost3(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2.5,5.5,0);
        glScalef(3,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6,5.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(6.5,6.5,0);
        glScalef(1,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1.0,0.0,0.0);

    glPushMatrix();
        glTranslatef(-2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//white 3 skirt
void ghost4(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(0,-6.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-5.5,0);
        glScalef(8,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-4.5,0);
        glScalef(10,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-2.5,0);
        glScalef(12,3,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2,0);
        glScalef(14,6,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,5.5,0);
        glScalef(4,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,6.5,0);
        glScalef(2,1,1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(1.0,0.0,0.0);

    glPushMatrix();
        glTranslatef(-2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,-1,0.6);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(4,2.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,3.5,0.6);
        glScalef(2,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5.5,3.5,0.6);
        glScalef(1,1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//down
void eyes1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(-3,-0.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,-0.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-0.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-0.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0.0,0.0,1.0);

    glPushMatrix();
        glTranslatef(-3,1,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,1,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//up
void eyes2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(-3,-3.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-3,-3.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-3.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-3.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0.0,0.0,1.0);

    glPushMatrix();
        glTranslatef(-3,-5,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(3,-5,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//left
void eyes3(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(-4,-1.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-4,-1.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,-1.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(2,-1.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0.0,0.0,1.0);

    glPushMatrix();
        glTranslatef(-5,-1,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(1,-1,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

//right
void eyes4(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glTranslatef(4,-1.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(4,-1.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,-1.5,0.6);
        glScalef(2,5,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-2,-1.5,0.6);
        glScalef(4,3,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glColor3f(0.0,0.0,1.0);

    glPushMatrix();
        glTranslatef(-1,-1,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(5,-1,0.7);
        glScalef(2,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();
}

/*
int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Pac-Man");
    glutDisplayFunc(eyes3);
    init();
    glutMainLoop();
}
*/
