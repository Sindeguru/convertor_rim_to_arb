#include "convertor.h"
#include <string>
#include <exception>
#include <stdexcept>

using namespace std;

bool Convertor::key(int s, int ind)
{
	return (s - ind > 1);
}

arabic Convertor::toArabic(roman t)
{
	arabic a;
	a.value = 0;
	int size = t.value.length();
	char S;

	for (int i = 0; i < size; i++)
	{
		S = t.value[i];
		//////////////////////////////////////
		if (S == 'M')
		{
			a.value += 1000;
			continue;
		}
		//////////////////////////////////////
		else if (S == 'D')
		{
			a.value += 500;
			continue;
		}
		//////////////////////////////////////
		else if (S == 'C')
		{
			if (key(size, i))
			{
				if (t.value[i + 1] == 'M')
				{
					a.value += 900;
					i++;
					continue;
				}
				else if (t.value[i + 1] == 'D')
				{
					a.value += 400;
					i++;
					continue;
				}
				else
				{
					a.value += 100;
					continue;
				}
			}
			else
			{
				a.value += 100;
				continue;
			}
		}
		//////////////////////////////////////
		else if (S == 'L')
		{
			a.value += 50;
			continue;
		}
		//////////////////////////////////////
		else if (S == 'X')
		{
			if (key(size, i))
			{
				if (t.value[i + 1] == 'C')
				{
					a.value += 90;
					i++;
					continue;
				}
				else if (t.value[i + 1] == 'L')
				{
					a.value += 40;
					i++;
					continue;
				}
				else 
				{
					a.value += 10;
					continue;
				}
			}
			else
			{
				a.value += 10;
				continue;
			}
		}
		//////////////////////////////////////
		else if (S == 'V')
		{
			a.value += 5;
			continue;
		}
		//////////////////////////////////////
		else if (S == 'I')
		{
			if (key(size, i))
			{
				if (t.value[i + 1] == 'X')
				{
					a.value += 9;
					i++;
					continue;
				}
				else if (t.value[i + 1] == 'V')
				{
					a.value += 4;
					i++;
					continue;
				}
				else
				{
					a.value += 1;
					continue;
				}
			}
			else
			{
				a.value += 1;
				continue;
			}
		}
		//////////////////////////////////////
	}
	return a;
}

bool division(int d, int div)
{
	if (d / div >= 1)
		return 1;
	else return 0;
}


roman Convertor::toRoman(arabic t)
{
	roman r;
	r.value;
	int dig = t.value;
	int count = 0;

	count = dig / 1000;
	if (count >= 4)
		throw logic_error("uncorrect num");
	//////////////////////////////////////
	for (int i = 0; i < dig / 1000; i++)
		r.value.append("M");
	dig = dig % 1000;
	//////////////////////////////////////
	count = (dig / 100)%10;
	if (count <= 3)
		for(int i = 0; i < count; i++)
			r.value.append("C");
	else if(count == 4)
		r.value.append("CD");
	else if(count <= 8)
	{
		r.value.append("D");
		for (int i = 0; i < count - 5; i++)
			r.value.append("C");
	}
	else 
		r.value.append("CM");
	//////////////////////////////////////
	count = (t.value / 10)%10;
	if (count <= 3)
		for (int i = 0; i < count; i++)
			r.value.append("X");
	else if (count == 4)
		r.value.append("XL");
	else if (count <= 8)
	{
		r.value.append("L");
		for (int i = 0; i < count - 5; i++)
			r.value.append("X");
	}
	else
		r.value.append("XC");
	//////////////////////////////////////
	count = t.value % 10;
	if (count <= 3)
		for (int i = 0; i < count; i++)
			r.value.append("I");
	else if (count == 4)
		r.value.append("IV");
	else if (count <= 8)
	{
		r.value.append("V");
		for (int i = 0; i < count - 5; i++)
			r.value.append("I");
	}
	else
		r.value.append("IX");
	//////////////////////////////////////

	return r;
}
