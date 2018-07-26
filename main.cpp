#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define pi 3.14159265358979323846264

void init() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_NORMALIZE);
	glShadeModel(GL_SMOOTH);
}


void resize(int w, int h) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 100.0);
}

float angle = -5.0f;
float posL1=0.1f;
float posL2=0.1f;
float posL3=0.1f;
float R=0,G=0,B=0;
int night = 1;

void Light()
{
	GLfloat lightColor0[] = {posL1, posL2, posL3, 1.0f};
	GLfloat lightPos0[] = {0.0f, 8.0f, -8.0f, 1.0f};
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
}


void keyboardkey(int key, int x, int y)
{

	if(key==GLUT_KEY_DOWN)
    {
        R = 0.0; G = 0.4; B = 1.0;
            night = 0;
    }
	else if(key==GLUT_KEY_UP)
    {
        R = 0.0; G = 0.0; B = 0.0;
              night = 1;
    }
}

void draw()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(R,G,B,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -12.0f);




        Light();



	glRotatef(10, 1.0f, 0.0f, 0.0f);
	glRotatef(-10, 0.0f, 0.0f, 1.0f);
	glRotatef(angle,0.0f, 1.0f, 0.0f);

    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(0.0f,0.0f,-3.0f);



	glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(-.20f, 1.20f, 1.0f); /// front child
	glVertex3f(.20f, 1.20f, 1.0f);
	glVertex3f(.20f, 1.00f, 1.0f);
    glVertex3f(-.20f, 1.00f, 1.0f);

    glVertex3f(-.20f, 1.10f, 1.0f);
	glVertex3f(-.10f, 1.10f, 1.0f);
	glVertex3f(-.10f, -1.10f, 1.0f);
    glVertex3f(-.20f, -1.10f, 1.0f);

    glVertex3f(.20f, 1.10f, 1.0f);
	glVertex3f(.10f, 1.10f, 1.0f);
	glVertex3f(.10f, -1.10f, 1.0f);
    glVertex3f(.20f, -1.10f, 1.0f);

    glVertex3f(-.20f, 1.20f, 1.1f); /// back child
	glVertex3f(.20f, 1.20f, 1.1f);
	glVertex3f(.20f, 1.00f, 1.1f);
    glVertex3f(-.20f, 1.00f, 1.1f);

    glVertex3f(-.20f, 1.10f, 1.1f);
	glVertex3f(-.10f, 1.10f, 1.1f);
	glVertex3f(-.10f, -1.10f, 1.1f);
    glVertex3f(-.20f, -1.10f, 1.1f);

    glVertex3f(.20f, 1.10f, 1.1f);
	glVertex3f(.10f, 1.10f, 1.1f);
	glVertex3f(.10f, -1.10f, 1.1f);
    glVertex3f(.20f, -1.10f, 1.1f);


    glVertex3f(-.20f, 1.20f, 1.0f); ///chid side left
    glVertex3f(-.20f, 1.20f, 1.1f);
    glVertex3f(-.10f, -1.10f, 1.1f);
    glVertex3f(-.10f, -1.10f, 1.0f);

    glVertex3f(.20f, 1.20f, 1.0f); ///chid side right
    glVertex3f(.20f, 1.20f, 1.1f);
    glVertex3f(.10f, -1.10f, 1.1f);
    glVertex3f(.10f, -1.10f, 1.0f);

    glVertex3f(-.20f, 1.20f, 1.0f); /// Top child
	glVertex3f(.20f, 1.20f, 1.0f);
	glVertex3f(-.20f, 1.20f, 1.1f);
	glVertex3f(.20f, 1.20f, 1.1f);

    glEnd();


    ///right big child
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(1.20f, 1.20f, 1.0f); /// front child
	glVertex3f(1.60f, 1.20f, 1.0f);
	glVertex3f(1.60f, 1.00f, 1.0f);
    glVertex3f(1.20f, 1.00f, 1.0f);

    glVertex3f(1.20f, 1.10f, 1.0f);
	glVertex3f(1.30f, 1.10f, 1.0f);
	glVertex3f(1.30f, -1.10f, 1.0f);
    glVertex3f(1.20f, -1.10f, 1.0f);

    glVertex3f(1.60f, 1.10f, 1.0f);
	glVertex3f(1.50f, 1.10f, 1.0f);
	glVertex3f(1.50f, -1.10f, 1.0f);
    glVertex3f(1.60f, -1.10f, 1.0f);

    glVertex3f(1.20f, 1.20f, 1.1f); /// back child
	glVertex3f(1.60f, 1.20f, 1.1f);
	glVertex3f(1.60f, 1.00f, 1.1f);
    glVertex3f(1.20f, 1.00f, 1.1f);

    glVertex3f(1.20f, 1.10f, 1.1f);
	glVertex3f(1.30f, 1.10f, 1.1f);
	glVertex3f(1.30f, -1.10f, 1.1f);
    glVertex3f(1.20f, -1.10f, 1.1f);

    glVertex3f(1.60f, 1.10f, 1.1f);
	glVertex3f(1.50f, 1.10f, 1.1f);
	glVertex3f(1.50f, -1.10f, 1.1f);
    glVertex3f(1.60f, -1.10f, 1.1f);


    glVertex3f(1.20f, 1.20f, 1.0f); ///chid side left
    glVertex3f(1.20f, 1.20f, 1.1f);
    glVertex3f(1.30f, -1.10f, 1.1f);
    glVertex3f(1.30f, -1.10f, 1.0f);

    glVertex3f(1.60f, 1.20f, 1.0f); ///chid side right
    glVertex3f(1.60f, 1.20f, 1.1f);
    glVertex3f(1.50f, -1.10f, 1.1f);
    glVertex3f(1.50f, -1.10f, 1.0f);

    glVertex3f(1.20f, 1.20f, 1.0f); /// Top child
	glVertex3f(1.60f, 1.20f, 1.0f);
	glVertex3f(1.20f, 1.20f, 1.1f);
	glVertex3f(1.60f, 1.20f, 1.1f);

    glEnd();

    /// little child
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(-.80f, .30f, 1.0f); /// front child
	glVertex3f(-.40f, .30f, 1.0f);
	glVertex3f(-.40f, .10f, 1.0f);
    glVertex3f(-.80f, .10f, 1.0f);

    glVertex3f(-.80f, .20f, 1.0f);
	glVertex3f(-.70f, .20f, 1.0f);
	glVertex3f(-.70f, -1.10f, 1.0f);
    glVertex3f(-.80f, -1.10f, 1.0f);

    glVertex3f(-.40f, .20f, 1.0f);
	glVertex3f(-.50f, .20f, 1.0f);
	glVertex3f(-.50f, -1.10f, 1.0f);
    glVertex3f(-.40f, -1.10f, 1.0f);

    glVertex3f(-.80f, .30f, 1.1f); /// back child
	glVertex3f(-.40f, .30f, 1.1f);
	glVertex3f(-.40f, .10f, 1.1f);
    glVertex3f(-.80f, .10f, 1.1f);

    glVertex3f(-.80f, .20f, 1.1f);
	glVertex3f(-.70f, .20f, 1.1f);
	glVertex3f(-.70f, -1.10f, 1.1f);
    glVertex3f(-.80f, -1.10f, 1.1f);

    glVertex3f(-.40f, .20f, 1.1f);
	glVertex3f(-.50f, .20f, 1.1f);
	glVertex3f(-.50f, -1.10f, 1.1f);
    glVertex3f(-.40f, -1.10f, 1.1f);


    glVertex3f(-.80f, .30f, 1.0f); ///chid side left
    glVertex3f(-.80f, .30f, 1.1f);
    glVertex3f(-.70f, -1.10f, 1.1f);
    glVertex3f(-.70f, -1.10f, 1.0f);

    glVertex3f(-.40f, .30f, 1.0f); ///chid side right
    glVertex3f(-.40f, .30f, 1.1f);
    glVertex3f(-.50f, -1.10f, 1.1f);
    glVertex3f(-.50f, -1.10f, 1.0f);

    glVertex3f(-.80f, .30f, 1.0f); /// Top child
	glVertex3f(-.40f, .30f, 1.0f);
	glVertex3f(-.80f, .30f, 1.1f);
	glVertex3f(-.40f, .30f, 1.1f);



    glEnd();
     /// little child right
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(1.70f, .30f, 1.0f); /// front child
	glVertex3f(2.10f, .30f, 1.0f);
	glVertex3f(2.10f, .10f, 1.0f);
    glVertex3f(1.70f, .10f, 1.0f);

    glVertex3f(1.70f, .20f, 1.0f);
	glVertex3f(1.80f, .20f, 1.0f);
	glVertex3f(1.80f, -1.10f, 1.0f);
    glVertex3f(1.70f, -1.10f, 1.0f);

    glVertex3f(2.10f, .20f, 1.0f);
	glVertex3f(2.00f, .20f, 1.0f);
	glVertex3f(2.00f, -1.10f, 1.0f);
    glVertex3f(2.10f, -1.10f, 1.0f);

    glVertex3f(1.70f, .30f, 1.1f); /// back child
	glVertex3f(2.10f, .30f, 1.1f);
	glVertex3f(2.10f, .10f, 1.1f);
    glVertex3f(1.70f, .10f, 1.1f);

    glVertex3f(1.70f, .20f, 1.1f);
	glVertex3f(1.80f, .20f, 1.1f);
	glVertex3f(1.80f, -1.10f, 1.1f);
    glVertex3f(1.70f, -1.10f, 1.1f);

    glVertex3f(2.10f, .20f, 1.1f);
	glVertex3f(2.00f, .20f, 1.1f);
	glVertex3f(2.00f, -1.10f, 1.1f);
    glVertex3f(2.10f, -1.10f, 1.1f);


    glVertex3f(1.70f, .30f, 1.0f); ///chid side left
    glVertex3f(1.70f, .30f, 1.1f);
    glVertex3f(1.80f, -1.10f, 1.1f);
    glVertex3f(1.80f, -1.10f, 1.0f);

    glVertex3f(2.10f, .30f, 1.0f); ///chid side right
    glVertex3f(2.10f, .30f, 1.1f);
    glVertex3f(2.00f, -1.10f, 1.1f);
    glVertex3f(2.00f, -1.10f, 1.0f);

    glVertex3f(1.70f, .30f, 1.0f); /// Top child
	glVertex3f(2.10f, .30f, 1.0f);
	glVertex3f(1.70f, .30f, 1.1f);
	glVertex3f(2.10f, .30f, 1.1f);



    glEnd();


    ///Mother
    glBegin(GL_QUADS);

    glColor3f(1,1,1);


    glVertex3f(.35f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.20f, 1.0f);
	glVertex3f(.45f, -1.20f, 1.0f);
    glVertex3f(.35f, -1.20f, 1.0f);

    glVertex3f(.75f, 1.20f, 1.0f);
	glVertex3f(.65f, 1.20f, 1.0f);
	glVertex3f(.65f, -1.20f, 1.0f);
    glVertex3f(.75f, -1.20f, 1.0f);


    glVertex3f(.35f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.20f, 1.1f);
	glVertex3f(.45f, -1.20f, 1.1f);
    glVertex3f(.35f, -1.20f, 1.1f);

    glVertex3f(.75f, 1.20f, 1.1f);
	glVertex3f(.65f, 1.20f, 1.1f);
	glVertex3f(.65f, -1.20f, 1.1f);
    glVertex3f(.75f, -1.20f, 1.1f);


    glVertex3f(.35f, 1.20f, 1.0f); ///chid side left
    glVertex3f(.35f, 1.20f, 1.1f);
    glVertex3f(.45f, -1.10f, 1.1f);
    glVertex3f(.45f, -1.10f, 1.0f);

    glVertex3f(.75f, 1.20f, 1.0f); ///chid side right
    glVertex3f(.75f, 1.20f, 1.1f);
    glVertex3f(.65f, -1.10f, 1.1f);
    glVertex3f(.65f, -1.10f, 1.0f);


	glVertex3f(1.05f, 1.20f, 1.0f);
	glVertex3f(.95f, 1.20f, 1.0f);
	glVertex3f(.95f, -1.20f, 1.0f);
    glVertex3f(1.05f, -1.20f, 1.0f);

    glVertex3f(1.05f, 1.20f, 1.1f);
	glVertex3f(.95f, 1.20f, 1.1f);
	glVertex3f(.95f, -1.20f, 1.1f);
    glVertex3f(1.05f, -1.20f, 1.1f);

    glVertex3f(1.05f, 1.20f, 1.0f); ///chid side right
    glVertex3f(1.05f, 1.20f, 1.1f);
    glVertex3f(.95f, -1.10f, 1.1f);
    glVertex3f(.95f, -1.10f, 1.0f);



    ///top

    glVertex3f(.35f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.60f, 0.6f);
    glVertex3f(.35f, 1.60f, 0.6f);

    glVertex3f(.35f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.60f, 0.7f);
    glVertex3f(.35f, 1.60f, 0.7f);

    glVertex3f(.35f, 1.20f, 1.0f);
    glVertex3f(.35f, 1.20f, 1.1f);
    glVertex3f(.35f, 1.60f, 0.7f);
    glVertex3f(.35f, 1.60f, 0.6f);


    glVertex3f(.65f, 1.20f, 1.0f);
	glVertex3f(.75f, 1.20f, 1.0f);
	glVertex3f(.75f, 1.60f, 0.6f);
    glVertex3f(.65f, 1.60f, 0.6f);

    glVertex3f(.65f, 1.20f, 1.1f);
	glVertex3f(.75f, 1.20f, 1.1f);
	glVertex3f(.75f, 1.60f, 0.7f);
    glVertex3f(.65f, 1.60f, 0.7f);

    glVertex3f(.65f, 1.20f, 1.0f);
    glVertex3f(.65f, 1.20f, 1.1f);
    glVertex3f(.65f, 1.60f, 0.7f);
    glVertex3f(.65f, 1.60f, 0.6f);


    glVertex3f(.95f, 1.20f, 1.0f);
	glVertex3f(1.05f, 1.20f, 1.0f);
	glVertex3f(1.05f, 1.60f, 0.6f);
    glVertex3f(.95f, 1.60f, 0.6f);
    ///top top
    glVertex3f(.95f, 1.20f, 1.1f);
	glVertex3f(1.05f, 1.20f, 1.1f);
	glVertex3f(1.05f, 1.60f, 0.7f);
    glVertex3f(.95f, 1.60f, 0.7f);

    glVertex3f(.95f, 1.20f, 1.0f);
    glVertex3f(.95f, 1.20f, 1.1f);
    glVertex3f(.95f, 1.60f, 0.7f);
    glVertex3f(.95f, 1.60f, 0.6f);


    glVertex3f(.35f, 1.60f, 0.6f);
    glVertex3f(1.05f, 1.60f, 0.6f);
    glVertex3f(1.05f, 1.50f, 0.7f);
    glVertex3f(.35f, 1.50f, 0.7f);

    glVertex3f(.95f, 1.20f, 1.2f);
	glVertex3f(1.05f, 1.20f, 1.2f);
	glVertex3f(1.05f, 1.60f, 0.8f);
    glVertex3f(.95f, 1.60f, 0.8f);

    glVertex3f(.95f, 1.20f, 1.1f);
    glVertex3f(.95f, 1.20f, 1.2f);
    glVertex3f(.95f, 1.60f, 0.8f);
    glVertex3f(.95f, 1.60f, 0.7f);


    glVertex3f(.35f, 1.60f, 0.7f);
    glVertex3f(1.05f, 1.60f, 0.7f);
    glVertex3f(1.05f, 1.50f, 0.8f);
    glVertex3f(.35f, 1.50f, 0.8f);


    glEnd();


    glColor3f(.8,.188,.142);

    glBegin(GL_QUADS);


    glVertex3f(4.0f, -1.10f, 4.0f);
    glVertex3f(4.0f, -1.10f, -3.0f);
    glVertex3f(-3.0f, -1.10f, -3.0f);
    glVertex3f(-3.0f, -1.10f, 4.0f);


    glEnd();

    glColor3f(.0,.8,.0);

    glBegin(GL_QUADS);


    glVertex3f(20.0f, -1.11f, 20.0f);
    glVertex3f(20.0f, -1.11f, -20.0f);
    glVertex3f(-20.0f, -1.11f, -20.0f);
    glVertex3f(-20.0f, -1.11f, 20.0f);


    glEnd();


