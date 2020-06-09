#include "Player.hpp"


Rich::Rich() {
    playerNum = 0;
    White* whiteChips = new White(); // 50 
    Red* redChips = new Red(); //30 
    Blue* blueChips = new Blue(); //20
    Green* greenChips = new Green(); // 10
    Black* blackChips = new Black(); //5 

    //total will have 1,150 dollars
    blackChips->add(5); 
    greenChips->add(10);
    blueChips->add(20);
    redChips->add(30);
    whiteChips->add(50);

    playerCurrencyTotal = whiteChips->getDollarAmount() + redChips->getDollarAmount() + blueChips->getDollarAmount() + greenChips->getDollarAmount() + blackChips->getDollarAmount(); 
    playerHand.resize(5);
}

Poor::Poor() {
    playerNum = 0;
    White* whiteChips = new White(); //50
    Red* redChips = new Red(); //30 
    Blue* blueChips = new Blue(); //20
    Green* greenChips = new Green(); //4
    Black* blackChips = new Black(); //2

    //total will have 700 dollars 
    blackChips->add(2); 
    greenChips->add(4);
    blueChips->add(20);
    redChips->add(30);
    whiteChips->add(50);
    playerCurrencyTotal = whiteChips->getDollarAmount() + redChips->getDollarAmount() + blueChips->getDollarAmount() + greenChips->getDollarAmount() + blackChips->getDollarAmount(); 
    playerHand.resize(5);
}

int Rich::getPlayerNum() const {
    return playerNum;
}

int Poor::getPlayerNum() const {
    return playerNum;
}
void Rich::setPlayerNum(int num) {
    playerNum = num;
}
void Poor::setPlayerNum(int num) {
    playerNum = num;
}

int Rich::getPlayerTotalMoney() const {
    return playerCurrencyTotal;
}
int Poor::getPlayerTotalMoney() const {
    return playerCurrencyTotal;
}

void Rich::setPlayerTotalMoney() {
    playerCurrencyTotal = whiteChips->getDollarAmount() + redChips->getDollarAmount() + blueChips->getDollarAmount() + greenChips->getDollarAmount() + blackChips->getDollarAmount(); 

}
void Poor::setPlayerTotalMoney() {
    playerCurrencyTotal = whiteChips->getDollarAmount() + redChips->getDollarAmount() + blueChips->getDollarAmount() + greenChips->getDollarAmount() + blackChips->getDollarAmount(); 
}