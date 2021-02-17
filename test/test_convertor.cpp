#include "convertor.h"

#include <gtest.h>

// I V X  -  M C
TEST(test_convertor, test_one)
{
  Convertor my_conv;
  int v  = my_conv.toArabic("I");
  EXPECT_EQ(1, v);
}

TEST(test_convertor, test_five)
{
  Convertor my_conv;
  int v = my_conv.toArabic("V");
  EXPECT_EQ(5, v);
}

TEST(test_convertor, test_ten)
{
  Convertor my_conv;
  int v = my_conv.toArabic("X");
  EXPECT_EQ(10, v);
}

TEST(test_convertor, test_four)
{
  Convertor my_conv;
  int v = my_conv.toArabic("IV");
  EXPECT_EQ(4, v);
}

TEST(test_convertor, test_six)
{
  Convertor my_conv;
  int v = my_conv.toArabic("VI");
  EXPECT_EQ(6, v);
}
