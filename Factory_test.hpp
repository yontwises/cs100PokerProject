#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__
#include "gtest/gtest.h"

#include "Factory.hpp"

TEST(factoryTest, RichTest) {
    Factory* factory = new Factory(1);
    Player* test = factory->getPlayer();
    // std::cout << "potato" << std::endl;
    EXPECT_EQ(1150,test->getPlayerTotalMoney());
    
    // std::cout << "potato" << std::endl;

    if (test->getblackChips() == nullptr) {
        std::cout << "blackchips is nullptr" << std::endl;
    }

    Card testCard('c',2);
    test->addCard(testCard);
    EXPECT_EQ('c', test->get_hand().at(0).getSuit());

    Card testCardTwo('s',2);
    test->addCard(testCardTwo);
    EXPECT_EQ('s', test->get_hand().at(1).getSuit());
    
    EXPECT_EQ(5,test->getblackChips()->getBlackCount());
    // std::cout << "potato" << std::endl;
    EXPECT_EQ(10, test->getGreenChips()->getGreenCount());
    // std::cout << "potato" << std::endl;
    EXPECT_EQ(20,test->getBlueChips()->getBlueCount());
    // std::cout << "potato" << std::endl;
    EXPECT_EQ(30,test->getRedChips()->getRedCount());
    // std::cout << "potato" << std::endl;
    EXPECT_EQ(50, test->getWhiteChips()->getWhiteCount());     
    // std::cout << "potato" << std::endl;
}
TEST(factoryTest, PoorTest) {
    Factory* factory = new Factory (2);
    Player* test = factory->getPlayer();

    EXPECT_EQ(700,test->getPlayerTotalMoney());
    EXPECT_EQ(2,test->getblackChips()->getBlackCount());
    EXPECT_EQ(4, test->getGreenChips()->getGreenCount());
    EXPECT_EQ(20,test->getBlueChips()->getBlueCount());
    EXPECT_EQ(30,test->getRedChips()->getRedCount());
    EXPECT_EQ(50, test->getWhiteChips()->getWhiteCount());  


    Card testCard = Card('c',2);
    test->addCard(testCard);
    EXPECT_EQ('c', test->get_hand().at(0).getSuit());
}

#endif

