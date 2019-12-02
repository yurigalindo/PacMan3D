#include <stdio.h>
#include <stdlib.h>
#include "pacman_sprites2.c"
#include <math.h>
#define PI 3.14159265

int MAP[31][28] = {0};
int dots[31][28] = {0};

float angle =  270.0;
float step = 5.0;
float val = PI/360;

int frame = 0;

typedef struct player{
	int x, y;
} player;

int power=0;
player powerUps[4];
player ghosts[4];
player PacMan;
int pontos=0;
int move(player *PacMan,char axis,int move){
	if(axis=='y'){
		if(MAP[PacMan->y-move][PacMan->x]){
			PacMan->y-=move;
			return 1;
		}
	}
	else{
		if(MAP[PacMan->y][PacMan->x+move]){
			PacMan->x+=move;
			return 1;
		}
	}
	return 0;
}
void defineMap(){
	int i,j;
	//Linhas que preenchem tudo menos o contorno
	for (i=1;i<14;i++){
		MAP[5][i]=MAP[5][27-i]=1;
		MAP[29][i]=MAP[29][27-i]=1;
		//Linhas que preenchem tudo menos o meio
		if(i!=13){
			MAP[1][i]=MAP[1][27-i]=1;
			MAP[20][i]=MAP[20][27-i]=1;
			if(i==1||i==6||i==12){
				MAP[4][i]=MAP[4][27-i]=1;
				MAP[3][i]=MAP[3][27-i]=1;
				MAP[2][i]=MAP[2][27-i]=1;
				MAP[21][i]=MAP[21][27-i]=1;
				MAP[22][i]=MAP[22][27-i]=1;
			}
			if(i==1||i==6||i==9){
				MAP[6][i]=MAP[6][27-i]=1;
				MAP[7][i]=MAP[7][27-i]=1;
			}
			if(i!=7 && i!=8){
				MAP[8][i]=MAP[8][27-i]=1;
				MAP[26][i]=MAP[26][27-i]=1;
			}
			if(i==1||i==12){
				MAP[28][i]=MAP[28][27-i]=1;
				MAP[27][i]=MAP[27][27-i]=1;
			}
			if(i==3||i==6||i==9){
				MAP[25][i]=MAP[25][27-i]=1;
				MAP[24][i]=MAP[24][27-i]=1;
			}
			if(i==6||i==12){
				MAP[9][i]=MAP[9][27-i]=1;
				MAP[10][i]=MAP[10][27-i]=1;
			}
		}
		if(i!=4&&i!=5){
			MAP[23][i]=MAP[23][27-i]=1;
		}
	}
	//Linhas centrais
	for (i=6;i<14;i++){
		MAP[14][i]=MAP[14][27-i]=1;
		if(i==6||i==9){
			MAP[18][i]=MAP[18][27-i]=1;
			MAP[19][i]=MAP[19][27-i]=1;
		}
		if(i!=7 && i!= 8){
			MAP[17][i]=MAP[17][27-i]=1;
			MAP[11][i]=MAP[11][27-i]=1;
			MAP[16][i]=MAP[16][27-i]=1;
			MAP[15][i]=MAP[15][27-i]=1;
			MAP[11][i]=MAP[11][27-i]=1;
			MAP[12][i]=MAP[12][27-i]=1;
			MAP[13][i]=MAP[13][27-i]=1;
		}
	}
	/*
	for (i=4;i<10;i++){
		if(i==4 || i== 8){
			MAP[7][i]=1;
			MAP[7][18-i]=1;
		}
		if(i==4 || i==6){
			MAP[13][i]=1;
			MAP[13][18-i]=1;
			MAP[9][i]=1;
			MAP[9][18-i]=1;
			MAP[11][i]=1;
			MAP[11][18-i]=1;
		}
		if(i==4 || i==6 || i==5){
			MAP[10][i]=1;
			MAP[10][18-i]=1;
		}
		if(i!=5){
			MAP[8][i]=1;
			MAP[8][18-i]=1;
			MAP[12][i]=1;
			MAP[12][18-i]=1;
		}
	}
	*/
	for(i=1;i<30;i++){
		for(j=1;j<14;j++){
			if(MAP[i][j]){
				if(!(j>=7 && i>=9 && i<=19)){
					dots[i][j]=1;
					dots[i][27-j]=1;
				}
			}
		}
	}
}

void defineGhosts(){

	ghosts[1].x=10;
	ghosts[1].y=13;
	ghosts[2].x=11;
	ghosts[2].y=13;
	ghosts[3].x=13;
	ghosts[3].y=13;
	ghosts[0].x=12;
	ghosts[0].y=13;
}

void definePowerUps(){
	powerUps[0].x=1;
	powerUps[0].y=1;
	powerUps[1].x=26;
	powerUps[1].y=1;
	powerUps[2].x=1;
	powerUps[2].y=23;
	powerUps[3].x=26;
	powerUps[3].y=23;
}

void eatDots(int x, int y){
	if(dots[y][x]){
		dots[y][x]=0;
		pontos++;
	}
}
int isPowerUp(int x,int y){
	int i;
	for(i=0;i<4;i++){
		if(powerUps[i].x==x && powerUps[i].y==y)
			return i;
	}
	return -1;
}

void eatPowerUp(int x,int y){
	int is = isPowerUp(x,y);
	if( is!=-1){
		powerUps[is].x=-1;
		powerUps[is].y=-1;
		power=1;
		pontos+=4;
	}

}

