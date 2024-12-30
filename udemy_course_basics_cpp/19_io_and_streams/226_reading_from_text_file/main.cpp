

#include <fstream>
#include <iostream>

// int main() {
//     std::ifstream in_file;

//     in_file.open("./poem.txt");

//     if (!in_file) {
//         std::cerr << "Problem opening file" << std::endl;
//         // std::exit(1);
//         return 1;
//     }

//     std::string line{};
//     while (std::getline(in_file, line)) {
//         std::cout << line << std::endl;
//     }

//     in_file.close();
//     return 0;
// }

int main() {
    std::ifstream in_file;

    in_file.open("./poem.txt");

    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        // std::exit(1);
        return 1;
    }

    char c{};
    while (in_file.get(c)) {
        std::cout << c;
    }

    std::cout << std::endl;

    in_file.close();
    return 0;
}
