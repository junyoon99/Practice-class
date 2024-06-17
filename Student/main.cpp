#include <iostream>

class Student 
{
private:
	char mName[20];
	int mScore;
public:
	Student() = default;
	Student(const char name[], int score) 
	{
		for (int i{}; i < sizeof(name); i++)
		{
			mName[i] = name[i];
		}
		mScore = score;
	}

	friend int operator + (Student l, Student r);
	friend int operator + (int l, Student r);
	friend int operator += (int& l, Student r);
};

int operator + (Student l, Student r) 
{
	return l.mScore + r.mScore;
}
int operator + (int l, Student r) 
{
	return l + r.mScore;
}


int operator += (int& l, Student r)
{
	return l += r.mScore;
}

int main() 
{
	//Student a("Doggy", 100), b("Kitty", 90), c("Piggy", 50);
	//int total = a + b + c;

	//std::cout << total;
	Student students[]
	{
		Student("Doggy", 100),
		Student("Kitty", 90),
		Student("Piggy", 50)
	};

	int total{};
	for (int i = 0; i < 3; i++)
	{
		total += students[i];
	}

	std::cout << total;
}