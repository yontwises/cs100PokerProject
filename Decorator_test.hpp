#ifndef __DECORATOR_TEST_HPP__
#define __DECORATOR_TEST_HPP__ 

#include "gtest/gtest.h"

#include "Decorator.hpp"

TEST(decoratorTest, twoHundredTest) {
    Decorator* test = new Decorator(200);
    
    EXPECT_EQ(2,test->getBlackChips() );
    EXPECT_EQ(0, test->getGreenChips() );
    EXPECT_EQ(0, test->getBlueChips() );
    EXPECT_EQ(0, test->getRedChips());
    EXPECT_EQ(0,test->getWhiteChips());
    
}

TEST (decoratorTest, threeHundred ) {
    Decorator* test = new Decorator(300);
    
    EXPECT_EQ(3,test->getBlackChips() );
    EXPECT_EQ(0, test->getGreenChips() );
    EXPECT_EQ(0, test->getBlueChips() );
    EXPECT_EQ(0, test->getRedChips());
    EXPECT_EQ(0,test->getWhiteChips());

}

TEST (decoratorTest, threeHundredFiftyTwo ) {
    Decorator* test = new Decorator(352);
    
    EXPECT_EQ(3,test->getBlackChips() );
    EXPECT_EQ(2, test->getGreenChips() );
    EXPECT_EQ(0, test->getBlueChips() );
    EXPECT_EQ(0, test->getRedChips());
    EXPECT_EQ(2,test->getWhiteChips());

}

TEST (decoratorTest, fiftyfive ) {
    Decorator* test = new Decorator(55);
    
    EXPECT_EQ(0,test->getBlackChips() );
    EXPECT_EQ(2, test->getGreenChips() );
    EXPECT_EQ(0, test->getBlueChips() );
    EXPECT_EQ(1, test->getRedChips());
    EXPECT_EQ(0,test->getWhiteChips());

}
TEST (decoratorTest, ONE) {
    Decorator* test = new Decorator(1);
    
    EXPECT_EQ(0,test->getBlackChips() );
    EXPECT_EQ(0, test->getGreenChips() );
    EXPECT_EQ(0, test->getBlueChips() );
    EXPECT_EQ(0, test->getRedChips());
    EXPECT_EQ(1,test->getWhiteChips());
}


#endif