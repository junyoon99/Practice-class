#include <iostream>

class String
{
private:
	char* p;
public:
	String() 
	{
		p = new char[1]{};
	}
	~String()
	{
		delete[] p;
	}

	friend std::ostream& operator << (std::ostream& os, String str)
	{
		os << str.p;
		return os;
	}
};

int main()
{
	String a;
	std::cout << a;
}