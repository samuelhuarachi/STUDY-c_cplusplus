#include "Anakin.h"
#include "Person.h"
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    Anakin anakin{"Anakin", "Skywalker"};
    anakin.say_name();
    anakin.codeName();
    anakin.setFavoritePhare("Working !!!");
    anakin.sayFavoritePhare();
    anakin.showLife();

    char *p;
    p = new char[std::strlen("Samuel Gomes") + 1];
    std::strcpy(p, "Samuel Gomes");
    std::cout << "My name: " << p << std::endl;
    delete[] p;

    return 0;
}
