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
		cout << "ù��° x : ";
		cin >> a;
		cout << "ù��° y : ";
		cin >> b;
		cout << "�ι�° x : ";
		cin >> c;
		cout << "�ι�° y : ";
		cin >> d;
		cout << endl;
	}
	void print()
	{
		e = sqrt(pow(a - c, 2) + pow(b - d, 2));
		cout << "���� ������ �Ÿ� = " << e;
	}
};

int main()
{
	Point<double> p;
	
	p.setPointFromKeyboard();

	p.print();
	return 0;
}