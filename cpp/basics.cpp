#include <math.h>

#include <iostream>
using namespace std;

double square(double x) { return x * x; }
void print_square(double x) { cout << "the square of " << x << " is " << square(x) << "\n"; }

void some_function() {
    double d = 2.2;
    int i = 7;
    d = d + i;
    i = d * i;
}

bool accept() {
    cout << "Do you want to proceed (y or n)? \n";
    char answer = 0;
    cin >> answer;

    if (answer == 'y') {
        cout << "true ...";
        return true;
    }

    cout << "false ...";
    return false;
}

bool accept2() {
    cout << "Do you want to proceed (y or n)? \n";
    char answer = 0;
    cin >> answer;
}

int main() {
    auto b = true;
    auto ch = 'x';
    auto i = 123;
    auto d = 1.2;
    auto z = sqrt(4);

    const int dmv = 17;
    int var = 17;

    cout << "Hello World!\n";
    print_square(2);
    accept();
}