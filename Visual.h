#ifndef VISUAL_H
#define VISUAL_H
#include <iostream>

using namespace std;
class Visual
{
public:
	Visual(){
		cout<<"Visual contruct"<<endl;
	}
	Visual(const Visual& visual){
		cout<<"Visual copy contruct"<<endl;
	}
	virtual ~Visual(){
		cout<<"Visual destory"<<endl;
	}
	virtual void render(){
		cout << "Visual render"<<endl;
	}
};

#endif