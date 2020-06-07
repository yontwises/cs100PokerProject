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