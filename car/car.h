#ifndef car_h
#define car_h
#include <string>

#include "driver.h"

class SteeringWheel{
};

class Car{
Driver *dere;
SteeringWheel s_wheel;
std::string car_type;
public:
Car(Driver *driver = NULL,std::string ct= "Mercedes") :
dere(driver), car_type(ct){}

std::string whosDriving();
};

#endif
