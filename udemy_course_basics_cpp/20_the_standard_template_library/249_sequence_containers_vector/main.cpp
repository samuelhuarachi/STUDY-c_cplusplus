#include <algorithm>
#include <iostream>
#include <vector>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;

  public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const { return this->age < rhs.age; }

    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

void display2(const std::vector<int> &vec) {
    std::cout << "[";
    std::for_each(vec.begin(), vec.end(), [](int x) { std::cout << x << " "; });
    std::cout << "]" << std::endl;
}