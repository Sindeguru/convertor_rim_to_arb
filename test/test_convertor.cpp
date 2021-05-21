#include "convertor.h"
#include "../gtest/gtest.h"
#include <stdio.h>
#include <iostream>

using namespace std;
// I V X  -  M C

TEST(test_convertor, test_one)
{
  Convertor my_conv;
  arabic a;
  roman r;
  r.value = "I";
  a = my_conv.toArabic(r);
  EXPECT_EQ(1, a.value);
}

TEST(test_convertor, test_five)
{
  Convertor my_conv;
  arabic a;
  roman r;
  r.value = "V";
  a = my_conv.toArabic(r);
  EXPECT_EQ(5, a.value);
}

TEST(test_convertor, test_ten)
{
  Convertor my_conv;
  arabic a;
  roman r;
  r.value = "X";
  a = my_conv.toArabic(r);
  EXPECT_EQ(10, a.value);
}

TEST(test_convertor, test_four)
{
  Convertor my_conv;
  arabic a;
  roman r;
  r.value = "IV";
  a = my_conv.toArabic(r);
  EXPECT_EQ(4, a.value);
}

TEST(test_convertor, test_six)
{
  Convertor my_conv;
  arabic a;
  roman r;
  r.value = "VI";
  a = my_conv.toArabic(r);
  EXPECT_EQ(6, a.value);
}

TEST(test_convertor, test_nine_hundred_ninty_nine)
{
  Convertor my_conv;
  arabic a;
  roman r;
  r.value = "CMXCIX";
  a = my_conv.toArabic(r);
  EXPECT_EQ(999, a.value);
}
