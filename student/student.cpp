#include <iostream>
#include <string>
#include "student.h"
int main()
{
 struct student stud;
    //you have to press enter for every value
    std::cout <<"What id the student's name & ID?:";
    std::cin >>stud.name>>stud.id;
    std::cout <<"Grades: assignment midterm fin:";
    std::cin >>stud.id>>stud.midt>>stud.fin;
    //print out the results
    std::cout <<"Name: " << stud.name << std::endl
              <<"Student ID: " << stud.id << " Grade:"
              << (stud.midt + stud.fin + stud.assig)
              << std::endl;
}
