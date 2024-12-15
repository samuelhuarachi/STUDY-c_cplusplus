#include "Player.h"

Player::Player() { life = new unsigned int(100); }

Player::~Player() { delete life; }

void Player::showLife() const { std::cout << "Life: " << *life << std::endl; }