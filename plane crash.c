#include<stdio.h>
#include<GL/glut.h>

GLfloat a=0,b=0,c=0,d=0,e=0;
void building();
void building2();
void outline();
void blast();
void road();
void display2();
void display3();
void build_outline();
void build_outline2();
void trees();
void mountain();
int i;

char s[20]="PRESS S TO START";
char s1[100]="Maximize window for better view----->>";
char s2[100]="AIT COLLEGE OF ENGINEERING";
char s3[150]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char s4[20]="A Mini Project On:-";
char s5[50]="WTC PLANE CRASH";
char s6[200]="BY- NILASIS SEN & KEERTHAN MK GOWDA";
char s7[200]="Under the Guidence of :Mr.SANJAY.D.S B.E,MTech";
char s8[50]="Lecturer,Dept. of CSE";
char s9[100]="PRESS Q TO EXIT";

char texta[]={"BOOOOOM!!"};
int j;

int flag=0;



void update(int value)
{
	a+=0.0;	//Plane position takeoff on x axis
	b-=0.0;	//Road Strip backward movement
	c+=0;	//take off at certain angle on y axis
	
	if(b<=-78.0)// moving of run way
		b=0.0;
		
	glutPostRedisplay();
	glutTimerFunc(200,update,0);//delay
}


void trees()
{
	
   glBegin(GL_POLYGON);
   glColor3f(1.0,0.3,0.0);
	glVertex2i(312,310);
	glVertex2i(312,333);
	glVertex2i(309,333);
	glVertex2i(309,310);
   glEnd();


	glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
	glVertex2i(290,330);
	glVertex2i(330,330);
    glVertex2i(310,380);
	glEnd();


glBegin(GL_POLYGON);
   glColor3f(1.0,0.3,0.0);
	glVertex2i(212,310);
	glVertex2i(212,333);
	glVertex2i(209,333);
	glVertex2i(209,310);
   glEnd();


	glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
	glVertex2i(190,330);
	glVertex2i(230,330);
    glVertex2i(210,380);
	glEnd();


	
glBegin(GL_POLYGON);
   glColor3f(1.0,0.3,0.0);
	glVertex2i(112,310);
	glVertex2i(112,333);
	glVertex2i(109,333);
	glVertex2i(109,310);
   glEnd();


	glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
	glVertex2i(90,330);
	glVertex2i(130,330);
    glVertex2i(110,380);
	glEnd();

		
glBegin(GL_POLYGON);
   glColor3f(1.0,0.3,0.0);
	glVertex2i(12,310);
	glVertex2i(12,333);
	glVertex2i(9,333);
	glVertex2i(9,310);
   glEnd();


	glBegin(GL_POLYGON);
   glColor3f(0.0,1.0,0.0);
	glVertex2i(-10,330);
	glVertex2i(30,330);
    glVertex2i(10,380);
	glEnd();
}


void mountain()
{
	glBegin(GL_POLYGON);
glColor3f(0.8,0.8,0.8);
	glVertex2i(-60,310);
	glVertex2i(110,325);
    glVertex2i(30,366);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.8,0.8,0.8);
	glVertex2i(40,310);
	glVertex2i(230,325);
    glVertex2i(150,366);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.8,0.8,0.8);
	glVertex2i(140,310);
	glVertex2i(350,325);
    glVertex2i(270,366);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.9);
	glVertex2i(240,313);
	glVertex2i(470,325);
    glVertex2i(390,366);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.8,0.8,0.8);
	glVertex2i(440,313);
	glVertex2i(570,325);
    glVertex2i(490,346);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.9);
	glVertex2i(540,313);
	glVertex2i(670,325);
    glVertex2i(590,360);

glEnd();
}




