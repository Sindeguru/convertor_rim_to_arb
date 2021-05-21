#ifndef INCLUDE_CONVERTOR_H_
#define INCLUDE_CONVERTOR_H_
#include <string>

using namespace std;

struct roman {
  string value;
};

struct arabic {
  int value;
};

class Convertor {
  arabic adigit;
  roman rdigit;

public:
  Convertor()
  {
    adigit.value = 0;
  }
  Convertor(roman t)
  {
    rdigit = t;
    adigit.value = 0;
  }
  Convertor(arabic t)
  {
    adigit = t;
  }

  //void toArabic();
  arabic toArabic(roman t);
  roman toRoman(arabic t);

  bool check(roman& t) // IIII - IV
  {
    adigit = toArabic(t);
    t = toRoman(adigit);
  }
  bool key(int s, int ind);
  // оператор ввода-вывода, либо print
};


#endif  // INCLUDE_CONVERTOR_H_