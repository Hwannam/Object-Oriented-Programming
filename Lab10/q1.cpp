#include <iostream>
#include <cmath>
#include <string>
using namespace std;

template <class type>
class Point
{
	type a, b, c, d,e;
public:
	void setPointFromKeyboard()
	{
		cout << "첫번째 x : ";
		cin >> a;
		cout << "첫번째 y : ";
		cin >> b;
		cout << "두번째 x : ";
		cin >> c;
		cout << "두번째 y : ";
		cin >> d;
		cout << endl;
	}
	void print()
	{
		e = sqrt(pow(a - c, 2) + pow(b - d, 2));
		cout << "두점 사이의 거리 = " << e;
	}
};

int main()
{
	Point<double> p;
	
	p.setPointFromKeyboard();

	p.print();
	return 0;
}