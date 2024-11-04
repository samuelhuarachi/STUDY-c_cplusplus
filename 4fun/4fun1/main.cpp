#include <cstdlib>
#include <iostream>
#include "Player.h"

#define SIZE 50

using namespace std;

void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    Player *enemy1 = new Player("Enemy 1", 100, 100);
    Player *enemy2 = new Player("Enemy 2", 100, 100);
    Player *enemy3 = new Player("Enemy 3", 100, 100);
    Player *enemy4 = new Player("Enemy 4", 100, 100);

    // {
    //     Player frank{"Frank"};
    //     display_active_players();
    // }

    display_active_players();

    delete enemy1;
    delete enemy2;
    delete enemy3;
    delete enemy4;

    return 0;
}
