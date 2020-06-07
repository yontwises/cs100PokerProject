#ifndef __BLACK_HPP__
#define __BLACK_HPP__
#include "chips.hpp"
class black : public Chips {
    private:
        int dollarAmount; //dollar amount 
        int blackCount; 
    public: 
        black() {
            blackCount = 0;
            dollarAmount = 0;
        }
        virtual void add(int num) {
            blackCount = blackCount - num;
            setDollarAmount();
        }
        virtual void subtract(int num) {
            blackCount = blackCount - num;
             setDollarAmount();
        }

        virtual void accept(Visitor* v,int num) {
            v->visit(this, num);
        }

        void setDollarAmount() {
            dollarAmount = blackCount * 100;
        }


    
};



#endif