///tree
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(-7.27,-0.5,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(-4.97,-0.55,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(4.97,-0.55,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();



if(night==0) {
    ///sun
        glPushMatrix();
    glColor3f(1,1,.5);
    glTranslated(4.97,5.55,10.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
    }
    if(night==1) {
            ///moon
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslated(-4.97,5.55,10.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
    }

    ///Circle
    glColor3f(1,0,0);
    float ang=pi/2,b;
    b=pi/980;
    float x=0.0f,y=0.9f;
    float nx,ny,nz;
    float r;
    float hx=0.8,hy=0.0,hz=1.5;
    while( 1 )
    {
        if(ang>=2*pi+pi/2)break;
        ang+=b;
        r=sqrt(x*x+y*y);
        nx=r*cos(ang);
        ny=r*sin(ang);
        glBegin(GL_TRIANGLES);
        glVertex3f(hx, hy,1.5f);
        glVertex3f(x+hx, y+hy,1.5f);
        glVertex3f(nx+hx, ny+hy,1.5f);
        glEnd();
    }

	glutSwapBuffers();
}

void timer(int value) {
	angle += 1.0f;
	if (angle > 360) {
		angle -= 360;
	}

	glutPostRedisplay();
	glutTimerFunc(25, timer, 0);
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1300, 700);

    R = 0.0; G = 0.4; B = 1.0;

	glutCreateWindow("Shahid minar");
	init();
	glutDisplayFunc(draw);
	glutReshapeFunc(resize);

	glutSpecialFunc(keyboardkey);
	timer(0);

	glutMainLoop();
	return 0;
}
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define pi 3.14159265358979323846264

void init1() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_NORMALIZE);
	glShadeModel(GL_SMOOTH);
}


void resize1(int w, int h) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 100.0);
}

