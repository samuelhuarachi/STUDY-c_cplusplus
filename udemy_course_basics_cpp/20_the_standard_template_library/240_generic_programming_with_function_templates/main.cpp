#include <iostream>
#include <string>

template <typename T> T min(T a, T b) { return (a < b) ? a : b; }

template <typename T1, typename T2> void func(T1 a, T2 b) {
    std::cout << a << " " << b << std::endl;
}

struct Person {
    std::string name;
    int age;
    bool operator<(const Person &rhs) const { return this->age < rhs.age; }
};

template <typename T> void my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    int x{100};
    int y{200};

    my_swap(x, y);

    Person p1{"Curly", 50};
    Person p2{"Moe", 30};

    std::cout << min<int>(2, 3) << std::endl;

    return 0;
}