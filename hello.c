#include <GL/glut.h>

void myDisplay(void)

{
  glClear(GL_COLOR_BUFFER_BIT);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(75, 1, 1, 20);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(0, 0, 2, 0, 0, 0, 0, 1, 0);

  glLineWidth(2.0f);
  // glRectf(0.0f, 0.0f, 0.5f, 0.5f);
  glBegin(GL_LINES);

  glVertex3f(-1.0f, 0.0f, 0.0f);
  glVertex3f(1.0f, 0.0f, 0.0f);

  glVertex3f(0.0f, -1.0f, 0.0f);
  glVertex3f(0.0f, 1.0f, 0.0f);
  glEnd();

  glFlush();
}

int main(int argc, char *argv[])

{
  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

  glutInitWindowPosition(100, 100);

  glutInitWindowSize(600, 600);

  glutCreateWindow("第一个OpenGL程序");

  glutDisplayFunc(&myDisplay);

  glutMainLoop();

  return 0;
}