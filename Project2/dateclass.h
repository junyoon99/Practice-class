#pragma once
#include<iostream>
class Date 
{
private:
	int m_year;
	int m_month;
	int m_day;
public:
	Date(int year, int month, int day) : m_year(year), m_month(month), m_day(day)
	{
		if (m_year < 1970) 
		{
			m_year = 1970;
			m_month = 1;
			m_day = 1;
		}
		if (!((m_month > 0) && (m_month < 13))) 
		{
			m_month = 1;
		}
		if (month % 2) 
		{
			if (!((m_day > 0) && (m_day < 32))) m_day = 1;
		}
		else if (m_month == 2) 
		{
			if (!((m_day > 0) && (m_day < 28 + IsLeapYear()))) 
			{
				m_day = 1;
			}
		}
		else 
		{
			if (!((m_day > 0) && (m_day < 31))) m_day = 1;
		}
	}
	void Print();
	bool IsLeapYear();
};