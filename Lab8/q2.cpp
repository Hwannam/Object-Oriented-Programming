#include <iostream>
#include <cmath>
using namespace std;

class Polygon
{
public:
	Polygon()
	{
		mPoint = 0;
		mLength = 0;
	}
	Polygon(int point, float length)
	{
		mPoint = point;
		mLength = length;
	}
	~Polygon()
	{}

	virtual void calcGirth();
	virtual void calcArea();

protected:
	int mPoint ;
	double mLength;
};

void Polygon::calcGirth()
{
cout << "Girth : empty" <<endl;
	
}

void Polygon::calcArea()
{	
		cout << "Area : empty"  << endl;
}

class Rectangle : public Polygon
{
public:
	Rectangle() {};
	Rectangle(int point, float length) :Polygon(point, length) {};
	~Rectangle() {};


	void calcGirth() override
	{
		double girth = mPoint * mLength;
	cout << "Girth : " << girth << endl;
		
	}
	void calcArea() override
	{
		double area = mLength * mLength;
		cout << "Area : " << area << endl;
	}
};
class Triangle : public Polygon
{
public:
	Triangle() {};
	Triangle(int point, float length) :Polygon(point, length) {};
	~Triangle() {};


	void calcGirth() override
	{
		double girth = mPoint * mLength;
		cout << "Girth : " << girth << endl;

	}
	void calcArea() override
	{
		double area = (mLength*mLength*sqrt(3))/4;
		cout << "Area : " << area << endl;
	}
};
class Circle : public Polygon
{
public:
	Circle() {};
	Circle(int point, float length) :Polygon(point, length) {};
	~Circle() {};


	void calcGirth() override
	{
		double girth = 2*(3.14)*mLength;
		cout << "Girth : " << girth << endl;

	}
	void calcArea() override
	{
		double area = (3.14)*mLength * mLength;
		cout << "Area : " << area << endl;
	}
};
int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();

	return 0;
}