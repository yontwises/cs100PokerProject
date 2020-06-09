#include "gtest/gtest.h"

#include "ChipsVisitor_test.hpp"
#include "Factory_test.hpp"
#include "Decorator_test.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

