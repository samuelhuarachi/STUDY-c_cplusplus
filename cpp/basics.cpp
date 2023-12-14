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

    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

bool accept3() {
    int tries = 1;
    while (tries < 4) {
        cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "Sorry, I dont understand that.\n";
                ++tries;
        }
    }
    cout << "I'll take that for a no.\n";
    return false;
}

void copy_fct() {
    puts("Copying elements ... \n");
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];  // to become a copy of v1

    for (auto i = 0; i != 10; ++i) v2[i] = v1[i];  // copy elements

    puts("Copy completed\n");
}

void print_in_aleatory_arrays() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto x : v)  // for each x in v
        cout << x << ',';

    puts("");
    for (auto x : {10, 21, 32, 43, 54, 65}) cout << x << ',';
    puts("");
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

    char v[6];
    char* p = &v[3];
    char x = *p;

    puts("\nTesting puts command ... \n");

    copy_fct();
    print_in_aleatory_arrays();
}