#include "Person.h"
#include <cstring>
#include <iostream>

Person::Person() : name{nullptr} {
    name = new char[1];
    *name = '\0';
}

Person::Person(const char *n, const char *l, const char *i)
    : name{nullptr}, lastname{nullptr} {
    if (n == nullptr) {
        name = new char[1];
        *name = '\0';
    } else {
        name = new char[std::strlen(n) + 1];
        std::strcpy(name, n);
    }

    if (l == nullptr) {
        lastname = new char[1];
        *lastname = '\0';
    } else {
        lastname = new char[std::strlen(l) + 1];
        std::strcpy(lastname, l);
    }

    if (i == nullptr) {
        identification_number = new char[1];
        *identification_number = '\0';
    } else {
        identification_number = new char[std::strlen(i) + 1];
        std::strcpy(identification_number, i);
    }
}

Person::~Person() {
    delete[] name;
    delete[] lastname;
}

void Person::say_name() const {
    std::cout << "Hi, I'm " << name << " " << lastname
              << ", and my citizen number is: " << identification_number
              << std::endl;
}

int Person::get_length() const { return strlen(name); }
const char *Person::get_name() const { return name; }
