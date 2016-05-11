#ifndef driver_h
#define driver_h
#include <string>

class Driver
{
std::string jina;
public:
Driver(std::string name = "Dereva")
: jina(name){}
std::string getName();
};

#endif
