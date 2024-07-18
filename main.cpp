#include <iostream>
#include <string>
#include "./headers/tic-tac-toe.hpp"

#define BOX(x) "+---+\n| " << x << " |\n+---+"

void displayBox (void) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << BOX(" ");
        }
    }
}

int main (int argc, char *argv[]) {
    //displayBox();

    std::cout << BOX(" ");

    return 0;
}
