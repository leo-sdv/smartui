#include <GL/glut.h>
#include <math.h>

const int n = 50;
const GLfloat R = 0.5f;
const GLfloat Pi = 3.1415926536f;

void myDisplay()
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    for(i = 0; i < n; i++)
    {
        glVertex2f(R * cos(2 * Pi * i / n), R * sin(2 * Pi * i / n));
    }
    glEnd();
    glFlush();
}


int main(int argc, char *argv[])

{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutInitWindowPosition(100, 100);

    glutInitWindowSize(600, 600);

    glutCreateWindow("going to be a circle");

    glutDisplayFunc(&myDisplay);

    glutMainLoop();

    return 0;
}