#include <cstdlib>
#include <iostream>

#define SIZE 50

using namespace std;

void say_hello() {
    cout << "I here!!!" << endl;
}

int main() {
    
    int *int_ptr {nullptr};

    int_ptr = new int; // allocate an integer on the heap

    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    *int_ptr = 100;

    cout << *int_ptr << endl; // 100

    delete int_ptr; // free the allocated storage

    return 0;
}