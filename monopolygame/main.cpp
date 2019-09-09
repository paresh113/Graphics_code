#include<windows.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include <GL/glut.h>
using namespace std;

int in_guide=1;
void dice1(int y);
void dice2(int y);
void guti1(int y);
void guti2(int y);
void text();
void text2();
void text3();
void board();
void display(void);
void displaydice(void);
void displayguti1(void);
void displayguti2(void);
void call(int w);
int v=0,taka1=1500,taka2=1500;
int t1=0,t2=0,v1,v2,t3,t41,t42;

void rolldice()
{
srand(time(0));
v2 = 1+(rand()% 6) ;
v1 =1+(rand()%6);
displaydice();
}
void key(unsigned char key,int x,int y)
{

	if(key=='q' || key=='Q')
		call(0);
	if(key=='1')
	{
		call(1);
	}
	if(key=='2')
	{
		call(2);
	}
glutPostRedisplay();
}
void call(int w)
{
    switch(w)
		  {
		    case 1:
		         rolldice();
                  break;
            case 0:
                 exit(0);
			     break;
            case 2:
		         rolldice();
                 break;
		  }
		  glFlush();
}
void display(void)

{
    int x=0;
     board();
     text();
dice1(v1);
dice2(v2);
guti1(t1);
guti2(t2);
}

void displaydice(void)
{
 glFlush();
dice1(v1);
dice2(v2);
  v=v+1;
 if(v%2==0)
{
    int t=v1+v2;
 t2=t2+t;
 t3=t;
 t42=t2;
 cout<<"p2"<<t2<<endl;
 if(t2>39)
    {t2=t2-40;
    taka2=taka2+200;
    }

 }
else
{
    int t=v1+v2;
        t1=t1+t;
        t3=t;
  cout<<"p1"<<t1<<endl;
  t41=t1;
   if(t1>39){
t1=t1-40; taka1=taka1+200;
   }

 }
displayguti1();
displayguti2();
}
void displayguti1(void)
{
     guti1(t1);
}
void displayguti2(void)
{
    guti2(t2);
}


void board()
{
    //1
     glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0 );
      glVertex2f (50, 0);
      glVertex2f (50, 50);
      glVertex2f (0, 50);
	glEnd();
glFlush();

//2
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+50, 0 );
      glVertex2f (50+50, 0);
      glVertex2f (50+50, 50);
      glVertex2f (0+50, 50);
	glEnd();
glFlush();

//3
glColor3f(10.0, 0.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+100, 0 );
      glVertex2f (50+100, 0);
      glVertex2f (50+100, 50);
      glVertex2f (0+100, 50);
	glEnd();
glFlush();

//4
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+150, 0 );
      glVertex2f (50+150, 0);
      glVertex2f (50+150, 50);
      glVertex2f (0+150, 50);
	glEnd();
glFlush();

//5
glColor3f(10.0, 0.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+200, 0 );
      glVertex2f (50+200, 0);
      glVertex2f (50+200, 50);
      glVertex2f (0+200, 50);
	glEnd();
glFlush();

//6
glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+250, 0 );
      glVertex2f (50+250, 0);
      glVertex2f (50+250, 50);
      glVertex2f (0+250, 50);
	glEnd();
glFlush();

//7
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+300, 0 );
      glVertex2f (50+300, 0);
      glVertex2f (50+300, 50);
      glVertex2f (0+300, 50);
	glEnd();
glFlush();

//8
glColor3f(10.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+350, 0 );
      glVertex2f (50+350, 0);
      glVertex2f (50+350, 50);
      glVertex2f (0+350, 50);
	glEnd();
glFlush();

//9
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+400, 0 );
      glVertex2f (50+400, 0);
      glVertex2f (50+400, 50);
      glVertex2f (0+400, 50);
	glEnd();
glFlush();

//10
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+450, 0 );
      glVertex2f (50+450, 0);
      glVertex2f (50+450, 50);
      glVertex2f (0+450, 50);
	glEnd();
glFlush();

//11
glColor3f(1.0, 1.0, 1.0);
 glBegin(GL_POLYGON);
      glVertex2f (0+500, 0 );
      glVertex2f (50+500, 0);
      glVertex2f (50+500, 50);
      glVertex2f (0+500, 50);
	glEnd();
