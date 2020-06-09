#include "Decorator.hpp"

Decorator::Decorator(int dollarAmount) {
    blackChips = dollarAmount / 100;
    dollarAmount = dollarAmount % 100;

    greenChips = dollarAmount / 25;
    dollarAmount = dollarAmount % 25; 

    blueChips = dollarAmount / 10;
    dollarAmount = dollarAmount % 10;

    redChips = dollarAmount / 5;
    dollarAmount = dollarAmount % 5;

    whiteChips = dollarAmount;  
}

int Decorator::getWhiteChips() {
    return whiteChips;
} 
int Decorator::getRedChips() {
    return redChips;
}
int Decorator::getBlueChips() {
    return blueChips;
}
int Decorator::getGreenChips() {
    return greenChips;
}
int Decorator::getBlackChips() {
    return blackChips;   
}


