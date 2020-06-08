#ifndef __CHIPS_HPP__
#define __CHIPS_HPP__

#include <string>
#include "ChipsVisitor.hpp"

using namespace std;

class Visitor;

//this class can be used for the total number of money for a single player or total game
//chips will have the following rubric:
    // White, $1
    // Red, $5
    // Blue, $10
    // Green, $25
    // Black, $100
class Chips {
    public: 
        Chips();
        virtual void accept(Visitor* v,int num) = 0;
        virtual void add(int num) = 0;
        virtual void subtract(int num) = 0;
};

class White : public Chips {  
    private:
        int dollarAmount; //total amount of chips in dollar units
        int whiteCount; 
    public:
        White();
         virtual void add(int num);
        virtual void subtract(int num);

        virtual void accept(Visitor* v,int num);

        void setDollarAmount();
        int getWhiteCount();
        int getDollarAmount() const ;



};

class Red : public Chips {
    private:
        int dollarAmount; //total amount of chips in dollar units
        int redCount; 
    public:
        Red();
        virtual void add(int num);
        virtual void subtract(int num);

        virtual void accept(Visitor* v,int num);

        void setDollarAmount();
        int getRedCount() const;
        int getDollarAmount() const;

        
};

class Blue : public Chips {
    private: 
        int dollarAmount; //total amount of chips in dollar units
        int blueCount; 
    public:
        Blue();
        virtual void add(int num);
        virtual void subtract(int num);
        virtual void accept(Visitor* v,int num);

        void setDollarAmount();
        int getBlueCount() const;
        int getDollarAmount() const;



};

class Green : public Chips {
    private: 
        int dollarAmount; //total amount of chips in dollar units
        int greenCount; 
    public: 
        Green() ;
        virtual void add(int num);
        virtual void subtract(int num);

         virtual void accept(Visitor* v,int num) ;

          void setDollarAmount() ;
        int getGreenCount() const ;
        int getDollarAmount() const ;
};

class Black : public Chips {
    private:
        int dollarAmount; //dollar amount 
        int blackCount; 
    public: 
        Black() ;
        virtual void add(int num) ;
        virtual void subtract(int num) ;

        virtual void accept(Visitor* v,int num) ;

        void setDollarAmount() ;

        int getBlackCount() const ;
        int getDollarAmount() const ;


    
};
#endif