#include <GL/glut.h>

/**
 * author:          mayage@saicmotor.com
 * date:            2016-07-20
 * description:     test wether glut is properly installed in your dev-environment
 * cmd to run:      gcc glutTest.c -lGL -lGLU -lglut -o glutTest
 * obtain glut:     sudo apt-get install build-essential
                    sudo apt-get install libgl1-mesa-dev
                    sudo apt-get install libglu1-mesa-dev
                    sudo apt-get install libglut-dev  (or  sudo apt-get install freeglut3-dev)
 */     
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-5, 5, -5, 5, 5, 15);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);

    return;
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0, 0);
    glutWireTeapot(3);
    glFlush();

    return;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(300, 300);
    glutCreateWindow("OpenGL 3D View");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}