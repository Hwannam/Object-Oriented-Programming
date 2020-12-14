#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	double x, y;
public:
	Point(int a, int b)
	{
		this->x = a;
		this->y = b;
	}
	Point()
	{
		x = 0;
		y = 0;
	}
	
	int getX(void)const
	{
		return this->x;
	}
	int getY(void)const
	{
		return this->y;
	}
	Point operator-(const Point& p)
	{
		Point result(this->x - p.getX(), this->y - p.getY());
		return result;
	}
	Point operator*(const Point& p)
	{
		Point result(this->x* p.getX(), this->y * p.getY());
		return result;
	}
	Point& operator= (const Point& p)
	{
		this->x = p.getX();
		this->y = p.getY();

		return *this;
	}
};

int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point *pP1, *pP2, *pP3;

	cout << "ù��° ��ǥ[x1, y1]�� �Է��ϼ��� : ";
	cin >> x1 >> y1;
	cout << "�ι�° ��ǥ[x2, y2]�� �Է��ϼ��� : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);

	pP3 = new Point();
	*pP3 = (*pP1 - *pP2) *(*pP1 - *pP2);
	double r = pP3->getX()+pP3->getY();
	cout << "�� ��ǥ ������ ���̴� " <<sqrt(r)<< "�Դϴ�" << endl;
	delete pP1;
	delete pP2;
	delete pP3;

	return 0;
}