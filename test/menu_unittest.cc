#include "gtest/gtest.h"

extern "C" {
#include "../src/menu.h"
}

TEST(menu, printHelloFunctionThrowsNoErrors) {
  ASSERT_NO_THROW(printHello());
}