glFlush();

//12
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+50 );
      glVertex2f (50, 0+50);
      glVertex2f (50, 50+50);
      glVertex2f (0, 50+50);
	glEnd();
glFlush();

//13
glColor3f(10.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+100 );
      glVertex2f (50, 0+100);
      glVertex2f (50, 50+100);
      glVertex2f (0, 50+100);
	glEnd();
glFlush();

//14
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0 +150);
      glVertex2f (50, 0+150);
      glVertex2f (50, 50+150);
      glVertex2f (0, 50+150);
	glEnd();
glFlush();

//37
glColor3f(10.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+200 );
      glVertex2f (50, 0+200 );
      glVertex2f (50, 50+200 );
      glVertex2f (0, 50+200 );
	glEnd();
glFlush();

//36
glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+250 );
      glVertex2f (50, 0+250);
      glVertex2f (50, 50+250);
      glVertex2f (0, 50+250);
	glEnd();
glFlush();

//35
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0 +300);
      glVertex2f (50, 0+300);
      glVertex2f (50, 50+300);
      glVertex2f (0, 50+300);
	glEnd();
glFlush();

//34
glColor3f(10.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+350 );
      glVertex2f (50, 0+350);
      glVertex2f (50, 50+350);
      glVertex2f (0, 50+350);
	glEnd();
glFlush();

//
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+400 );
      glVertex2f (50, 0+400);
      glVertex2f (50, 50+400);
      glVertex2f (0, 50+400);
	glEnd();
glFlush();

//20
glColor3f(10.0, 10.0, 0.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+450 );
      glVertex2f (50, 0+450);
      glVertex2f (50, 50+450);
      glVertex2f (0, 50+450);
	glEnd();
glFlush();

//21
glColor3f(1.0, 1.0, 1.0);
 glBegin(GL_POLYGON);
      glVertex2f (0, 0+500 );
      glVertex2f (50, 0+500);
      glVertex2f (50, 50+500);
      glVertex2f (0, 50+500);
	glEnd();
glFlush();

//22
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+50 );
      glVertex2f (50+500, 0+50);
      glVertex2f (50+500, 50+50);
      glVertex2f (0+500, 50+50);
	glEnd();
glFlush();

//23
glColor3f(10.0, 0.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+100 );
      glVertex2f (50+500, 0+100);
      glVertex2f (50+500, 50+100);
      glVertex2f (0+500, 50+100);
	glEnd();
glFlush();

//24
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+150 );
      glVertex2f (50+500, 0+150);
      glVertex2f (50+500, 50+150);
      glVertex2f (0+500, 50+150);
	glEnd();
glFlush();

//25
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+200 );
      glVertex2f (50+500, 0+200);
      glVertex2f (50+500, 50+200);
      glVertex2f (0+500, 50+200);
	glEnd();
glFlush();

//26
glColor3f(0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0 +250);
      glVertex2f (50+500, 0 +250);
      glVertex2f (50+500, 50 +250);
      glVertex2f (0+500, 50 +250);
	glEnd();
glFlush();

//27
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+300 );
      glVertex2f (50+500, 0+300);
      glVertex2f (50+500, 50+300);
      glVertex2f (0+500, 50+300);
	glEnd();
glFlush();

//17
glColor3f(10.0, 0.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+350 );
      glVertex2f (50+500, 0+350);
      glVertex2f (50+500, 50+350);
      glVertex2f (0+500, 50+350);
	glEnd();
glFlush();

//18
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+400 );
      glVertex2f (50+500, 0+400);
      glVertex2f (50+500, 50+400);
      glVertex2f (0+500, 50+400);
	glEnd();
glFlush();

//19
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+450 );
      glVertex2f (50+500, 0+450);
      glVertex2f (50+500, 50+450);
      glVertex2f (0+500, 50+450);
	glEnd();
glFlush();

//31
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
      glVertex2f (0+500, 0+500 );
      glVertex2f (50+500, 0+500 );
      glVertex2f (50+500, 50+500 );
      glVertex2f (0+500, 50+500 );
	glEnd();
glFlush();

