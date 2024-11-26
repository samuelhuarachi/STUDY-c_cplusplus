#include "Person.h"
#include <iostream>
#include <vector>

using namespace std;

int main() { // Mystring a{"Hello"};
    // Mystring b;
    // b = a;
    // b = "This is a test";

    // 1 - Person
    Person anakin{"Anakin", "Skywalker", "0000001"};
    anakin.say_name();
    anakin.get_identification_number();

    // 2 - Padawan

    // 3 - Jedi

    // 4 - Sith

    return 0;
}
