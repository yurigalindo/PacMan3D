#include <GL/glut.h>

void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION); //define que a matrix é a de projeção
    glLoadIdentity(); //carrega a matrix de identidade

    gluPerspective(120.0, 1.0, 0.1, 100.0); //define uma projeção perspectiva
    
    glViewport(0, 0, 500, 500);
     //vetor view-up (V)  //vetor view-up
    //glOrtho(-112,112,124,-124,-7,7);
    glPushMatrix();
}

//closed
void pacman1(){
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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
    //
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

//static
void maze(){
    //

    glColor3f(0.0,0.0,1.0);

    //outermaze

    //topbar
    glPushMatrix();
        glTranslatef(0,-122,0);
        glScalef(224,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //botbar
    glPushMatrix();
        glTranslatef(0,122,0);
        glScalef(224,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar1
    glPushMatrix();
        glTranslatef(-110,-84,0);
        glScalef(4,72,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar2
    glPushMatrix();
        glTranslatef(-90.5,-46,0);
        glScalef(43,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar3
    glPushMatrix();
        glTranslatef(-71,-8,0);
        glScalef(4,72,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar4
    glPushMatrix();
        glTranslatef(-90.5,30,0);
        glScalef(43,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar5
    glPushMatrix();
        glTranslatef(-110,76,0);
        glScalef(4,88,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar6
    glPushMatrix();
        glTranslatef(-100,76,0);
        glScalef(16,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rightbar1
    glPushMatrix();
        glTranslatef(110,-84,0);
        glScalef(4,72,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rightbar2
    glPushMatrix();
        glTranslatef(90.5,-46,0);
        glScalef(43,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rightbar3
    glPushMatrix();
        glTranslatef(71,-8,0);
        glScalef(4,72,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rightbar4
    glPushMatrix();
        glTranslatef(90.5,30,0);
        glScalef(43,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rightbar5
    glPushMatrix();
        glTranslatef(110,76,0);
        glScalef(4,88,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftbar6
    glPushMatrix();
        glTranslatef(100,76,0);
        glScalef(16,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //midbar
    glPushMatrix();
        glTranslatef(0,-104,0);
        glScalef(8,32,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangles

    //rectangle1
    glPushMatrix();
        glTranslatef(-80,-96,0);
        glScalef(24,16,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle2
    glPushMatrix();
        glTranslatef(-37,-96,0);
        glScalef(32,16,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle3
    glPushMatrix();
        glTranslatef(37,-96,0);
        glScalef(32,16,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle4
    glPushMatrix();
        glTranslatef(80,-96,0);
        glScalef(24,16,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle5
    glPushMatrix();
        glTranslatef(-80,-68,0);
        glScalef(24,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle6
    glPushMatrix();
        glTranslatef(80,-68,0);
        glScalef(24,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle7
    glPushMatrix();
        glTranslatef(-48,16,0);
        glScalef(8,32,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle8
    glPushMatrix();
        glTranslatef(48,16,0);
        glScalef(8,32,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle9
    glPushMatrix();
        glTranslatef(-36,52,0);
        glScalef(32,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //rectangle10
    glPushMatrix();
        glTranslatef(36,52,0);
        glScalef(32,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //Ts

    //topleftT
    glPushMatrix();
        glTranslatef(-48,-44,0);
        glScalef(8,56,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-32,-44,0);
        glScalef(24,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //toprightT
    glPushMatrix();
        glTranslatef(48,-44,0);
        glScalef(8,56,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(32,-44,0);
        glScalef(24,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //topmidT
    glPushMatrix();
        glTranslatef(0,-68,0);
        glScalef(56,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,-52,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //midmidT
    glPushMatrix();
        glTranslatef(0,28,0);
        glScalef(56,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,44,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //botmidT
    glPushMatrix();
        glTranslatef(0,76,0);
        glScalef(56,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,92,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //botleftT
    glPushMatrix();
        glTranslatef(-48,84,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-56,100,0);
        glScalef(72,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //botrightT
    glPushMatrix();
        glTranslatef(48,84,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(56,100,0);
        glScalef(72,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //Ls

    //leftL
    glPushMatrix();
        glTranslatef(-80,52,0);
        glScalef(24,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-72,68,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //leftR
    glPushMatrix();
        glTranslatef(80,52,0);
        glScalef(24,8,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(72,68,0);
        glScalef(8,24,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //middlesquare

    //square
    glPushMatrix();
        glTranslatef(0,6,0);
        glScalef(48,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-26,-8,0);
        glScalef(4,32,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-16,-22,0);
        glScalef(16,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(26,-8,0);
        glScalef(4,32,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(16,-22,0);
        glScalef(16,4,0.1);
        glutSolidCube(1);
    glPopMatrix();

    //door
    glPushMatrix();
        glColor3f(1.0,1.0,1.0);
        glTranslatef(0,-22,0);
        glScalef(16,2,0.1);
        glutSolidCube(1);
    glPopMatrix();

    glFlush();

}

void dot(){
    //

    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glutSolidSphere(0.5,50,50);
    glPopMatrix();

    glFlush();
}

void Power(){
    //

    glColor3f(1.0,1.0,1.0);

    glPushMatrix();
        glutSolidSphere(4,50,50);
    glPopMatrix();

    glFlush();
}
/*

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(672, 744);
    glutCreateWindow("Pac-Man");
    glutDisplayFunc(maze);
    init();
    glutMainLoop();
}


*/