#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>
#include "Visual.h"
#include <iostream>

using namespace std;

class Window:public Visual
{
public:
	Window();
	Window(int width,int height);
	~Window();
	void render();
	void setWidth(int width);
	void setHeight(int height);
	void addChildVisual(Visual* child);
	
private:
	int width;
	int height;
	vector<Visual*> childs;
	void onResize(int width,int height);
};