float angle1 = -5.0f;
float posL11=0.1f;
float posL21=0.1f;
float posL31=0.1f;
float R1=0,G1=0,B1=0;
int night1 = 1;

void Light1()
{
	GLfloat lightColor0[] = {posL1, posL2, posL3, 1.0f};
	GLfloat lightPos0[] = {0.0f, 8.0f, -8.0f, 1.0f};
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
}


void keyboardkey1(int key, int x, int y)
{

	if(key==GLUT_KEY_DOWN)
    {
        R = 0.0; G = 0.4; B = 1.0;
            night = 0;
    }
	else if(key==GLUT_KEY_UP)
    {
        R = 0.0; G = 0.0; B = 0.0;
              night = 1;
    }
}

void draw1()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(R,G,B,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -12.0f);




        Light();



	glRotatef(10, 1.0f, 0.0f, 0.0f);
	glRotatef(-10, 0.0f, 0.0f, 1.0f);
	glRotatef(angle,0.0f, 1.0f, 0.0f);

    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(0.0f,0.0f,-3.0f);



	glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(-.20f, 1.20f, 1.0f); /// front child
	glVertex3f(.20f, 1.20f, 1.0f);
	glVertex3f(.20f, 1.00f, 1.0f);
    glVertex3f(-.20f, 1.00f, 1.0f);

    glVertex3f(-.20f, 1.10f, 1.0f);
	glVertex3f(-.10f, 1.10f, 1.0f);
	glVertex3f(-.10f, -1.10f, 1.0f);
    glVertex3f(-.20f, -1.10f, 1.0f);

    glVertex3f(.20f, 1.10f, 1.0f);
	glVertex3f(.10f, 1.10f, 1.0f);
	glVertex3f(.10f, -1.10f, 1.0f);
    glVertex3f(.20f, -1.10f, 1.0f);

    glVertex3f(-.20f, 1.20f, 1.1f); /// back child
	glVertex3f(.20f, 1.20f, 1.1f);
	glVertex3f(.20f, 1.00f, 1.1f);
    glVertex3f(-.20f, 1.00f, 1.1f);

    glVertex3f(-.20f, 1.10f, 1.1f);
	glVertex3f(-.10f, 1.10f, 1.1f);
	glVertex3f(-.10f, -1.10f, 1.1f);
    glVertex3f(-.20f, -1.10f, 1.1f);

    glVertex3f(.20f, 1.10f, 1.1f);
	glVertex3f(.10f, 1.10f, 1.1f);
	glVertex3f(.10f, -1.10f, 1.1f);
    glVertex3f(.20f, -1.10f, 1.1f);


    glVertex3f(-.20f, 1.20f, 1.0f); ///chid side left
    glVertex3f(-.20f, 1.20f, 1.1f);
    glVertex3f(-.10f, -1.10f, 1.1f);
    glVertex3f(-.10f, -1.10f, 1.0f);

    glVertex3f(.20f, 1.20f, 1.0f); ///chid side right
    glVertex3f(.20f, 1.20f, 1.1f);
    glVertex3f(.10f, -1.10f, 1.1f);
    glVertex3f(.10f, -1.10f, 1.0f);

    glVertex3f(-.20f, 1.20f, 1.0f); /// Top child
	glVertex3f(.20f, 1.20f, 1.0f);
	glVertex3f(-.20f, 1.20f, 1.1f);
	glVertex3f(.20f, 1.20f, 1.1f);

    glEnd();


    ///right big child
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(1.20f, 1.20f, 1.0f); /// front child
	glVertex3f(1.60f, 1.20f, 1.0f);
	glVertex3f(1.60f, 1.00f, 1.0f);
    glVertex3f(1.20f, 1.00f, 1.0f);

    glVertex3f(1.20f, 1.10f, 1.0f);
	glVertex3f(1.30f, 1.10f, 1.0f);
	glVertex3f(1.30f, -1.10f, 1.0f);
    glVertex3f(1.20f, -1.10f, 1.0f);

    glVertex3f(1.60f, 1.10f, 1.0f);
	glVertex3f(1.50f, 1.10f, 1.0f);
	glVertex3f(1.50f, -1.10f, 1.0f);
    glVertex3f(1.60f, -1.10f, 1.0f);

    glVertex3f(1.20f, 1.20f, 1.1f); /// back child
	glVertex3f(1.60f, 1.20f, 1.1f);
	glVertex3f(1.60f, 1.00f, 1.1f);
    glVertex3f(1.20f, 1.00f, 1.1f);

    glVertex3f(1.20f, 1.10f, 1.1f);
	glVertex3f(1.30f, 1.10f, 1.1f);
	glVertex3f(1.30f, -1.10f, 1.1f);
    glVertex3f(1.20f, -1.10f, 1.1f);

    glVertex3f(1.60f, 1.10f, 1.1f);
	glVertex3f(1.50f, 1.10f, 1.1f);
	glVertex3f(1.50f, -1.10f, 1.1f);
    glVertex3f(1.60f, -1.10f, 1.1f);


    glVertex3f(1.20f, 1.20f, 1.0f); ///chid side left
    glVertex3f(1.20f, 1.20f, 1.1f);
    glVertex3f(1.30f, -1.10f, 1.1f);
    glVertex3f(1.30f, -1.10f, 1.0f);

    glVertex3f(1.60f, 1.20f, 1.0f); ///chid side right
    glVertex3f(1.60f, 1.20f, 1.1f);
    glVertex3f(1.50f, -1.10f, 1.1f);
    glVertex3f(1.50f, -1.10f, 1.0f);

    glVertex3f(1.20f, 1.20f, 1.0f); /// Top child
	glVertex3f(1.60f, 1.20f, 1.0f);
	glVertex3f(1.20f, 1.20f, 1.1f);
	glVertex3f(1.60f, 1.20f, 1.1f);

    glEnd();

    /// little child
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(-.80f, .30f, 1.0f); /// front child
	glVertex3f(-.40f, .30f, 1.0f);
	glVertex3f(-.40f, .10f, 1.0f);
    glVertex3f(-.80f, .10f, 1.0f);

    glVertex3f(-.80f, .20f, 1.0f);
	glVertex3f(-.70f, .20f, 1.0f);
	glVertex3f(-.70f, -1.10f, 1.0f);
    glVertex3f(-.80f, -1.10f, 1.0f);

    glVertex3f(-.40f, .20f, 1.0f);
	glVertex3f(-.50f, .20f, 1.0f);
	glVertex3f(-.50f, -1.10f, 1.0f);
    glVertex3f(-.40f, -1.10f, 1.0f);

    glVertex3f(-.80f, .30f, 1.1f); /// back child
	glVertex3f(-.40f, .30f, 1.1f);
	glVertex3f(-.40f, .10f, 1.1f);
    glVertex3f(-.80f, .10f, 1.1f);

    glVertex3f(-.80f, .20f, 1.1f);
	glVertex3f(-.70f, .20f, 1.1f);
	glVertex3f(-.70f, -1.10f, 1.1f);
    glVertex3f(-.80f, -1.10f, 1.1f);

    glVertex3f(-.40f, .20f, 1.1f);
	glVertex3f(-.50f, .20f, 1.1f);
	glVertex3f(-.50f, -1.10f, 1.1f);
    glVertex3f(-.40f, -1.10f, 1.1f);


    glVertex3f(-.80f, .30f, 1.0f); ///chid side left
    glVertex3f(-.80f, .30f, 1.1f);
    glVertex3f(-.70f, -1.10f, 1.1f);
    glVertex3f(-.70f, -1.10f, 1.0f);

    glVertex3f(-.40f, .30f, 1.0f); ///chid side right
    glVertex3f(-.40f, .30f, 1.1f);
    glVertex3f(-.50f, -1.10f, 1.1f);
    glVertex3f(-.50f, -1.10f, 1.0f);

    glVertex3f(-.80f, .30f, 1.0f); /// Top child
	glVertex3f(-.40f, .30f, 1.0f);
	glVertex3f(-.80f, .30f, 1.1f);
	glVertex3f(-.40f, .30f, 1.1f);



    glEnd();
     /// little child right
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(1.70f, .30f, 1.0f); /// front child
	glVertex3f(2.10f, .30f, 1.0f);
	glVertex3f(2.10f, .10f, 1.0f);
    glVertex3f(1.70f, .10f, 1.0f);

    glVertex3f(1.70f, .20f, 1.0f);
	glVertex3f(1.80f, .20f, 1.0f);
	glVertex3f(1.80f, -1.10f, 1.0f);
    glVertex3f(1.70f, -1.10f, 1.0f);

    glVertex3f(2.10f, .20f, 1.0f);
	glVertex3f(2.00f, .20f, 1.0f);
	glVertex3f(2.00f, -1.10f, 1.0f);
    glVertex3f(2.10f, -1.10f, 1.0f);

    glVertex3f(1.70f, .30f, 1.1f); /// back child
	glVertex3f(2.10f, .30f, 1.1f);
	glVertex3f(2.10f, .10f, 1.1f);
    glVertex3f(1.70f, .10f, 1.1f);

    glVertex3f(1.70f, .20f, 1.1f);
	glVertex3f(1.80f, .20f, 1.1f);
	glVertex3f(1.80f, -1.10f, 1.1f);
    glVertex3f(1.70f, -1.10f, 1.1f);

    glVertex3f(2.10f, .20f, 1.1f);
	glVertex3f(2.00f, .20f, 1.1f);
	glVertex3f(2.00f, -1.10f, 1.1f);
    glVertex3f(2.10f, -1.10f, 1.1f);


    glVertex3f(1.70f, .30f, 1.0f); ///chid side left
    glVertex3f(1.70f, .30f, 1.1f);
    glVertex3f(1.80f, -1.10f, 1.1f);
    glVertex3f(1.80f, -1.10f, 1.0f);

    glVertex3f(2.10f, .30f, 1.0f); ///chid side right
    glVertex3f(2.10f, .30f, 1.1f);
    glVertex3f(2.00f, -1.10f, 1.1f);
    glVertex3f(2.00f, -1.10f, 1.0f);

    glVertex3f(1.70f, .30f, 1.0f); /// Top child
	glVertex3f(2.10f, .30f, 1.0f);
	glVertex3f(1.70f, .30f, 1.1f);
	glVertex3f(2.10f, .30f, 1.1f);



    glEnd();


    ///Mother
    glBegin(GL_QUADS);

    glColor3f(1,1,1);


    glVertex3f(.35f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.20f, 1.0f);
	glVertex3f(.45f, -1.20f, 1.0f);
    glVertex3f(.35f, -1.20f, 1.0f);

    glVertex3f(.75f, 1.20f, 1.0f);
	glVertex3f(.65f, 1.20f, 1.0f);
	glVertex3f(.65f, -1.20f, 1.0f);
    glVertex3f(.75f, -1.20f, 1.0f);


    glVertex3f(.35f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.20f, 1.1f);
	glVertex3f(.45f, -1.20f, 1.1f);
    glVertex3f(.35f, -1.20f, 1.1f);

    glVertex3f(.75f, 1.20f, 1.1f);
	glVertex3f(.65f, 1.20f, 1.1f);
	glVertex3f(.65f, -1.20f, 1.1f);
    glVertex3f(.75f, -1.20f, 1.1f);


    glVertex3f(.35f, 1.20f, 1.0f); ///chid side left
    glVertex3f(.35f, 1.20f, 1.1f);
    glVertex3f(.45f, -1.10f, 1.1f);
    glVertex3f(.45f, -1.10f, 1.0f);

    glVertex3f(.75f, 1.20f, 1.0f); ///chid side right
    glVertex3f(.75f, 1.20f, 1.1f);
    glVertex3f(.65f, -1.10f, 1.1f);
    glVertex3f(.65f, -1.10f, 1.0f);


	glVertex3f(1.05f, 1.20f, 1.0f);
	glVertex3f(.95f, 1.20f, 1.0f);
	glVertex3f(.95f, -1.20f, 1.0f);
    glVertex3f(1.05f, -1.20f, 1.0f);

    glVertex3f(1.05f, 1.20f, 1.1f);
	glVertex3f(.95f, 1.20f, 1.1f);
	glVertex3f(.95f, -1.20f, 1.1f);
    glVertex3f(1.05f, -1.20f, 1.1f);

    glVertex3f(1.05f, 1.20f, 1.0f); ///chid side right
    glVertex3f(1.05f, 1.20f, 1.1f);
    glVertex3f(.95f, -1.10f, 1.1f);
    glVertex3f(.95f, -1.10f, 1.0f);



    ///top

    glVertex3f(.35f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.60f, 0.6f);
    glVertex3f(.35f, 1.60f, 0.6f);

    glVertex3f(.35f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.60f, 0.7f);
    glVertex3f(.35f, 1.60f, 0.7f);

    glVertex3f(.35f, 1.20f, 1.0f);
    glVertex3f(.35f, 1.20f, 1.1f);
    glVertex3f(.35f, 1.60f, 0.7f);
    glVertex3f(.35f, 1.60f, 0.6f);


    glVertex3f(.65f, 1.20f, 1.0f);
	glVertex3f(.75f, 1.20f, 1.0f);
	glVertex3f(.75f, 1.60f, 0.6f);
    glVertex3f(.65f, 1.60f, 0.6f);

    glVertex3f(.65f, 1.20f, 1.1f);
	glVertex3f(.75f, 1.20f, 1.1f);
	glVertex3f(.75f, 1.60f, 0.7f);
    glVertex3f(.65f, 1.60f, 0.7f);

    glVertex3f(.65f, 1.20f, 1.0f);
    glVertex3f(.65f, 1.20f, 1.1f);
    glVertex3f(.65f, 1.60f, 0.7f);
    glVertex3f(.65f, 1.60f, 0.6f);


    glVertex3f(.95f, 1.20f, 1.0f);
	glVertex3f(1.05f, 1.20f, 1.0f);
	glVertex3f(1.05f, 1.60f, 0.6f);
    glVertex3f(.95f, 1.60f, 0.6f);
    ///top top
    glVertex3f(.95f, 1.20f, 1.1f);
	glVertex3f(1.05f, 1.20f, 1.1f);
	glVertex3f(1.05f, 1.60f, 0.7f);
    glVertex3f(.95f, 1.60f, 0.7f);

    glVertex3f(.95f, 1.20f, 1.0f);
    glVertex3f(.95f, 1.20f, 1.1f);
    glVertex3f(.95f, 1.60f, 0.7f);
    glVertex3f(.95f, 1.60f, 0.6f);


    glVertex3f(.35f, 1.60f, 0.6f);
    glVertex3f(1.05f, 1.60f, 0.6f);
    glVertex3f(1.05f, 1.50f, 0.7f);
    glVertex3f(.35f, 1.50f, 0.7f);

    glVertex3f(.95f, 1.20f, 1.2f);
	glVertex3f(1.05f, 1.20f, 1.2f);
	glVertex3f(1.05f, 1.60f, 0.8f);
    glVertex3f(.95f, 1.60f, 0.8f);

    glVertex3f(.95f, 1.20f, 1.1f);
    glVertex3f(.95f, 1.20f, 1.2f);
    glVertex3f(.95f, 1.60f, 0.8f);
    glVertex3f(.95f, 1.60f, 0.7f);


    glVertex3f(.35f, 1.60f, 0.7f);
    glVertex3f(1.05f, 1.60f, 0.7f);
    glVertex3f(1.05f, 1.50f, 0.8f);
    glVertex3f(.35f, 1.50f, 0.8f);


    glEnd();


    glColor3f(.8,.188,.142);

    glBegin(GL_QUADS);


    glVertex3f(4.0f, -1.10f, 4.0f);
    glVertex3f(4.0f, -1.10f, -3.0f);
    glVertex3f(-3.0f, -1.10f, -3.0f);
    glVertex3f(-3.0f, -1.10f, 4.0f);


    glEnd();

    glColor3f(.0,.8,.0);

    glBegin(GL_QUADS);


    glVertex3f(20.0f, -1.11f, 20.0f);
    glVertex3f(20.0f, -1.11f, -20.0f);
    glVertex3f(-20.0f, -1.11f, -20.0f);
    glVertex3f(-20.0f, -1.11f, 20.0f);


    glEnd();


