#ifndef __GREEN_HPP__
#define __GREEN_HPP__

#include "chips.hpp"
class green : public Chips {
    private: 
        int dollarAmount; //total amount of chips in dollar units
        int greenCount; 
    public: 
        green() {
            dollarAmount = 0;
            greenCount = 0;
        }
        virtual void add(int num) {
            greenCount = greenCount + num;
            setDollarAmount();
        }
        virtual void subtract(int num) {
            greenCount = greenCount - num;
            setDollarAmount();
        }

         virtual void accept(Visitor* v,int num) {
            v->visit(this, num);
        }

          void setDollarAmount() {
            dollarAmount = greenCount * 25;
        }


};

#endif