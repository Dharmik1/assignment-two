#ifndef RECTANGLE_h

#define RECTANGLE_h

#include <iostream>

#include <string>

class Rectangle{

std::string shape;

int height, width;
 
public:

Rectangle(std::string shape="Rectangle"): shape(shape), height(0), width(0){}

Rectangle(std::string shape, int h, int w):shape(shape), height(h), width(w){}

std::string getName();

int area();

};
#endif