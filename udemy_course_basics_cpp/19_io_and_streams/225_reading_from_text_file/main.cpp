

#include <fstream>
#include <iomanip>
#include <iostream>

int main() {
    std::ifstream in_file;
    std::string line;
    int num;
    double total;

    in_file.open("./file.txt");

    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        // std::exit(1);
        return 1;
    }

    // while (in_file >> line >> num >> total) {
    while (!in_file.eof()) {
        in_file >> line >> num >> total;

        std::cout << std::setw(10) << std::left << line << std::setw(10) << num
                  << std::setw(10) << total << std::endl;
    }

    in_file.close();
    return 0;
}
