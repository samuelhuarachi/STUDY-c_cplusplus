#include "Person.h"
#include <cstring>
#include <iostream>

// no-args constructor
Person::Person() : name{nullptr} {
    name = new char[1];
    *name = '\0';
}

// Overloaded constructor
Person::Person(const char *n, const char *l)
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
}

// Desctructor
Person::~Person() { delete[] name; }

// display method
void Person::say_name() const {
    std::cout << name << " " << lastname << std::endl;
}

int Person::get_length() const { return strlen(name); }
const char *Person::get_str() const { return name; }
