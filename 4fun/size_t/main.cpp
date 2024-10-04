#include <iostream>


int main()
 {
    int arr[10] {1,2,3,4,5,6,7,8,9,10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int first_elem =  arr[0];

    std::cout << "Size of the array: " << size << std::endl;
    std::cout << "first_elem: " << first_elem << std::endl;

    return 0;
 }
