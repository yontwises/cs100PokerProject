#ifndef __CHIPSVISITOR_TEST_HPP__
#define __CHIPVISITOR_TEST_HPP__

#include "gtest/gtest.h"

#include "ChipsVisitor.hpp"

TEST(visitorTest, WhiteVisit) {
    AddVisitor* test = new AddVisitor(); 
    SubVisitor* testTwo = new SubVisitor();
    White* white = new White();

    white->accept(test, 1);
    

    EXPECT_EQ(1,white->getWhiteCount());


    white->accept(test, 5);
    EXPECT_EQ(6,white->getWhiteCount());

    white->accept(testTwo, 1);

    EXPECT_EQ(5,white->getWhiteCount());

    white->accept(testTwo, 2);

    EXPECT_EQ(3,white->getWhiteCount()); 

    white->accept(testTwo, 5); //negative case
    EXPECT_EQ(3,white->getWhiteCount());   

    EXPECT_EQ(3, white->getDollarAmount());
    
}

TEST(visitorTest, RedVisit) {
    AddVisitor* test = new AddVisitor(); 
    SubVisitor* testTwo = new SubVisitor();
    Red* red = new Red();

    red->accept(test, 1);
    

    EXPECT_EQ(1,red->getRedCount());


    red->accept(test, 5);
    EXPECT_EQ(6,red->getRedCount());

    red->accept(testTwo, 1);

    EXPECT_EQ(5,red->getRedCount());

    red->accept(testTwo, 2);

    red->accept(testTwo, 5); //negative case

    EXPECT_EQ(3,red->getRedCount());

    EXPECT_EQ(15, red->getDollarAmount());
}
TEST(visitorTest, BlueVisit) {
    AddVisitor* test = new AddVisitor(); 
    SubVisitor* testTwo = new SubVisitor();
    Blue* blue = new Blue();

    blue->accept(test, 1);
    

    EXPECT_EQ(1,blue->getBlueCount());


    blue->accept(test, 5);
    EXPECT_EQ(6,blue->getBlueCount());

    blue->accept(testTwo, 1);

    EXPECT_EQ(5,blue->getBlueCount());

    blue->accept(testTwo, 2);
    blue->accept(testTwo,5); //negative case
    EXPECT_EQ(3,blue->getBlueCount());

    EXPECT_EQ(30, blue->getDollarAmount());
}
TEST(visitorTest, GreenVisit) {
    AddVisitor* test = new AddVisitor(); 
    SubVisitor* testTwo = new SubVisitor();
    Green* green = new Green();

    green->accept(test, 1);
    

    EXPECT_EQ(1,green->getGreenCount());


    green->accept(test, 5);
    EXPECT_EQ(6,green->getGreenCount());

    green->accept(testTwo, 1);

    EXPECT_EQ(5,green->getGreenCount());

    green->accept(testTwo, 2);
    green->accept(testTwo,5); //negative case
    
    EXPECT_EQ(3,green->getGreenCount());

    EXPECT_EQ(75, green->getDollarAmount());
}

TEST(visitorTest, BlackVisit) {
    AddVisitor* test = new AddVisitor(); 
    SubVisitor* testTwo = new SubVisitor();
    Black* black = new Black();

    black->accept(test, 1);
    

    EXPECT_EQ(1,black->getBlackCount());


    black->accept(test, 5);
    EXPECT_EQ(6,black->getBlackCount());

    black->accept(testTwo, 1);

    EXPECT_EQ(5,black->getBlackCount());

    black->accept(testTwo, 2);
    
    black->accept(testTwo,5);

    EXPECT_EQ(3,black->getBlackCount());

    EXPECT_EQ(300, black->getDollarAmount());
}
#endif