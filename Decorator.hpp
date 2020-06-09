#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "chips.hpp"
#include "Player.hpp"

class Decorator {
    // will be used to calculate the amount of chips needed given a dollar amount (aka change)
    private:
        int whiteChips;
        int redChips;
        int blueChips;
        int greenChips;
        int blackChips;

    public:
        Decorator(int dollarAmount); 
        int getWhiteChips(); 
        int getRedChips();
        int getBlueChips();
        int getGreenChips();
        int getBlackChips();

        


};

#endif