#include "Visual.h"

Visual::Visual(){
	cout<<"Visual contruct"<<endl;
}

Visual::Visual(const Visual& visual){
	cout<<"Visual copy contruct"<<endl;
}

Visual::~Visual(){
	cout<<"Visual destory"<<endl;
}

void Visual::render(){
	cout << "Visual render"<<endl;
}

