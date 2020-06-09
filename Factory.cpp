#include "Factory.hpp"

Factory::Factory(int type) {
    if (type == 1 ) {
        tempPlayer = new Rich();
    }
    else if (type == 2) {
        tempPlayer = new Poor();
    }
    else {
        tempPlayer = nullptr;
    }
}

Factory::~Factory() {
    if (tempPlayer) {
        delete[] tempPlayer;
        tempPlayer = nullptr;
    }
}

Player* Factory::getPlayer() {
    return tempPlayer;
}

