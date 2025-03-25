
#include <iostream>
#include <string>

class Array {
    int size{N};
    int values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array &arr) {
        os << "[";
        for (const auto &val : arr.values)
            os << val << " ";
        os << "]" << std::endl;

        return os;
    }
}