void interactGhost(int x,int y){
	int i,dx,dy;
	for(i=0;i<4;i++){
		dx=ghosts[i].x-x;
		dy=ghosts[i].y-y;
		if((-1<=dx && dx<=1)&&(-1<=dy && dy<=1) ){
			if(power){
			ghosts[i].x=-1;
			ghosts[i].y=-1;
			pontos+=10;
			}
			else{
				PacMan.x=-1;
				PacMan.y=-1;
			}
			return;
		}

	}
}

void draw(){
	int axis,dir,moved;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	maze();

	glPushMatrix();
        glTranslatef(PacMan.x*8.-108.,PacMan.y*8.-120.,0);
        switch(frame%3){
        	case 0:
        		pacman1();
        		break;
        	case 1:
        		pacman2();
        		break;
        	case 2:
        		pacman3();
        		break;
        }
    glPopMatrix();

    eatDots(PacMan.x,PacMan.y);
    eatPowerUp(PacMan.x,PacMan.y);
    int i,j;
    for (i = 1; i < 30; ++i)
    {
    	for (j = 1; j < 29; ++j)
    	{
    		if(dots[i][j]){
    			glPushMatrix();
			        glTranslatef(j*8.-108.,i*8.-120.,0);
			        dot();
			    glPopMatrix();
    		}
    	}
    }
    interactGhost(PacMan.x,PacMan.y);
	for(i=0;i<4;i++){
		moved=0;
		
		while(!moved){
			axis=rand()%2;
			dir=rand()%3;
			dir--;
			if(axis){
				moved=move(&ghosts[i],'x',dir);
			}
			else{
				moved=move(&ghosts[i],'y',dir);
			}
		}
		if(power){
			glPushMatrix();
		        glTranslatef(ghosts[i].x*8.-108.,ghosts[i].y*8.-120.,0);
		        if(frame%2)
		        	ghost2();
		        else
		        	ghost1();
		    glPopMatrix();
		}
		else{
			glPushMatrix();
		        glTranslatef(ghosts[i].x*8.-108.,ghosts[i].y*8.-120.,0);
		        if(frame%2)
		        	clyde2();
		        else
		        	clyde1();
		    glPopMatrix();
		}
	}
    for(i=0;i<4;++i){
    	glPushMatrix();
	        glTranslatef(powerUps[i].x*8.-108.,powerUps[i].y*8.-120.,0);
	        Power();
	    glPopMatrix();
    }
    interactGhost(PacMan.x,PacMan.y);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(PacMan.x*8.-108.+5.*(sin(angle*val)+cos(angle*val)),PacMan.y*8.-120+12.*(sin(angle*val)-cos(angle*val)),30,
              PacMan.x*8.-108.,PacMan.y*8.-120.,0.,
              0., -1.0, 0.0);
    
    
}

void SpecialKeys (int key, int x, int y){
   switch(key){
      case GLUT_KEY_LEFT:

		move(&PacMan,'x',+1);
        break;
      case GLUT_KEY_RIGHT:
        move(&PacMan,'x',-1);
         break;
      case GLUT_KEY_UP:
         move(&PacMan,'y',+1);
         break;
      case GLUT_KEY_DOWN:
         move(&PacMan,'y',-1);
         break;
   }
   ++frame;
   if(power)
       ++power;
   if(power==30)
   		power=0;
   glutPostRedisplay();
}


void Keyboard (unsigned char key, int x, int y){
    switch(key){

        case 'a':
        	if(angle>=225)
          		angle-=3*step;
          break;
        case 'd':
        	if(angle<=315)
          		angle+=3*step;
          break;
    }
    if(power)
   		++power;
   	if(power==30)
   		power=0;
    ++frame;
    glutPostRedisplay();
}
int main(int argc, char *argv[]){
	
	defineMap();
	definePowerUps();
	defineGhosts();
	PacMan.x=1;
	PacMan.y=1;
	int axis,dir;
	char c;
	int i,j;
	
	/*
	while(1){
		scanf("%c",&c);

		if(c=='a'){
			move(&PacMan,'x',-1);

		}
		if(c=='d'){
			move(&PacMan,'x',+1);

		}
		if(c=='s'){
			move(&PacMan,'y',+1);

		}
		if(c=='w'){
			move(&PacMan,'y',-1);

		}
		interactGhost(PacMan.x,PacMan.y);
		for(i=0;i<4;i++){
			axis=rand()%2;
			dir=rand()%3;
			dir--;
			if(axis){
				move(&ghosts[i],'x',dir);
			}
			else{
				move(&ghosts[i],'y',dir);
			}
		}
		eatDots(PacMan.x,PacMan.y);
		eatPowerUp(PacMan.x,PacMan.y);
		interactGhost(PacMan.x,PacMan.y);
		scanf("%c",&c);
		for(i=0;i<22;i++){
			for(j=0;j<19;j++){
				if(PacMan.y==i && PacMan.x==j){
					printf("*");
				}
				else{
					if(MAP[i][j]){
						if (isGhost(j,i)!=-1){
							printf("A");
						}
						else if(isPowerUp(j,i)!=-1)
							printf("O");
						else if(dots[i][j])
							printf("-");
						else
							printf(" ");
					}
					else
						printf("%c",178);
				}
			}
			printf("\n");
		}
	}
	*/
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(672, 744);
    glutCreateWindow("Pac-Man");
    glutDisplayFunc(draw);
    glutSpecialFunc(SpecialKeys);
    glutKeyboardFunc(Keyboard);
    init();
    glutMainLoop();
	return 1;
}