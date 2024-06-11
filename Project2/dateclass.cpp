#include "dateclass.h"

void Date::Print()
{
	std::cout << m_year << "-" << m_month << "-" << m_day << std::endl;
}

bool Date::IsLeapYear()
{
	if (!(m_year % 4)) return true;
	else return false;
}