///tree
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(-7.27,-0.5,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(-4.97,-0.55,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(4.97,-0.55,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();



if(night==0) {
    ///sun
        glPushMatrix();
    glColor3f(1,1,.5);
    glTranslated(4.97,5.55,10.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
    }
    if(night==1) {
            ///moon
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslated(-4.97,5.55,10.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
    }

    ///Circle
    glColor3f(1,0,0);
    float ang=pi/2,b;
    b=pi/980;
    float x=0.0f,y=0.9f;
    float nx,ny,nz;
    float r;
    float hx=0.8,hy=0.0,hz=1.5;
    while( 1 )
    {
        if(ang>=2*pi+pi/2)break;
        ang+=b;
        r=sqrt(x*x+y*y);
        nx=r*cos(ang);
        ny=r*sin(ang);
        glBegin(GL_TRIANGLES);
        glVertex3f(hx, hy,1.5f);
        glVertex3f(x+hx, y+hy,1.5f);
        glVertex3f(nx+hx, ny+hy,1.5f);
        glEnd();
    }

	glutSwapBuffers();
}

void timer1(int value) {
	angle += 1.0f;
	if (angle > 360) {
		angle -= 360;
	}

	glutPostRedisplay();
	glutTimerFunc(25, timer, 0);
}

int main1(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1300, 700);

    R = 0.0; G = 0.4; B = 1.0;

	glutCreateWindow("Shahid minar");
	init();
	glutDisplayFunc(draw);
	glutReshapeFunc(resize);

	glutSpecialFunc(keyboardkey);
	timer(0);

	glutMainLoop();
	return 0;
}
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define pi 3.14159265358979323846264

void init2() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_NORMALIZE);
	glShadeModel(GL_SMOOTH);
}


void resize2(int w, int h) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 100.0);
}

