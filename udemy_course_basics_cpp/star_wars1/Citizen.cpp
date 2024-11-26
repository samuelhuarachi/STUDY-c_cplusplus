#include "Citizen.h"
#include <iostream>

using namespace std;

void Citizen::get_identification_number()  {
    std::cout << identification_number << std::endl;
}

Citizen::~Citizen() { delete[] identification_number; }
