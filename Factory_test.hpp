#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__
#include "gtest/gtest.h"

#include "Factory.hpp"

TEST(factoryTest, RichTest) {
    Factory* factory = new Factory(1);
    Player* test = factory->getPlayer();

    EXPECT_EQ(1150,test->getPlayerTotalMoney());
}
TEST(factoryTest, PoorTest) {
    Factory* factory = new Factory (2);
    Player* test = factory->getPlayer();

    EXPECT_EQ(700,test->getPlayerTotalMoney());
}

#endif