void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
if(flag==0)
{

	glRasterPos3f(58,58,0);
for(i=0;s[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
glRasterPos3f(45,450,0);
for(i=0;s1[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s1[i]);
glRasterPos3f(90,358,0);
for(i=0;s2[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s2[i]);
glRasterPos3f(70,338,0);
for(i=0;s3[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s3[i]);
glRasterPos3f(218,218,0);
for(i=0;s4[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s4[i]);
glRasterPos3f(350,218,0);
for(i=0;s5[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s5[i]);
glRasterPos3f(250,150,0);
for(i=0;s6[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s6[i]);
glColor3f(1.0,1.0,0.0);
glRasterPos3f(250,130,0);
for(i=0;s7[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s7[i]);
glRasterPos3f(250,100,0);
for(i=0;s8[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s8[i]);
glRasterPos3f(58,28,0);
for(i=0;s9[i]!='\0';i++) 
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24,s9[i]);




}
else
{

	road();
mountain();


	
//green
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
	glVertex2i(-10,300);
	glVertex2i(645,310);
   	glVertex2i(940,100);
	glVertex2i(-10,100);
glEnd();


trees();


//plane construction

glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1,1,1);
glBegin(GL_POLYGON);//rectangular body
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//upper triangle construction plane
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//back wing 
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(a,c,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);

glEnd();

glPopMatrix();



	if(c>390)    //timer to jump to next display
{
	display2();
	d+=5;//plane takeoff on x in 2nd display
}

if(a>500.0)//window position during take off
{
	a=0.0;
	b=0.0;
}

if(c>800)//timer to jump to 3rd display
{
	display3();
	e+=5;//plane takeoff on x in 3rd display
	
	if(e>250)//timer to call blast function
	{
		blast();
		e=250;
	}
}

}

glFlush();
glutSwapBuffers();
}





void building()
{
glColor3f(0.60,0.40,0.70);
glBegin(GL_POLYGON);
glVertex2f(350.0,80.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,400.0);
glVertex2f(400.0,0.0);
glEnd();

glColor3f(0.75,0.75,0.75);
glBegin(GL_POLYGON);
glVertex2f(400.0,0.0);
glVertex2f(400.0,400.0);
glVertex2f(450.0,400.0);
glVertex2f(450.0,0.0);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(400.0,400.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,480.0);
glVertex2f(450.0,400.0);
glEnd();

glColor3f(0.60,0.40,0.70);
glBegin(GL_POLYGON);//upper triangle of building
glVertex2f(400.0,400.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,480.0);
glEnd();



glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);//seperation line of floors
glVertex2f(350.0,180);
glVertex2f(400.0,100);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(350.0,280);
glVertex2f(400.0,200);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(350.0,380);
glVertex2f(400.0,300);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450.0,100);
glVertex2f(400.0,100);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450.0,200);
glVertex2f(400.0,200);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450.0,300);
glVertex2f(400.0,300);

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(350.0,180);
glEnd();

build_outline();
}


void build_outline()//building out lines
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(350.0,80.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,400.0);
glVertex2f(400.0,0.0);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(400.0,0.0);
glVertex2f(400.0,400.0);
glVertex2f(450.0,400.0);
glVertex2f(450.0,0.0);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(400.0,400.0);
glVertex2f(350.0,480.0);
glVertex2f(400.0,480.0);
glVertex2f(450.0,400.0);
glEnd();
}
void building2()
{
glColor3f(0.80,0.20,0.30);
glBegin(GL_POLYGON);
glVertex2f(25.0,8.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,30.0);
glVertex2f(30.0,0.0);
glEnd();

glColor3f(0.75,0.75,0.75);
glBegin(GL_POLYGON);
glVertex2f(30.0,0.0);
glVertex2f(30.0,30.0);
glVertex2f(35.0,30.0);
glVertex2f(35.0,0.0);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(30.0,20.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,38.0);
glVertex2f(35.0,30.0);
glEnd();

glColor3f(0.60,0.40,0.70);
glBegin(GL_POLYGON);//upper triangle of building
glVertex2f(30.0,30.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,38.0);
glEnd();



glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);//seperation line of floors
glVertex2f(25.0,18);
glVertex2f(30.0,10);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(25.0,18);
glVertex2f(30.0,10);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(25.0,28);
glVertex2f(30.0,20);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(35.0,10);
glVertex2f(30.0,10);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(35.0,20);
glVertex2f(30.0,20);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(35.0,20);
glVertex2f(30.0,20);

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(25.0,18);
glEnd();

build_outline2();
}


void build_outline2()//building out lines
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(25.0,8.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,30.0);
glVertex2f(30.0,0.0);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(30.0,0.0);
glVertex2f(30.0,30.0);
glVertex2f(35.0,30.0);
glVertex2f(35.0,0.0);
glEnd();

glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(30.0,30.0);
glVertex2f(25.0,38.0);
glVertex2f(30.0,38.0);
glVertex2f(35.0,30.0);
glEnd();
}


void blast(void)//blast polygon construction
{
b=0;
glPushMatrix();
glTranslated(-10.0,-60.0,0.0);	
glColor3f(1.0,0.0,0.0);
	b=0;
glBegin(GL_POLYGON);
glVertex2f(404.4,320.0);
glVertex2f(384.0,285.0);
glVertex2f(368.0,344.5);
glVertex2f(344.0,355.0);
glVertex2f(347.2,414.5);
glVertex2f(332.8,442.5);
glVertex2f(347.2,477.5);
glVertex2f(352.0,530.0);
glVertex2f(379.2,519.5);
glVertex2f(396.8,565.0);
glVertex2f(416.0,530.0);
glVertex2f(440.0,547.5);
glVertex2f(452.8,512.5);
glVertex2f(472.0,512.5);
glVertex2f(475.2,470.5);
glVertex2f(488.0,442.5);
glVertex2f(488.0,404.0);
glVertex2f(470.0,372.5);
glVertex2f(475.2,337.5);
glVertex2f(464.0,306.0);
glVertex2f(444.8,320.0);
glVertex2f(425.6,285.0);
glVertex2f(404.8,320.0);
glEnd();
glPopMatrix();

glColor3f(0.0,0.0,0.0);
			glRasterPos3f(380,350,0);			
			for(j=0;texta[j]!='\0';j++)
			glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24, texta[j]); 
	
			
			
}

