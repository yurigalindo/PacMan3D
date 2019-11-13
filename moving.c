#include "pacman_sprites.c"

#include <GL/glut.h>

void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION); //define que a matrix é a de projeção
    glLoadIdentity(); //carrega a matrix de identidade

    gluPerspective(120.0, 1.0, 0.1, 100.0); //define uma projeção perspectiva
    
    glViewport(0, 0, 500, 500);

}


int posX=0,posY=0;
int phX=6,phY=6;
void SpecialKeys (int key, int x, int y){
   switch(key){
      case GLUT_KEY_LEFT:
         posX-=10;
         break;
      case GLUT_KEY_RIGHT:
         posX+=10;
         break;
      case GLUT_KEY_UP:
         posY+=10;
         break;
      case GLUT_KEY_DOWN:
         posY-=10;
         break;
   }
   glutPostRedisplay();
}

void Keyboard (unsigned char key, int x, int y){
    switch(key){
       case 'w':
          phY+=10;
          break;
        case 'a':
          phX-=10;
          break;
        case 's':
          phY-=10;
          break;
        case 'd':
          phX+=10;
          break;
    }
    glutPostRedisplay();
}


void World(){
  int offX,offY;
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
  if(posX>30)
    offX=30;
  else if (posX<-30)
    offX=-30;
  else
    offX=posX;
  if(posY>15)
    offY=15;
  else if (posY<-15)
    offY=-15;
  else
    offY=posY;
	gluLookAt(offX,offY-3,20,
              offX,offY,0.0,
              0.0, 1.0, 0.0); //vetor view-up (V)  //vetor view-up
	glPushMatrix();
	glTranslatef(posX,posY,0);
	pacman2();
	glPopMatrix();

  glTranslatef(phX,phY,0);
  blinky1();
  glPopMatrix();

}

int main(int argc, char *argv[]){
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Pac-Man (3D!)");
    glutDisplayFunc(World);
    glutSpecialFunc(SpecialKeys);
    glutKeyboardFunc(Keyboard);
    init();
    glutMainLoop();
}