#include "Application.h"
#include "Button.h"
#include "Window.h"
#include <iostream>






int main(int argc,char **argv)
{
	Application app(argc,argv);

	// Window win(640,480);

	Window* win=new Window(640,480);
	Button* btn=new Button(100,50);
	btn->setX(200);
	btn->setY(200);
	win->addChildVisual(btn);
	
	return app.exec();
}








