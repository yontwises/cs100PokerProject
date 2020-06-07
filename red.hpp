#ifndef __RED_HPP__
#define __RED_HPP__

#include "chips.hpp"

class red : public Chips {
    private:
        int dollarAmount; //total amount of chips in dollar units
        int redCount; 
    public:
        red() {
            dollarAmount = 0;
            redCount = 0;
        }
        virtual void add(int num) {
            redCount = redCount + num;
            setDollarAmount();
        }
        virtual void subtract(int num) {
            redCount = redCount - num;
            setDollarAmount();
        }

         virtual void accept(Visitor* v,int num) {
            v->visit(this, num);
        }
          void setDollarAmount() {
            dollarAmount = redCount * 5;
        }
        
};

#endif