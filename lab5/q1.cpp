#include <iostream>
using namespace std;

void dou(int *x, int *y)
{
	*y = (*x)*(*x);
	
}

int main()
{
	int a,b;
	cout << "input> ";
	cin >> a;
	dou(&a, &b);
	cout << "Á¦°ö°ª> " << b;

}