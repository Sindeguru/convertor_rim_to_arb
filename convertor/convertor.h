#ifndef INCLUDE_CONVERTOR_H_
#define INCLUDE_CONVERTOR_H_


struct roman {
  std::string value;
};

struct arabic {
  int value;
};

class Convertor {
  arabic dijit_1;
  roman dijit_2;

  void toArabic();

  arabic toArabic(roman t);
  roman toRoman(arabic t);

  bool check(roman& t);      // IIII - IV

  // оператор ввода-вывода, либо print

};

#endif  // INCLUDE_CONVERTOR_H_