float angle2 = -5.0f;
float posL12=0.1f;
float posL22=0.1f;
float posL32=0.1f;
float R2=0,G2=0,B2=0;
int night2 = 1;

void Light2()
{
	GLfloat lightColor0[] = {posL1, posL2, posL3, 1.0f};
	GLfloat lightPos0[] = {0.0f, 8.0f, -8.0f, 1.0f};
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
}


void keyboardkey2(int key, int x, int y)
{

	if(key==GLUT_KEY_DOWN)
    {
        R = 0.0; G = 0.4; B = 1.0;
            night = 0;
    }
	else if(key==GLUT_KEY_UP)
    {
        R = 0.0; G = 0.0; B = 0.0;
              night = 1;
    }
}

void draw2()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(R,G,B,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, -12.0f);




        Light();



	glRotatef(10, 1.0f, 0.0f, 0.0f);
	glRotatef(-10, 0.0f, 0.0f, 1.0f);
	glRotatef(angle,0.0f, 1.0f, 0.0f);

    glColor3f(1.0f, 1.0f, 0.0f);
    glTranslatef(0.0f,0.0f,-3.0f);



	glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(-.20f, 1.20f, 1.0f); /// front child
	glVertex3f(.20f, 1.20f, 1.0f);
	glVertex3f(.20f, 1.00f, 1.0f);
    glVertex3f(-.20f, 1.00f, 1.0f);

    glVertex3f(-.20f, 1.10f, 1.0f);
	glVertex3f(-.10f, 1.10f, 1.0f);
	glVertex3f(-.10f, -1.10f, 1.0f);
    glVertex3f(-.20f, -1.10f, 1.0f);

    glVertex3f(.20f, 1.10f, 1.0f);
	glVertex3f(.10f, 1.10f, 1.0f);
	glVertex3f(.10f, -1.10f, 1.0f);
    glVertex3f(.20f, -1.10f, 1.0f);

    glVertex3f(-.20f, 1.20f, 1.1f); /// back child
	glVertex3f(.20f, 1.20f, 1.1f);
	glVertex3f(.20f, 1.00f, 1.1f);
    glVertex3f(-.20f, 1.00f, 1.1f);

    glVertex3f(-.20f, 1.10f, 1.1f);
	glVertex3f(-.10f, 1.10f, 1.1f);
	glVertex3f(-.10f, -1.10f, 1.1f);
    glVertex3f(-.20f, -1.10f, 1.1f);

    glVertex3f(.20f, 1.10f, 1.1f);
	glVertex3f(.10f, 1.10f, 1.1f);
	glVertex3f(.10f, -1.10f, 1.1f);
    glVertex3f(.20f, -1.10f, 1.1f);


    glVertex3f(-.20f, 1.20f, 1.0f); ///chid side left
    glVertex3f(-.20f, 1.20f, 1.1f);
    glVertex3f(-.10f, -1.10f, 1.1f);
    glVertex3f(-.10f, -1.10f, 1.0f);

    glVertex3f(.20f, 1.20f, 1.0f); ///chid side right
    glVertex3f(.20f, 1.20f, 1.1f);
    glVertex3f(.10f, -1.10f, 1.1f);
    glVertex3f(.10f, -1.10f, 1.0f);

    glVertex3f(-.20f, 1.20f, 1.0f); /// Top child
	glVertex3f(.20f, 1.20f, 1.0f);
	glVertex3f(-.20f, 1.20f, 1.1f);
	glVertex3f(.20f, 1.20f, 1.1f);

    glEnd();


    ///right big child
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(1.20f, 1.20f, 1.0f); /// front child
	glVertex3f(1.60f, 1.20f, 1.0f);
	glVertex3f(1.60f, 1.00f, 1.0f);
    glVertex3f(1.20f, 1.00f, 1.0f);

    glVertex3f(1.20f, 1.10f, 1.0f);
	glVertex3f(1.30f, 1.10f, 1.0f);
	glVertex3f(1.30f, -1.10f, 1.0f);
    glVertex3f(1.20f, -1.10f, 1.0f);

    glVertex3f(1.60f, 1.10f, 1.0f);
	glVertex3f(1.50f, 1.10f, 1.0f);
	glVertex3f(1.50f, -1.10f, 1.0f);
    glVertex3f(1.60f, -1.10f, 1.0f);

    glVertex3f(1.20f, 1.20f, 1.1f); /// back child
	glVertex3f(1.60f, 1.20f, 1.1f);
	glVertex3f(1.60f, 1.00f, 1.1f);
    glVertex3f(1.20f, 1.00f, 1.1f);

    glVertex3f(1.20f, 1.10f, 1.1f);
	glVertex3f(1.30f, 1.10f, 1.1f);
	glVertex3f(1.30f, -1.10f, 1.1f);
    glVertex3f(1.20f, -1.10f, 1.1f);

    glVertex3f(1.60f, 1.10f, 1.1f);
	glVertex3f(1.50f, 1.10f, 1.1f);
	glVertex3f(1.50f, -1.10f, 1.1f);
    glVertex3f(1.60f, -1.10f, 1.1f);


    glVertex3f(1.20f, 1.20f, 1.0f); ///chid side left
    glVertex3f(1.20f, 1.20f, 1.1f);
    glVertex3f(1.30f, -1.10f, 1.1f);
    glVertex3f(1.30f, -1.10f, 1.0f);

    glVertex3f(1.60f, 1.20f, 1.0f); ///chid side right
    glVertex3f(1.60f, 1.20f, 1.1f);
    glVertex3f(1.50f, -1.10f, 1.1f);
    glVertex3f(1.50f, -1.10f, 1.0f);

    glVertex3f(1.20f, 1.20f, 1.0f); /// Top child
	glVertex3f(1.60f, 1.20f, 1.0f);
	glVertex3f(1.20f, 1.20f, 1.1f);
	glVertex3f(1.60f, 1.20f, 1.1f);

    glEnd();

    /// little child
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(-.80f, .30f, 1.0f); /// front child
	glVertex3f(-.40f, .30f, 1.0f);
	glVertex3f(-.40f, .10f, 1.0f);
    glVertex3f(-.80f, .10f, 1.0f);

    glVertex3f(-.80f, .20f, 1.0f);
	glVertex3f(-.70f, .20f, 1.0f);
	glVertex3f(-.70f, -1.10f, 1.0f);
    glVertex3f(-.80f, -1.10f, 1.0f);

    glVertex3f(-.40f, .20f, 1.0f);
	glVertex3f(-.50f, .20f, 1.0f);
	glVertex3f(-.50f, -1.10f, 1.0f);
    glVertex3f(-.40f, -1.10f, 1.0f);

    glVertex3f(-.80f, .30f, 1.1f); /// back child
	glVertex3f(-.40f, .30f, 1.1f);
	glVertex3f(-.40f, .10f, 1.1f);
    glVertex3f(-.80f, .10f, 1.1f);

    glVertex3f(-.80f, .20f, 1.1f);
	glVertex3f(-.70f, .20f, 1.1f);
	glVertex3f(-.70f, -1.10f, 1.1f);
    glVertex3f(-.80f, -1.10f, 1.1f);

    glVertex3f(-.40f, .20f, 1.1f);
	glVertex3f(-.50f, .20f, 1.1f);
	glVertex3f(-.50f, -1.10f, 1.1f);
    glVertex3f(-.40f, -1.10f, 1.1f);


    glVertex3f(-.80f, .30f, 1.0f); ///chid side left
    glVertex3f(-.80f, .30f, 1.1f);
    glVertex3f(-.70f, -1.10f, 1.1f);
    glVertex3f(-.70f, -1.10f, 1.0f);

    glVertex3f(-.40f, .30f, 1.0f); ///chid side right
    glVertex3f(-.40f, .30f, 1.1f);
    glVertex3f(-.50f, -1.10f, 1.1f);
    glVertex3f(-.50f, -1.10f, 1.0f);

    glVertex3f(-.80f, .30f, 1.0f); /// Top child
	glVertex3f(-.40f, .30f, 1.0f);
	glVertex3f(-.80f, .30f, 1.1f);
	glVertex3f(-.40f, .30f, 1.1f);



    glEnd();
     /// little child right
    glBegin(GL_QUADS);

    glColor3f(1,1,1);

    glVertex3f(1.70f, .30f, 1.0f); /// front child
	glVertex3f(2.10f, .30f, 1.0f);
	glVertex3f(2.10f, .10f, 1.0f);
    glVertex3f(1.70f, .10f, 1.0f);

    glVertex3f(1.70f, .20f, 1.0f);
	glVertex3f(1.80f, .20f, 1.0f);
	glVertex3f(1.80f, -1.10f, 1.0f);
    glVertex3f(1.70f, -1.10f, 1.0f);

    glVertex3f(2.10f, .20f, 1.0f);
	glVertex3f(2.00f, .20f, 1.0f);
	glVertex3f(2.00f, -1.10f, 1.0f);
    glVertex3f(2.10f, -1.10f, 1.0f);

    glVertex3f(1.70f, .30f, 1.1f); /// back child
	glVertex3f(2.10f, .30f, 1.1f);
	glVertex3f(2.10f, .10f, 1.1f);
    glVertex3f(1.70f, .10f, 1.1f);

    glVertex3f(1.70f, .20f, 1.1f);
	glVertex3f(1.80f, .20f, 1.1f);
	glVertex3f(1.80f, -1.10f, 1.1f);
    glVertex3f(1.70f, -1.10f, 1.1f);

    glVertex3f(2.10f, .20f, 1.1f);
	glVertex3f(2.00f, .20f, 1.1f);
	glVertex3f(2.00f, -1.10f, 1.1f);
    glVertex3f(2.10f, -1.10f, 1.1f);


    glVertex3f(1.70f, .30f, 1.0f); ///chid side left
    glVertex3f(1.70f, .30f, 1.1f);
    glVertex3f(1.80f, -1.10f, 1.1f);
    glVertex3f(1.80f, -1.10f, 1.0f);

    glVertex3f(2.10f, .30f, 1.0f); ///chid side right
    glVertex3f(2.10f, .30f, 1.1f);
    glVertex3f(2.00f, -1.10f, 1.1f);
    glVertex3f(2.00f, -1.10f, 1.0f);

    glVertex3f(1.70f, .30f, 1.0f); /// Top child
	glVertex3f(2.10f, .30f, 1.0f);
	glVertex3f(1.70f, .30f, 1.1f);
	glVertex3f(2.10f, .30f, 1.1f);



    glEnd();


    ///Mother
    glBegin(GL_QUADS);

    glColor3f(1,1,1);


    glVertex3f(.35f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.20f, 1.0f);
	glVertex3f(.45f, -1.20f, 1.0f);
    glVertex3f(.35f, -1.20f, 1.0f);

    glVertex3f(.75f, 1.20f, 1.0f);
	glVertex3f(.65f, 1.20f, 1.0f);
	glVertex3f(.65f, -1.20f, 1.0f);
    glVertex3f(.75f, -1.20f, 1.0f);


    glVertex3f(.35f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.20f, 1.1f);
	glVertex3f(.45f, -1.20f, 1.1f);
    glVertex3f(.35f, -1.20f, 1.1f);

    glVertex3f(.75f, 1.20f, 1.1f);
	glVertex3f(.65f, 1.20f, 1.1f);
	glVertex3f(.65f, -1.20f, 1.1f);
    glVertex3f(.75f, -1.20f, 1.1f);


    glVertex3f(.35f, 1.20f, 1.0f); ///chid side left
    glVertex3f(.35f, 1.20f, 1.1f);
    glVertex3f(.45f, -1.10f, 1.1f);
    glVertex3f(.45f, -1.10f, 1.0f);

    glVertex3f(.75f, 1.20f, 1.0f); ///chid side right
    glVertex3f(.75f, 1.20f, 1.1f);
    glVertex3f(.65f, -1.10f, 1.1f);
    glVertex3f(.65f, -1.10f, 1.0f);


	glVertex3f(1.05f, 1.20f, 1.0f);
	glVertex3f(.95f, 1.20f, 1.0f);
	glVertex3f(.95f, -1.20f, 1.0f);
    glVertex3f(1.05f, -1.20f, 1.0f);

    glVertex3f(1.05f, 1.20f, 1.1f);
	glVertex3f(.95f, 1.20f, 1.1f);
	glVertex3f(.95f, -1.20f, 1.1f);
    glVertex3f(1.05f, -1.20f, 1.1f);

    glVertex3f(1.05f, 1.20f, 1.0f); ///chid side right
    glVertex3f(1.05f, 1.20f, 1.1f);
    glVertex3f(.95f, -1.10f, 1.1f);
    glVertex3f(.95f, -1.10f, 1.0f);



    ///top

    glVertex3f(.35f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.20f, 1.0f);
	glVertex3f(.45f, 1.60f, 0.6f);
    glVertex3f(.35f, 1.60f, 0.6f);

    glVertex3f(.35f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.20f, 1.1f);
	glVertex3f(.45f, 1.60f, 0.7f);
    glVertex3f(.35f, 1.60f, 0.7f);

    glVertex3f(.35f, 1.20f, 1.0f);
    glVertex3f(.35f, 1.20f, 1.1f);
    glVertex3f(.35f, 1.60f, 0.7f);
    glVertex3f(.35f, 1.60f, 0.6f);


    glVertex3f(.65f, 1.20f, 1.0f);
	glVertex3f(.75f, 1.20f, 1.0f);
	glVertex3f(.75f, 1.60f, 0.6f);
    glVertex3f(.65f, 1.60f, 0.6f);

    glVertex3f(.65f, 1.20f, 1.1f);
	glVertex3f(.75f, 1.20f, 1.1f);
	glVertex3f(.75f, 1.60f, 0.7f);
    glVertex3f(.65f, 1.60f, 0.7f);

    glVertex3f(.65f, 1.20f, 1.0f);
    glVertex3f(.65f, 1.20f, 1.1f);
    glVertex3f(.65f, 1.60f, 0.7f);
    glVertex3f(.65f, 1.60f, 0.6f);


    glVertex3f(.95f, 1.20f, 1.0f);
	glVertex3f(1.05f, 1.20f, 1.0f);
	glVertex3f(1.05f, 1.60f, 0.6f);
    glVertex3f(.95f, 1.60f, 0.6f);
    ///top top
    glVertex3f(.95f, 1.20f, 1.1f);
	glVertex3f(1.05f, 1.20f, 1.1f);
	glVertex3f(1.05f, 1.60f, 0.7f);
    glVertex3f(.95f, 1.60f, 0.7f);

    glVertex3f(.95f, 1.20f, 1.0f);
    glVertex3f(.95f, 1.20f, 1.1f);
    glVertex3f(.95f, 1.60f, 0.7f);
    glVertex3f(.95f, 1.60f, 0.6f);


    glVertex3f(.35f, 1.60f, 0.6f);
    glVertex3f(1.05f, 1.60f, 0.6f);
    glVertex3f(1.05f, 1.50f, 0.7f);
    glVertex3f(.35f, 1.50f, 0.7f);

    glVertex3f(.95f, 1.20f, 1.2f);
	glVertex3f(1.05f, 1.20f, 1.2f);
	glVertex3f(1.05f, 1.60f, 0.8f);
    glVertex3f(.95f, 1.60f, 0.8f);

    glVertex3f(.95f, 1.20f, 1.1f);
    glVertex3f(.95f, 1.20f, 1.2f);
    glVertex3f(.95f, 1.60f, 0.8f);
    glVertex3f(.95f, 1.60f, 0.7f);


    glVertex3f(.35f, 1.60f, 0.7f);
    glVertex3f(1.05f, 1.60f, 0.7f);
    glVertex3f(1.05f, 1.50f, 0.8f);
    glVertex3f(.35f, 1.50f, 0.8f);


    glEnd();


    glColor3f(.8,.188,.142);

    glBegin(GL_QUADS);


    glVertex3f(4.0f, -1.10f, 4.0f);
    glVertex3f(4.0f, -1.10f, -3.0f);
    glVertex3f(-3.0f, -1.10f, -3.0f);
    glVertex3f(-3.0f, -1.10f, 4.0f);


    glEnd();

    glColor3f(.0,.8,.0);

    glBegin(GL_QUADS);


    glVertex3f(20.0f, -1.11f, 20.0f);
    glVertex3f(20.0f, -1.11f, -20.0f);
    glVertex3f(-20.0f, -1.11f, -20.0f);
    glVertex3f(-20.0f, -1.11f, 20.0f);


    glEnd();


