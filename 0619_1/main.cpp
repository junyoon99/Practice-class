#include <iostream>

class MyClass 
{
public:
	int Function(int, int) 
	{
		std::cout << "¤±¤·¤©";
	}
};

int main() 
{
	int(MyClass::*fp)(int, int) = &MyClass::Function;
	MyClass c;
	fp = &MyClass::Function;
	(c.*fp)(1, 2);
}