#ifndef __CHIPS_HPP__
#define __CHIPS_HPP__

#include <string>
#include "ChipsVisitor.hpp"

using namespace std;

//this class can be used for the total number of money for a single player or total game
//chips will have the following rubric:
    // White, $1
    // Red, $5
    // Blue, $10
    // Green, $25
    // Black, $100
class Chips {
    public: 
        virtual void accept(Visitor* v,int num) = 0;
        virtual void add(int num) = 0;
        virtual void subtract(int num) = 0;
};


#endif