//32
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50, 500 );
      glVertex2f (100, 500 );
      glVertex2f (100, 550 );
      glVertex2f (50, 550 );
	glEnd();
glFlush();

//33
glColor3f(10.0, 0.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+50, 500 );
      glVertex2f (100+50, 500 );
      glVertex2f (100+50, 550 );
      glVertex2f (50+50, 550 );
	glEnd();
glFlush();

//34
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+100, 500 );
      glVertex2f (100+100, 500 );
      glVertex2f (100+100, 550 );
      glVertex2f (50+100, 550 );
	glEnd();
glFlush();

//35
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+150, 500 );
      glVertex2f (100+150, 500 );
      glVertex2f (100+150, 550 );
      glVertex2f (50+150, 550 );
	glEnd();
glFlush();

//36
glColor3f(0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
      glVertex2f (50+200, 500 );
      glVertex2f (100+200 , 500  );
      glVertex2f (100+200 , 550  );
      glVertex2f (50+200 , 550  );
	glEnd();
glFlush();

//37
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+250, 500 );
      glVertex2f (100+250, 500 );
      glVertex2f (100+250, 550 );
      glVertex2f (50+250, 550 );
	glEnd();
glFlush();

//38
glColor3f(10.0, 0.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+300, 500 );
      glVertex2f (100+300, 500 );
      glVertex2f (100+300, 550);
      glVertex2f (50+300, 550);
	glEnd();
glFlush();

//39
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+350, 500 );
      glVertex2f (100+350, 500 );
      glVertex2f (100+350, 550 );
      glVertex2f (50+350, 550 );
	glEnd();
glFlush();

//40
glColor3f(10.0, 10.0, 0.0);
glBegin(GL_POLYGON);
      glVertex2f (50+400, 500 );
      glVertex2f (100+400, 500 );
      glVertex2f (100+400, 550 );
      glVertex2f (50+400, 550);
	glEnd();
   if (v%2==0)
	text2();
	else
        text3();
glFlush();
}