void road()
{

glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);//black road
glVertex2f(0.0,0.0);
glVertex2f(0.0,100.0);
glVertex2f(500.0,100.0);
glVertex2f(500.0,0.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);//yellow strips on road
glVertex2f(0.0,40.0);
glVertex2f(8.0,60.0);
glVertex2f(58.0,60.0);
glVertex2f(50.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(100.0,40.0);
glVertex2f(108.0,60.0);
glVertex2f(158.0,60.0);
glVertex2f(150.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(200.0,40.0);
glVertex2f(208.0,60.0);
glVertex2f(258.0,60.0);
glVertex2f(250.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(300.0,40.0);
glVertex2f(308.0,60.0);
glVertex2f(358.0,60.0);
glVertex2f(350.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(400.0,40.0);
glVertex2f(408.0,60.0);
glVertex2f(458.0,60.0);
glVertex2f(450.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(500.0,40.0);
glVertex2f(508.0,60.0);
glVertex2f(558.0,60.0);
glVertex2f(550.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(b,0.0,0.0);
glColor3f(0.9,0.7,0.0);
glBegin(GL_POLYGON);
glVertex2f(600.0,40.0);
glVertex2f(608.0,60.0);
glVertex2f(658.0,60.0);
glVertex2f(650.0,40.0);
glEnd();
glPopMatrix();


}


void display2()
{

glClear(GL_COLOR_BUFFER_BIT);

mountain();


//green
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
	glVertex2i(-10,300);
	glVertex2i(645,310);
   	glVertex2i(940,0);
	glVertex2i(-10,0);
glEnd();

trees();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
//glVertex2f(165.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(d,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);

glEnd();
glPopMatrix();


}

void display3()
{

glClear(GL_COLOR_BUFFER_BIT);
road();
mountain();

//brown
glBegin(GL_POLYGON);
glColor3f(0.9,0.3,0.0);
	glVertex2i(-10,300);
	glVertex2i(645,310);
   	glVertex2i(940,100);
	glVertex2i(-10,100);
glEnd();

building();
glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,30.0);
glVertex2f(0.0,55.0);
glVertex2f(135.0,55.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(135.0,55.0);
glVertex2f(150.0,50.0);
glVertex2f(155.0,45.0);
glVertex2f(160.0,40.0);
glVertex2f(135.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(135.0,40.0);
glVertex2f(160.0,40.0);
glVertex2f(160.0,37.0);
glVertex2f(145.0,30.0);
glVertex2f(135.0,30.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(0.0,55.0);
glVertex2f(0.0,80.0);
glVertex2f(10.0,80.0);
glVertex2f(40.0,55.0);
//glVertex2f(165.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(65.0,55.0);
glVertex2f(50.0,70.0);
glVertex2f(75.0,70.0);
glVertex2f(90.0,55.0);
//glVertex2f(165.0,40.0);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslated(e,300.0,0.0);
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(70.0,40.0);
glVertex2f(100.0,40.0);
glVertex2f(80.0,15.0);
glVertex2f(50.0,15.0);

glEnd();

glPopMatrix();
glutSwapBuffers();
}


void myinit()
{

glClearColor(0.0f,0.0f,1.0f,0.0f);
glColor3f(1.0,0.0,0.0);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,499.0,0.0,499.0);

}


void keys(unsigned char key,int x,int y)
{

    if(key=='s')
		flag=1;


	if(key=='q') exit(0);
	
	if(key=='m')  
	{
  	a+=5.0;	//Plane position takeoff on x axis
	b-=5.0;	//Road Strip backward movement
	c+=5;	//take off at certain angle on y axis


	if(b<=-78.0) // moving of run way
		b=0.0;;//take off at certain angle on y axis
	}

display();

}


void main(int argc, char* argv[])
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800.0,800.0);
glutInitWindowPosition(0,0);
glutCreateWindow("aero");
glutDisplayFunc(display);
myinit();
glutKeyboardFunc(keys);
glutTimerFunc(200,update,0);
glutMainLoop();
}