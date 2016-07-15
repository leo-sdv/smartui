#include "Button.h"

Button::Button(){
	cout<<"Button construct"<<endl;
}
Button::Button(int width,int height){
	cout<<"Button construct:"<<width<<","<<height<<endl;
	this->width=width;
	this->height=height;	
}
Button::~Button(){
	cout<<"Button destory"<<endl;
}

void Button::setX(int x){
	this->x=x;
}

void Button::setY(int y){
	this->y=y;
}

void Button::setWidth(int width){
	this->width=width;
}

void Button::setHeight(int height){
	this->height=height;
}

int Button::getX(){
	return this->x;
}

int Button::getY(){
	return this->y;
}

int Button::getWidth(){
	return this->width;
}

int Button::getHeight(){
	return this->height;
}

void Button::render(){
	cout<<"Button render"<<endl;
	glBegin(GL_QUADS);
		glVertex2i( this->x, this->y);
		glVertex2i( this->x, y+this->height);
		glVertex2i( this->x+this->width, y+this->height);
		glVertex2i( this->x+this->width, this->y);
	glEnd();
}