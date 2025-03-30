
#include <iostream>
#include <string>

template <int N> class Array {
    int size{N};
    int values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<N> &arr) {
        os << "[";
        for (const auto &val : arr.values)
            os << val << " ";
        os << "]" << std::endl;

        return os;
    }

  public:
    Array() = default;
    Array(int init_val) {
        for (auto &item : values)
            item = init_val;
    }

    void fill(int val) {
        for (auto &item : values)
            item = val;
    }

    int get_site() const { return size; }

    // overlaoded subuscript operator for easy use
    int &operator[](int index) { return value[index]; }
};