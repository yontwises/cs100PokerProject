#include "ChipsVisitor.hpp"


Visitor::Visitor() {
    
}

void AddVisitor::visit(Chips* chip, int num) {
    chip->add(num);

}

void SubVisitor::visit(Chips* chip, int num) {
    chip->subtract(num);
}
