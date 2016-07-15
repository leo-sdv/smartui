#ifndef VISUAL_H
#define VISUAL_H
#include <iostream>

using namespace std;
class Visual
{
public:
	Visual();
	Visual(const Visual& visual);
	virtual ~Visual();
	virtual void render();
};

#endif