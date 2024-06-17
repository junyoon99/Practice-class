#include<iostream>

class Point2D 
{
private:
	int mX;
	int mY;
public:
	Point2D() = default;
	Point2D(int x, int y) : mX(x), mY(y) {}

	void Print() 
	{
		std::cout << mX << "," << mY << std::endl;
	}

	Point2D operator + (const Point2D& rhs)
	{
		Point2D result;
		result.mX = this->mX + rhs.mX;
		result.mY = this->mY + rhs.mY;

		return result;
	}

	Point2D operator - (const Point2D& rhs) 
	{
		Point2D result;
		result.mX = mX - rhs.mX;
		result.mY = mY - rhs.mY;
		return result;
	}

	Point2D operator * (const int& rhs) 
	{
		Point2D result;
		result.mX = mX*rhs;
		result.mY = mY*rhs;
		return result;
	}

	Point2D operator / (const int& rhs) 
	{
		Point2D result;
		if (rhs == 0) 
		{
			result.mX = result.mY = 0;
			return result;
		}
		result.mX = mX/rhs;
		result.mY = mY/rhs;
		return result;
	}

	int& operator [] (int index) 
	{
		if (index <= 0) return mX;
		else if (index >= 1) return mY;
	}

	operator float() const
	{
		return (float)sqrt(mX * mX + mY * mY);
	}

	void operator () () 
	{
		mX = mY = 0;
	}

	void operator () (int x, int y) 
	{
		mX = x;
		mY = y;
	}

	//Point2D& operator++() 
	//{
	//	mX = mX + 1;
	//	mY = mY + 1;
	//	return *this;
	//}

	//Point2D operator ++(int dummy) 
	//{
	//	Point2D temp(mX, mY);
	//	mX = mX + 1;
	//	mY = mY + 1;
	//	return temp;
	//}
	friend Point2D operator ++ (Point2D &l);
	friend Point2D operator ++ (Point2D &l, int dummy);
	//friend Point2D operator + (Point2D l, Point2D r);
	friend std::ostream &operator << (std::ostream &os, Point2D pt);
};

//Point2D operator + (Point2D l, Point2D r) 
//{
//	Point2D result;
//	result.mX = l.mX + r.mX;
//	result.mY = l.mY + r.mY;
//
//	return result;
//}

Point2D operator ++ (Point2D& l) 
{
	l.mX = l.mX + 1;
	l.mY = l.mY + 1;
	return l;
}

Point2D operator ++ (Point2D& l, int dummy) 
{
	Point2D temp(l.mX, l.mY);
	l.mX = l.mX + 1;
	l.mY = l.mY + 1;
	return temp;
}

std::ostream &operator << (std::ostream &os, Point2D pt) 
{
	os << "(" << pt.mX << "," << pt.mY << ")";
	return os;
}

class MyArray 
{
private:
	int mArray[10];

public:
	MyArray() : mArray() 
	{
		for (int i{}; i < 10; i++) 
		{
			mArray[i] = i;
		}
	}

	int operator[](int index) 
	{
		return mArray[index];
	}
};



int main() 
{
	//Point2D pt1(2, 2), pt2(3, 5);

	//Point2D pt3 = pt1 + pt2;
	//pt3.Print();
	//(pt1 - pt2).Print();
	//(pt1 * 3).Print();
	//(pt1 / 2).Print();

	Point2D pt4(1, 2);
	++pt4;
	pt4.Print();

	Point2D pt5(2, 2);
	float len = pt5;
	std::cout << len << std::endl;
}