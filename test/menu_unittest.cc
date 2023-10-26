#include "gtest/gtest.h"

extern "C" {
#include "../src/menu.h"
}

TEST(menuTest, printMeFunctionThrowsNoErrors) {
  ASSERT_NO_THROW(printMe());
}