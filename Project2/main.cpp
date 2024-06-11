#include <iostream>
#include"dateclass.h"

int main() 
{
	int year;
	int month;
	int day;
	std::cin >> year >> month >> day;

	Date DateClass(year, month, day);
	DateClass.Print();
	DateClass.IsLeapYear();
}