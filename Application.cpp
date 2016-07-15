#include "Application.h"

Application::Application(){

}

Application::Application(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
}

Application::~Application(){

}
int Application::exec(){
	glutMainLoop();
	return 0;
}