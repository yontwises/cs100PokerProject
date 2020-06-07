#ifndef __BLUE_HPP__
#define __BLUE_HPP__

#include "chips.hpp"
class blue : public Chips {
    private: 
        int dollarAmount; //total amount of chips in dollar units
        int blueCount; 
    public:
        blue() {
            dollarAmount = 0;
            blueCount = 0;

        }
        virtual void add(int num) {
            blueCount = blueCount + num;
            setDollarAmount();
        }
        virtual void subtract(int num) {
            blueCount = blueCount - num;
            setDollarAmount();
        }
         virtual void accept(Visitor* v,int num) {
            v->visit(this, num);
        }

        void setDollarAmount() {
            dollarAmount = blueCount * 10;
        }



};

#endif