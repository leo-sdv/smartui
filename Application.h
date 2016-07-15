#ifndef APPLICATION_H
#define APPLICATION_H

#include <GL/glut.h>

class Application
{
public:
	Application();
	Application(int argc, char** argv);
	~Application();
	int exec();
	
};


#endif