///tree
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(-7.27,-0.5,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(-4.97,-0.55,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
glPushMatrix();
    glColor3f(0,1,0);
    glTranslated(4.97,-0.55,6.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();



if(night==0) {
    ///sun
        glPushMatrix();
    glColor3f(1,1,.5);
    glTranslated(4.97,5.55,10.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
    }
    if(night==1) {
            ///moon
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslated(-4.97,5.55,10.49);
    glutSolidSphere(0.25,10,10);
    glPopMatrix();
    }

    ///Circle
    glColor3f(1,0,0);
    float ang=pi/2,b;
    b=pi/980;
    float x=0.0f,y=0.9f;
    float nx,ny,nz;
    float r;
    float hx=0.8,hy=0.0,hz=1.5;
    while( 1 )
    {
        if(ang>=2*pi+pi/2)break;
        ang+=b;
        r=sqrt(x*x+y*y);
        nx=r*cos(ang);
        ny=r*sin(ang);
        glBegin(GL_TRIANGLES);
        glVertex3f(hx, hy,1.5f);
        glVertex3f(x+hx, y+hy,1.5f);
        glVertex3f(nx+hx, ny+hy,1.5f);
        glEnd();
    }

	glutSwapBuffers();
}

void timer2(int value) {
	angle += 1.0f;
	if (angle > 360) {
		angle -= 360;
	}

	glutPostRedisplay();
	glutTimerFunc(25, timer, 0);
}

int main2(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1300, 700);

    R = 0.0; G = 0.4; B = 1.0;

	glutCreateWindow("Shahid minar");
	init();
	glutDisplayFunc(draw);
	glutReshapeFunc(resize);

	glutSpecialFunc(keyboardkey);
	timer(0);

	glutMainLoop();
	return 0;
}
