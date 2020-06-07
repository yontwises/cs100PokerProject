#ifndef __WHITE_HPP__
#define __WHITE_HPP__

#include "chips.hpp"
class white : public Chips {  
    private:
        int dollarAmount; //total amount of chips in dollar units
        int whiteCount; 
    public:
        white() {
            dollarAmount = 0;
            whiteCount = 0;
        }
         virtual void add(int num) {
            whiteCount = whiteCount + num;
            setDollarAmount();
        }
        virtual void subtract(int num) {
            whiteCount = whiteCount - num;
            setDollarAmount();
        }

         virtual void accept(Visitor* v,int num) {
            v->visit(this, num);
        }

          void setDollarAmount() {
            dollarAmount = whiteCount * 1;
        }



};

#endif