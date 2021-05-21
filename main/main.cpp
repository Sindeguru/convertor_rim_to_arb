#include <stdio.h>
#include "convertor.h"
#include <iostream>

using namespace std;

int main() {
  printf("hello!\n");
  
  // Прочитать текст, находит римские даты, заменяет арабскими.




  // Приложение для пользователя (меню пользователя)
  Convertor C;

  roman R;
  arabic A;

  bool key = 1;
/*
  while (1)
  { 
    if (key)
    {
      cout << "Input arabic" << endl;
      cin >> A.value;

      R = C.toRoman(A);
      cout << R.value << endl;
    }
    else
    {
      cout << "Input roman" << endl;
      cin >> R.value;

      A = C.toArabic(R);
      cout << A.value << endl;
    }
  }
  */

  
  for (int i = 0; i <= 1000; i++)
  {
    A.value = i;
    R = C.toRoman(A);
    A = C.toArabic(R);
    cout << A.value << "        " << R.value << endl;
  }
  
  
  return 0;
}
