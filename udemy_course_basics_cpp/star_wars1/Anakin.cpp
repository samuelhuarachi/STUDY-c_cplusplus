
#include "Anakin.h"

#include <iostream>

void Anakin::codeName() { std::cout << "My code name is: Any" << std::endl; }

void Anakin::setFavoritePhare(const std::string &favoritePhare) {
    favorite_phare = favoritePhare;
}

std::string Anakin::getFavoritePhare() const { return favorite_phare; }

void Anakin::sayFavoritePhare() const {
    std::cout << "My favorite phare is: " << favorite_phare << "." << std::endl;
}

Anakin::~Anakin() {}