void text()
{
    char menu[8000];
    strcpy(menu,"START\tLAMA\tVAGGO\tMERA\tAykor\tSylet\tAmbar\tSujog\tJinda\tBondor\tJail \n--->\tBajar\tporikkha\tBajar\t200\tStation\tKhana\tGrohon\tBajar\tBajar\tDekha");
    int len,x=0,y=28;
    len = strlen(menu);
    glColor3f(0,0,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
       {
	  if(menu[i]=='\n')
	  {   x=0;
	      y-=15;
		  glRasterPos2i(x,y);
	  }
	else  if(menu[i]=='\t')
	  {   x+=50;
		  glRasterPos2i(x,y);
	  }
	  else
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
	}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    strcpy(menu,"GoTo\tKhulsi\tPani\tAgrbad\tNew\tCTG\t2No.\tSujog\tChadga\tRastar\tBisram\nJail\t\tSubidha\t\tMarket\tStation\tGate\tGrohon\t\tMatha\tkoro");
    len = strlen(menu);
    glColor3f(0,0,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    x=10;
    y=525;
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
       {
	  if(menu[i]=='\n')
	  {   x=5;
	      y-=15;
		  glRasterPos2i(x,y);

	  }
	else  if(menu[i]=='\t')
	  {   x+=50;
		  glRasterPos2i(x,y);
	  }
	  else
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
	}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
 strcpy(menu,"Wari\tkacua \nMotijil\tHajigonj \nVaggo\tVaggo \nMirpur\tMotlob \nDhaka\tChandpur \nSujog\tCollege \nBanani\tNondi \nKor\tBiddut\nGulshan\tAkuya");
    len = strlen(menu);
    glColor3f(0,0,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    x=0;
    y=475;
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
       {
	  if(menu[i]=='\n')
	  {   x=0;
	      y=y-50;
		  glRasterPos2i(x,y);
	  }
	 else  if(menu[i]=='\t')
	  {   x+=500;
		  glRasterPos2i(x,y);
	  }
	  else
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
	}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
   strcpy(menu,"porikkha\tporikkha\n\nstation\tstation\nGrohon\tRoad\n\tBari\nPorishod\tsubidha");
    len = strlen(menu);
    glColor3f(0,0,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    x=0;
    y=360;
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
       {
	  if(menu[i]=='\n')
	  {   x=0;
	      y=y-50;
		  glRasterPos2i(x,y);
	  }
	  else if(menu[i]=='\t')
	  {   x+=500;
		  glRasterPos2i(x,y);
	  }
	  else
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
	}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );



 strcpy(menu,"player 1 owned :Lama bajar,Sylet station,Jinda bajar,Akuya\nNondi Bari,Chandpur Station,Hajigong,Rastarmatha,\n2No Gate,New Market,PaniSubidha,Wari,Mirpur,Banani ");
    len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=75,y=475;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
 {
     if(menu[i]=='\n')
	  {     x=175;
	        y-=15;
		  glRasterPos2i(x,y);
	  }
	  else if(menu[i]=='\t')
	  {   x+=5;
		  glRasterPos2i(x,y);
	  }
	  else
	    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    strcpy(menu,"player 2 owned :Mera bajar,Ambar Khana,Bondor bajar,BiddutSubidha\nCollege Road,Motlob,Kachua,Chadga,CTG Station,\nAgrabad,Khulsi,Motijil,Dhaka Station,Gulshan ");
    len = strlen(menu);
    glColor3f(112,128,144);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=75,y=475-75;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
 {
     if(menu[i]=='\n')
	  {     x=175;
	        y-=15;
		  glRasterPos2i(x,y);
	  }
	  else if(menu[i]=='\t')
	  {   x+=5;
		  glRasterPos2i(x,y);
	  }
	  else
	    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

     strcpy(menu," Player 1 Taka \t\t\t\t\t\t Player 2 Taka");
    len = strlen(menu);
    glColor3f(112,128,144);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=75,y=125;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
 {
     if(menu[i]=='\n')
	  {     x=175;
	        y-=15;
		  glRasterPos2i(x,y);
	  }
	  else if(menu[i]=='\t')
	  {   x+=50;
		  glRasterPos2i(x,y);
	  }
	  else
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


  itoa (taka1,menu,10);
  len = strlen(menu);
    glColor3f(0,v,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=100,y=100;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

  itoa (taka2,menu,10);
  len = strlen(menu);
    glColor3f(0,v,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=405,y=100;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


  itoa (v,menu,10);
  len = strlen(menu);
    glColor3f(0,v,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=75,y=350;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

  itoa (t3,menu,10);
  len = strlen(menu);
    glColor3f(0,v,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=270,y=96;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
  if(t41>39){
        t41=t1;
menu[8000];
   strcpy(menu,"You will get 200 Taka For Coming Start ");
int    len,x=75,y=250;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
  }
if(t42>39){
        t42=t2;
menu[8000];
   strcpy(menu,"You will get 200 Taka For Coming Start ");
int    len,x=250,y=250;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
  }

}


void text2()
{
     char menu[8000];
    strcpy(menu,"Player 1 Turn");
    int len,x=75,y=325;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    strcpy(menu,"Mr. Player 2 It's:   \nYou have to go:\nYou have to pay: ");
     len,x=290,y=325;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
       {
	  if(menu[i]=='\n')
	  {   x=290;
	      y-=19;
		  glRasterPos2i(x,y);
	  }
	  else
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
	}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    if(t2==0)
    {
        strcpy(menu,"Start");
     len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


    itoa (0,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


    }


if(t2==1)
    {
        taka1=taka1+2;
    taka2=taka2-2;
    strcpy(menu,"Lama Bajar ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==2)
    {
    strcpy(menu,"Vaggo porikkha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==3)
    {
    strcpy(menu,"Mera Bajar ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==4)
    {

    taka2=taka2-200;
    strcpy(menu,"Aykor ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (200,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==5)
    {
        taka1=taka1+50;
    taka2=taka2-50;
    strcpy(menu,"Sylet Station ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (50,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==6)
    {
    strcpy(menu,"Ambar khana");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==7)
    {
    strcpy(menu,"Sujog grohon ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==8)
    {
        taka1=taka1+6;
    taka2=taka2-6;
    strcpy(menu,"Jinda Bajar ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

   itoa (6,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


    }

    if(t2==9)
    {
    strcpy(menu,"Bondor Bajar ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==10)
    {
    strcpy(menu,"Jail Dekha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==11)
    {
        taka1=taka1+14;
    taka2=taka2-14;
    strcpy(menu,"Akuya ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (14,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==12)
    {
    strcpy(menu,"Biddut subidha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==13)
    {
        taka1=taka1+10;
    taka2=taka2-10;
    strcpy(menu,"Nondi Bari ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (10,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==14)
    {

    strcpy(menu,"College Road ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==15)
    {
        taka1=taka1+50;
    taka2=taka2-50;
    strcpy(menu,"Chandpur station ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (50,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==16)
    {
    strcpy(menu,"Motlob ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==17)
    {
    strcpy(menu,"Vaggo porikkha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==18)
    {taka1=taka1+14;
    taka2=taka2-14;

    strcpy(menu,"Hajigonj ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (14,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==19)
    {
    strcpy(menu,"Kachua ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==20)
    {
    strcpy(menu,"Bisram koro ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==21)
    {
        taka1=taka1+18;
    taka2=taka2-18;
    strcpy(menu,"Rastar matha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (18,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==22)
    {
    strcpy(menu,"Chadga");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==23)
    {
    strcpy(menu,"Sujog grohon ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==24)
    {
        taka1=taka1+20;
    taka2=taka2-20;
    strcpy(menu,"2 no gate ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (20,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==25)
    {

    strcpy(menu,"Ctg station ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==26)
    {
        taka1=taka1+22;
    taka2=taka2-22;
    strcpy(menu,"New Market ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (22,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==27)
    {
    strcpy(menu,"Agrabad ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==28)
    {
        taka1=taka1+(t3*4);
    taka2=taka2-(t3*4);
    strcpy(menu,"Pani Subidha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (t3*4,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==29)
    {
    strcpy(menu,"Khulsi ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==30)
    {
        taka2=taka2-100;
        t2=10;
    strcpy(menu,"Goto jail ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (100,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==31)
    {
        taka1=taka1+26;
    taka2=taka2-26;
    strcpy(menu,"Wari ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (26,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==32)
    {
    strcpy(menu,"Motijil ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==33)
    {
    strcpy(menu,"Vaggo porikkha ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==34)
    {taka1=taka1+30;
    taka2=taka2-30;
    strcpy(menu,"Mirpur ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (30,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==35)
    {
    strcpy(menu,"Dhaka Station ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==36)
    {
    strcpy(menu,"Sujog Grohon ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==37)
    {
        taka1=taka1+35;
    taka2=taka2-35;
    strcpy(menu,"Banani ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (35,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t2==38)
    {
    taka2=taka2-100;
    strcpy(menu,"Kor Porishod ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (100,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=395,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t2==39)
    {
    strcpy(menu,"Gulshan ");
    len,x=388,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

   itoa (t3,menu,10);
  len = strlen(menu);
    glColor3f(0,v,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    x=410,y=325;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

}


void text3()
{
     char menu[8000];
    strcpy(menu,"Player 2 Turn");
    int len,x=375,y=325;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


    strcpy(menu,"Mr. Player 1 It's:   \nYou have to go:\nYou have to pay: ");
     len,x=75,y=325;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
       {
	  if(menu[i]=='\n')
	  {   x=75;
	       y-=19;
		  glRasterPos2i(x,y);
	  }
	  else
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
	}
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


if(t1==0)
    {
    strcpy(menu,"Start ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (0,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }


    if(t1==1)
    {
    strcpy(menu,"Lama Bajar ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==2)
    {

    strcpy(menu,"Vaggo porikkha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==3)
    {
        taka1=taka1-4;
        taka2=taka2+4;
    strcpy(menu,"Mera Bajar ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (4,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    }

    if(t1==4)
    {
        taka1=taka1-200;
    strcpy(menu,"Aykor ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (200,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==5)
    {
    strcpy(menu,"Sylet Station ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==6)
    {
         taka1=taka1-6;
       taka2=taka2+6;
    strcpy(menu,"Ambar khana");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (6,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==7)
    {
    strcpy(menu,"Sujog grohon ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==8)
    {
    strcpy(menu,"Jinda Bajar ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==9)
    {
         taka1=taka1-8;
        taka2=taka2+8;
    strcpy(menu,"Bondor Bajar ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (8,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==10)
    {
    strcpy(menu,"Jail Dekha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==11)
    {
    strcpy(menu,"Akuya ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==12)
    {
         taka1=taka1-(t3*4);
        taka2=taka2+(t3*4);
    strcpy(menu,"Biddut subidha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    itoa (t3*4,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==13)
    {
    strcpy(menu,"Nondi Bari ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==14)
    {taka1=taka1-12;
    taka2=taka2+12;
    strcpy(menu,"College Road ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (12,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==15)
    {

    strcpy(menu,"Chandpur station ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==16)
    {
       taka1=taka1-14;
    taka2=taka2+14;
    strcpy(menu,"Motlob ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (14,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==17)
    {
    strcpy(menu,"Vaggo porikkha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==18)
    {
    strcpy(menu,"Hajigonj ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==19)
    {
        taka1=taka1-16;
    taka2=taka2+16;
    strcpy(menu,"Kachua ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (16,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==20)
    {
    strcpy(menu,"Bisram koro ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==21)
    {
    strcpy(menu,"Rastar matha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==22)
    {
        taka1=taka1-18;
    taka2=taka2+18;
    strcpy(menu,"Chadga");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (18,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==23)
    {
    strcpy(menu,"Sujog grohon ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==24)
    {
    strcpy(menu,"2 no gate ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==25)
    {
        taka1=taka1-50;
    taka2=taka2+50;
    strcpy(menu,"Ctg station ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (50,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==26)
    {
    strcpy(menu,"New Market ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==27)
    {
        taka1=taka1-20;
    taka2=taka2+20;
    strcpy(menu,"Agrabad ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (20,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==28)
    {
    strcpy(menu,"Pani Subidha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==29)
    {
        taka1=taka1-22;
    taka2=taka2+22;
    strcpy(menu,"Khulsi ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (22,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==30)
    {
        taka1=taka1-100;
    strcpy(menu,"Goto jail ");
    t1=10;
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (100,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==31)
    {
    strcpy(menu,"Wari ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==32)
    {
        taka1=taka1-26;
    taka2=taka2+26;
    strcpy(menu,"Motijil ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (26,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==33)
    {
    strcpy(menu,"Vaggo porikkha ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==34)
    {
    strcpy(menu,"Mirpur ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==35)
    {
        taka1=taka1-50;
    taka2=taka2+50;
    strcpy(menu,"Dhaka Station ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (50,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==36)
    {
    strcpy(menu,"Sujog Grohon ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==37)
    {
    strcpy(menu,"Banani ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==38)
    {
        taka1=taka1-100;
    strcpy(menu,"Kor Porishod ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

     itoa (100,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

    if(t1==39)
    {
        taka1=taka1-50;
    taka2=taka2+50;
    strcpy(menu,"Gulshan ");
    len,x=175,y=305;
    len = strlen(menu);
    glColor3f(1,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x, y);
    for ( int i = 0; i < len; ++i )
		 glutBitmapCharacter(GLUT_BITMAP_9_BY_15, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );

    itoa (50,menu,10);
  len = strlen(menu);
    glColor3f(0,1,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
     x=180,y=285;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    }

itoa (t3,menu,10);
  len = strlen(menu);
    glColor3f(0,v,0);
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D( -50, 600, -50, 600 );
    glMatrixMode( GL_MODELVIEW );
    glPushMatrix();
    glLoadIdentity();
    x=200,y=325;
    glRasterPos2i(x,y );
    for ( int i = 0; i < len; ++i )
	    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, menu[i]);
    glPopMatrix();
    glMatrixMode( GL_PROJECTION );
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );


}

void dice1(int y)
{
	glPointSize(5);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2f(200,75);
	glVertex2f(250,75);
	glVertex2f(250,125);
	glVertex2f(200,125);
	glEnd();
	glColor3f(0,0,0);
	switch(y)
	{
	case 0: break;
	case 1:
			glBegin(GL_POINTS);
			glVertex2f(200+25,100);
			glEnd();
			break;
    case 2:glBegin(GL_POINTS);
			glVertex2f(200-10+25,100);
            glVertex2f(200+10+25,100);
			glEnd();
	         break;
	 case 3:glBegin(GL_POINTS);
			glVertex2f(200-10+25,100+10);
            glVertex2f(200+25,100);
			glVertex2f(200+10+25,100-10);
			glEnd();
	         break;
	case 4:glBegin(GL_POINTS);
			glVertex2f(200+15,100+15);
            glVertex2f(200+35,100+15);
			glVertex2f(200+15,100-15);
			glVertex2f(200+35,100-15);
			glEnd();
	         break;
	case 5:glBegin(GL_POINTS);
			glVertex2f(200+15,100+15);
            glVertex2f(200+35,100+15);
			glVertex2f(200+15,100-15);
			glVertex2f(200+35,100-15);
			glVertex2f(200+25,100);


			glEnd();
	        break;
	case 6:glBegin(GL_POINTS);
			glVertex2f(200+15,100+15);
            glVertex2f(200+35,100+15);
			glVertex2f(200+15,100-15);
			glVertex2f(200+35,100-15);
			glVertex2f(200+15,100);
			glVertex2f(200+35,100);
			glEnd();
	         break;

	}
	glFlush();
}
void dice2(int y)
{
	glPointSize(5);
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2f(300,75);
	glVertex2f(350,75);
	glVertex2f(350,125);
	glVertex2f(300,125);
	glEnd();
	glColor3f(0,0,0);
	switch(y)
	{
	case 0:break;
	case 1:
			glBegin(GL_POINTS);
			glVertex2f(300+25,100);
			glEnd();
			break;
    case 2:glBegin(GL_POINTS);
			glVertex2f(300-10+25,100);
            glVertex2f(300+10+25,100);
			glEnd();
	         break;
	 case 3:glBegin(GL_POINTS);
			glVertex2f(300-10+25,100+10);
            glVertex2f(300+25,100);
			glVertex2f(300+10+25,100-10);
			glEnd();
	         break;
	case 4:glBegin(GL_POINTS);
			glVertex2f(300+15,100+15);
            glVertex2f(300+35,100+15);
			glVertex2f(300+15,100-15);
			glVertex2f(300+35,100-15);
			glEnd();
	         break;
	case 5:glBegin(GL_POINTS);
			glVertex2f(300+15,100+15);
            glVertex2f(300+35,100+15);
			glVertex2f(300+15,100-15);
			glVertex2f(300+35,100-15);
			glVertex2f(300+25,100);
			glEnd();
	        break;
	case 6:glBegin(GL_POINTS);
			glVertex2f(300+15,100+15);
            glVertex2f(300+35,100+15);
			glVertex2f(300+15,100-15);
			glVertex2f(300+35,100-15);
			glVertex2f(300+15,100);
			glVertex2f(300+35,100);
			glEnd();
	         break;

	}
	glFlush();
}

void guti1(int t1)
{
    glPointSize(14);
	glColor3f(2,0.5,1);
 glBegin(GL_POINTS);
    if(t1==0)
			glVertex2f(25+5,25);
    if(t1==1)
			glVertex2f(75+5,25);
    if(t1==2)
			glVertex2f(75+50+5,25);
    if(t1==3)
			glVertex2f(75+100+5,25);
    if(t1==4)
			glVertex2f(75+150+5,25);
    if(t1==5)
			glVertex2f(75+200+5,25);
    if(t1==6)
			glVertex2f(75+250+5,25);
    if(t1==7)
			glVertex2f(75+300+5,25);
    if(t1==8)
			glVertex2f(75+350+5,25);
    if(t1==9)
			glVertex2f(75+400+5,25);
    if(t1==10)
			glVertex2f(75+450+5,25);
    if(t1==11)
            glVertex2f(525+5,75);
    if(t1==12)
            glVertex2f(525+5,125);
    if(t1==13)
            glVertex2f(525+5,175);
    if(t1==14)
            glVertex2f(525+5,225);
    if(t1==15)
            glVertex2f(525+5,275);
    if(t1==16)
            glVertex2f(525+5,325);
    if(t1==17)
           glVertex2f(525+5,375);
    if(t1==18)
           glVertex2f(525+5,425);
    if(t1==19)
           glVertex2f(525+5,475);
    if(t1==20)
           glVertex2f(525+5,525);
    if(t1==21)
           glVertex2f(475+5,525);
    if(t1==22)
           glVertex2f(425+5,525);
    if(t1==23)
           glVertex2f(375+5,525);
    if(t1==24)
           glVertex2f(325+5,525);
    if(t1==25)
           glVertex2f(275+5,525);
    if(t1==26)
           glVertex2f(225+5,525);
    if(t1==27)
           glVertex2f(175+5,525);
    if(t1==28)
           glVertex2f(125+5,525);
    if(t1==29)
           glVertex2f(75+5,525);
    if(t1==30)
           glVertex2f(25+5,525);
    if(t1==31)
           glVertex2f(25+5,475);
    if(t1==32)
           glVertex2f(25+5,425);
    if(t1==33)
           glVertex2f(25+5,375);
    if(t1==34)
           glVertex2f(25+5,325);
    if(t1==35)
           glVertex2f(25+5,275);
    if(t1==36)
           glVertex2f(25+5,225);
    if(t1==37)
           glVertex2f(25+5,175);
    if(t1==38)
           glVertex2f(25+5,125);
    if(t1==39)
           glVertex2f(25+5,75);

        glEnd();
        glFlush();
}
void guti2(int t2)
{

    glPointSize(14);
	glColor3f(1,.5,0);
 glBegin(GL_POINTS);
    if(t2==0)
			glVertex2f(25-5,25);
    if(t2==1)
			glVertex2f(75-5,25);
    if(t2==2)
			glVertex2f(75+50-5,25);
    if(t2==3)
			glVertex2f(75+100-5,25);
    if(t2==4)
			glVertex2f(75+150-5,25);
    if(t2==5)
			glVertex2f(75+200-5,25);
    if(t2==6)
			glVertex2f(75+250-5,25);
    if(t2==7)
			glVertex2f(75+300-5,25);
    if(t2==8)
			glVertex2f(75+350-5,25);
    if(t2==9)
			glVertex2f(75+400-5,25);
    if(t2==10)
			glVertex2f(75+450-5,25);
    if(t2==11)
            glVertex2f(525-5,75);
    if(t2==12)
            glVertex2f(525-5,125);
    if(t2==13)
            glVertex2f(525-5,175);
    if(t2==14)
            glVertex2f(525-5,225);
    if(t2==15)
            glVertex2f(525-5,275);
    if(t2==16)
            glVertex2f(525-5,325);
    if(t2==17)
           glVertex2f(525-5,375);
    if(t2==18)
           glVertex2f(525-5,425);
    if(t2==19)
           glVertex2f(525-5,475);
    if(t2==20)
           glVertex2f(525-5,525);
    if(t2==21)
           glVertex2f(475-5,525);
    if(t2==22)
           glVertex2f(425-5,525);
    if(t2==23)
           glVertex2f(375-5,525);
    if(t2==24)
           glVertex2f(325-5,525);
    if(t2==25)
           glVertex2f(275-5,525);
    if(t2==26)
           glVertex2f(225-5,525);
    if(t2==27)
           glVertex2f(175-5,525);
    if(t2==28)
           glVertex2f(125-5,525);
    if(t2==29)
           glVertex2f(75-5,525);
    if(t2==30)
           glVertex2f(25-5,525);
    if(t2==31)
           glVertex2f(25-5,475);
    if(t2==32)
           glVertex2f(25-5,425);
    if(t2==33)
           glVertex2f(25-5,375);
    if(t2==34)
           glVertex2f(25-5,325);
    if(t2==35)
           glVertex2f(25-5,275);
    if(t2==36)
           glVertex2f(25-5,225);
    if(t2==37)
           glVertex2f(25-5,175);
    if(t2==38)
           glVertex2f(25-5,125);
    if(t2==39)
           glVertex2f(25-5,75);

        glEnd();
        glFlush();



}

void init(void)
{
	glClearColor(.1,0.1,0.1,0.0);
	glOrtho(-50.0, 600.0, -50.0, 600.0, 0.0, 1000.0);
}
int main()
{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize (900, 700);
	glutInitWindowPosition (250, 0);
	glutCreateWindow ("mist");
	init();
	glutKeyboardFunc(key);
	glutDisplayFunc(displaydice);
    glutDisplayFunc(displayguti1);
 glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}

