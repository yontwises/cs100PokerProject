#include "chips.hpp"
#include <iostream>
Chips::Chips() {

}


White::White()
{
    dollarAmount = 0;
    whiteCount = 0;
}
void White::add(int num)
{
    whiteCount = whiteCount + num;
    setDollarAmount();
}
void White::subtract(int num)
{
    if (num > whiteCount) {
        std::cout << "Not enough chips " << std::endl;
        return;
    }
    whiteCount = whiteCount - num;
    setDollarAmount();
}

void White::accept(Visitor *v, int num)
{
    v->visit(this, num);
}

void White::setDollarAmount()
{
    dollarAmount = whiteCount * 1;
}
int White::getWhiteCount()
{
    return whiteCount;
}
int White::getDollarAmount() const
{
    return dollarAmount;
}

Red::Red()
{
    dollarAmount = 0;
    redCount = 0;
}
void Red::add(int num)
{
    redCount = redCount + num;
    setDollarAmount();
}
void Red::subtract(int num)
{
    if (num > redCount) {
        std::cout << "Not enough chips " << std::endl;
        return;
    }
    redCount = redCount - num;
    setDollarAmount();
}

void Red::accept(Visitor *v, int num)
{
    v->visit(this, num);
}
void Red::setDollarAmount()
{
    dollarAmount = redCount * 5;
}
int Red::getRedCount() const
{
    return redCount;
}
int Red::getDollarAmount() const
{
    return dollarAmount;
}

Blue::Blue()
{
    dollarAmount = 0;
    blueCount = 0;
}
void Blue::add(int num)
{
    blueCount = blueCount + num;
    setDollarAmount();
}
void Blue::subtract(int num)
{
    if (num > blueCount) {
        std::cout << "Not enough chips " << std::endl;
        return;
    }
    blueCount = blueCount - num;
    setDollarAmount();
}
void Blue::accept(Visitor *v, int num)
{
    v->visit(this, num);
}

void Blue::setDollarAmount()
{
    dollarAmount = blueCount * 10;
}
int Blue::getBlueCount() const
{
    return blueCount;
}
int Blue::getDollarAmount() const
{
    return dollarAmount;
}

Green::Green()
{
    dollarAmount = 0;
    greenCount = 0;
}
void Green::add(int num)
{
    greenCount = greenCount + num;
    setDollarAmount();
}
void Green::subtract(int num)
{
    if (num > greenCount) {
        std::cout << "Not enough chips " << std::endl;
        return;
    }
    greenCount = greenCount - num;
    setDollarAmount();
}

void Green::accept(Visitor *v, int num)
{
    v->visit(this, num);
}

void Green::setDollarAmount()
{
    dollarAmount = greenCount * 25;
}
int Green::getGreenCount() const
{
    return greenCount;
}
int Green::getDollarAmount() const
{
    return dollarAmount;
}

Black::Black()
{
    blackCount = 0;
    dollarAmount = 0;
}
 void Black::add(int num)
{
    blackCount = blackCount + num;
    setDollarAmount();
}
void Black::subtract(int num)
{
    if (num > blackCount) {
        std::cout << "Not enough chips " << std::endl;
        return;
    }
    blackCount = blackCount - num;
    setDollarAmount();
}

void Black::accept(Visitor *v, int num)
{
    v->visit(this, num);
}

void Black::setDollarAmount()
{
    dollarAmount = blackCount * 100;
}

int Black::getBlackCount() const
{
    return blackCount;
}
int Black::getDollarAmount() const
{
    return dollarAmount;
}