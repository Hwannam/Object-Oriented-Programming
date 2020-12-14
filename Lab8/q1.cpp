#include <iostream>
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
int main()
{
	Polygon pol;
	Rectangle rec(4, 10);

	cout << "--- Polygon class ---" << endl;
	pol.calcGirth();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();

	return 0;
}