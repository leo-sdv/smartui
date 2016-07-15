#include "Window.h"
Window* appWin;
void Draw()
{
	appWin->render();
}

void Resize(int w, int h)
{
	glViewport(0,0,w,h);
}

Window::Window(){
	cout<<"Window construct"<<endl;
}

Window::~Window(){
	cout<<"Window destory"<<endl;
	for(int i=0;i<(this->childs).size();i++){
		delete this->childs[i];
	}
	this->childs.clear();
}

Window::Window(int width,int height){
	cout<<"Window construct:"<<width<<","<<height<<endl;
	this->width=width;
	this->height=height;

	appWin=this;
	glutInitWindowSize(width,height);
	glutInitWindowPosition(200,100);
	glutCreateWindow("my app");

	glutDisplayFunc(&Draw);
	glutReshapeFunc(&Resize);

}

void Window::setWidth(int width){
	this->width=width;
}

void Window::setHeight(int height){
	this->height=height;
}

void Window::render(){
	cout<<"Window::render childs count:"<< (this->childs).size()<<endl;
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,this->width,this->height,0,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	for(int i=0;i<(this->childs).size();i++){
		(*this->childs[i]).render();
	}

	glutSwapBuffers();

}

void Window::addChildVisual(Visual* child){
	cout<<"Window::addChildVisual"<<endl;
	this->childs.push_back(child);
}

void Window::onResize(int width,int height){

}