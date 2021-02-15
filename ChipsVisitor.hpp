#ifndef __CHIPSVISITOR_HPP__
#define __CHIPSVISITOR_HPP__
#include "chips.hpp"

class Chips;

class Visitor {
    public: 
        Visitor();
        virtual void visit(Chips* chip, int num) = 0;
    
};

//used polymorphism because I just want one accept function.
class AddVisitor : public Visitor {
    public: 
        AddVisitor(){};
        virtual void visit(Chips* chip, int num); 
};

class SubVisitor : public Visitor {
    public:
        SubVisitor(){};
        virtual void visit(Chips* chip, int num);

};

#endif