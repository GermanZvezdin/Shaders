#include <GLUT/GLUT.h>
#include </Users/germanzvezdin/Downloads/glew-2.1.0/include/GL/glew.h>
#include <cmath>
#include <iostream>
//g++ main.cpp -framework GLUT -framework OpenGL -Wno-deprecated

GLvoid init(GLvoid){
    glClearColor(0.1, 0.2, 0.3, 0.0);
}
GLvoid DrawGLScene(GLvoid) {
    //glFlush();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);// Очистка экрана и буфера глубины
    glLoadIdentity();
    glTranslatef(-0.2f,-0.2f,0.0f);
    glRotatef(90.0f,1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    //ooo
    glColor3f(0.7,0.1,0);
    glVertex3f(0,0.5,0);
    glColor3f(0.7,1,0);
    glVertex3f(0.5,0.5,0);
    glColor3f(0.7,0.5,0);
    glVertex3f(0.5,0.5,0.5);
    glColor3f(0.7,0.1,1);
    glVertex3f(0,0.5,0.5);
    //
    glColor3f(0,0.5,0.7);
    glVertex3f(0,0.5,0.5);
    glColor3f(0.6,0.5,0.7);
    glVertex3f(0.5,0.5,0.5);
    glColor3f(0,0.2,0.5);
    glVertex3f(0.5,0,0.5);
    glColor3f(0.6,0.4,0.2);
    glVertex3f(0,0,0.5);
    //oyox
    glColor3f(1,0.5,0);
    glVertex3f(0,0,0);
    glColor3f(1,0.5,1);
    glVertex3f(0,0,0.5);
    glColor3f(1,0.5,0);
    glVertex3f(0,0.5,0.5);
    glColor3f(0,0.5,1);
    glVertex3f(0,0.5,0);
    //fff
    glColor3f(0.2,0.5,0.7);
    glVertex3f(0,0,0);
    glColor3f(0.2,0.5,0.5);
    glVertex3f(0,0.5,0);
    glColor3f(0.80,0.5,0.7);
    glVertex3f(0.5,0.5,0);
    glColor3f(0.2,1,0.5);
    glVertex3f(0.5,0,0);
    //oxoz
    glColor3f(1,0.5,1);
    glVertex3f(0,0,0);
    glColor3f(1,0,1);
    glVertex3f(0.5,0,0);
    glColor3f(0,0.5,1);
    glVertex3f(0.5,0,0.5);
    glVertex3f(0,0,0.5);
    //up
    /*
    glColor3f(1,0.5,0);
    glVertex3f(0.5,0,0);
    glVertex3f(0.5,0.5,0);
    glVertex3f(0.5,0.5,0.5);
    glVertex3f(0.5,0,0.5);
     */
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,0,1);
    glVertex3f(0,0,0);
    glVertex3f(0,0,0.01);
    glVertex3f(1,0,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex3f(0,0,0);
    glVertex3f(0.01,0,0);
    glVertex3f(0,1,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,1,0);
    glVertex3f(0,0,0);
    glVertex3f(0.01,0,0);
    glVertex3f(0,0,1);
    glEnd();
    glLoadIdentity();

    glFlush();
}

int main (int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("1");
    init();
    glutDisplayFunc(DrawGLScene);
    glutMainLoop();
    return 0;
}