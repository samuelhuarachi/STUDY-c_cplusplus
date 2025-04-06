#include <iostream>
#include <list>
#include <map>
#include <set>
#include <vector>

void display(const std::vector<int> &vec) {
    std::cout << "[";
    for (auto const &i : vec) {
        std::cout << i << " ";
    }

    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\n==============" << std::endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};
    auto it = nums1.begin(); // point to 1
    std::cout << *it << std::endl;

    it++; // point to 2
    std::cout << *it << std::endl;

    it += 2; // point to 4
    std::cout << *it << std::endl;

    it -= 2; // point to 2
    std::cout << *it << std::endl;

    it = nums1.end() - 1;
    std::cout << *it << std::endl;
}

void test2() {

    std::cout << "\n==========" << std::endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};
    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3() {
    std::cout << "\n==========" << std::endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};
    std::vector<int>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();

    while (it1 != nums1.end()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    it1 = nums1.begin();
    while (it1 != nums1.end()) {
        // *it1 = 0; //compile error - read only
        it1++;
    }
}

// void test4() {

//     std::map<std::string, std::string> favorites {
//         {"Frank", "C++"}, {"Bill", "Java"}, {"James", "Haskell"}
//     }

//     auto it3 = favorites.begin();
//     while (it3 != favorites.end()) {
//         std::cout << it3->first << ":" << it3->second << std::endl;
//         it3++;
//     }
// }

void test5() {
    // itereate over a subset of a container
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while (start != finish) {
        std::cout << *start << std::endl;
        start++;
    }
}

int main() {
    // test1();
    // test2();
    // test3();
    test5();

    return 0;
}