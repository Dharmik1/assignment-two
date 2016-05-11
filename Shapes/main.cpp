
#include <iostream>

#include <string>

#include "RECTANGLE.h"

#include "TRIANGLE.h"

#include "SQUARE.h"

using namespace std;

int main(int argc, char **argv){

Square sq(10);

cout << "Square area: " <<sq.area() << endl;
  
Triangle t1(6,3), t2(8,9);

cout << "Triangle 1 area: " <<t1.area()<<endl;

cout << " Name: " << t1.getName() << endl;

cout << "Triangle 2 area: " << t2.area()<<endl;

cout << " Name: " << t2.getName() << endl;

return 0;

}