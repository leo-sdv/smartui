#include <GL/glut.h>
#include <math.h>

const int n = 25;
const GLfloat R = 0.5f;
const GLfloat Pi = 3.1415926536f;

void myDisplay()
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);

    // 点，线 消除锯齿
    // glEnable(GL_POINT_SMOOTH);
    // glHint(GL_POINT_SMOOTH, GL_NICEST);

    // glEnable(GL_LINE_SMOOTH);
    // glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

    // glEnable(GL_POLYGON_SMOOTH_HINT);
    // glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);

    // 采用了多重采样，点线设置将会忽略掉
    
    glEnable(GL_MULTISAMPLE);
    glEnable(GL_BLEND); //enable

    glBegin(GL_POLYGON);
    for(i = 0; i < n; i++)
    {
        glVertex2f(R * cos(2 * Pi * i / n), R * sin(2 * Pi * i / n));
    }
    glEnd();
    glFlush();

    glDisable(GL_BLEND);// 画完后disable掉
    glDisable(GL_MULTISAMPLE);
}


int main(int argc, char *argv[])

{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_MULTISAMPLE);

    glutInitWindowPosition(100, 100);

    glutInitWindowSize(600, 600);

    glutCreateWindow("going to be a circle");

    glutDisplayFunc(&myDisplay);

    glutMainLoop();

    return 0;
}