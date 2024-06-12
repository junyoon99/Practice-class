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

	//friend Point2D operator + (Point2D l, Point2D r);
};

//Point2D operator + (Point2D l, Point2D r) 
//{
//	Point2D result;
//	result.mX = l.mX + r.mX;
//	result.mY = l.mY + r.mY;
//
//	return result;
//}



int main() 
{
	Point2D pt1(2, 2), pt2(3, 5);

	Point2D pt3 = pt1 + pt2;
	pt3.Print();
	(pt1 - pt2).Print();
	(pt1 * 3).Print();
	(pt1 / 2).Print();
}