#ifndef BUTTON_H
#define BUTTON_H

#include <GL/gl.h>
#include "Visual.h"
#include <iostream>
using namespace std;

class Button:public Visual
{
public:
	Button();
	Button(int width,int height);
	~Button();
	void render();
	void setX(int x);
	void setY(int y);
	void setWidth(int width);
	void setHeight(int height);
	int getX();
	int getY();
	int getWidth();
	int getHeight();
private:
	int x;
	int y;
	int height;
	int width;	
};

#endif