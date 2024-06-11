#pragma once
#include <iostream>
class String 
{
private:
	int string_size;
	char *mString;
public:
	String(const char string[])
	{
		string_size = sizeof(string)+1;
		mString = new char[string_size];
		for (int i{}; i < string_size; i++) 
		{
			mString[i] = string[i];
		}
	}
	~String() 
	{
		delete[] mString;
	}
	void Print();
};

