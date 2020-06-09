#include "Player.hpp"

Player::Player() {

}
Rich::Rich() {
    playerNum = 0;
    whiteChips = new White(); // 50 
    redChips = new Red(); //30 
     blueChips = new Blue(); //20
     greenChips = new Green(); // 10
     blackChips = new Black(); //5 

    //total will have 1,150 dollars
    blackChips->add(5); 
    greenChips->add(10);
    blueChips->add(20);
    redChips->add(30);
    whiteChips->add(50);

    playerCurrencyTotal = whiteChips->getDollarAmount() + redChips->getDollarAmount() + blueChips->getDollarAmount() + greenChips->getDollarAmount() + blackChips->getDollarAmount(); 
    // playerHand.resize(5);
}

Poor::Poor() {
    playerNum = 0;
    whiteChips = new White(); //50
    redChips = new Red(); //30 
    blueChips = new Blue(); //20
    greenChips = new Green(); //4
    blackChips = new Black(); //2

    //total will have 700 dollars 
    blackChips->add(2); 
    greenChips->add(4);
    blueChips->add(20);
    redChips->add(30);
    whiteChips->add(50);
    playerCurrencyTotal = whiteChips->getDollarAmount() + redChips->getDollarAmount() + blueChips->getDollarAmount() + greenChips->getDollarAmount() + blackChips->getDollarAmount(); 
    // playerHand.resize(5);
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

White* Rich::getWhiteChips() {
    return whiteChips;
}
Red* Rich::getRedChips() {
    return redChips;
}
Blue* Rich::getBlueChips() {
    return blueChips;
}
Green* Rich::getGreenChips() {
    return greenChips;
}
Black* Rich::getblackChips() {
    return blackChips;
}

White* Poor::getWhiteChips() {
    return whiteChips;
}
Red* Poor::getRedChips() {
    return redChips;
}
Blue* Poor::getBlueChips() {
    return blueChips;
}
Green* Poor::getGreenChips() {
    return greenChips;
}
Black* Poor::getblackChips() {
    return blackChips;
}

void Rich::addCard(Card dealtCard) {
    playerHand.push_back(dealtCard);
}
void Poor::addCard(Card dealtCard) {
    playerHand.push_back(dealtCard);
}

vector<Card> Rich::get_hand() const {
    return playerHand;
}

vector<Card> Poor::get_hand() const {
    return playerHand;
}