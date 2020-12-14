#include <iostream>
using namespace std;

int main()
{
	int A,B;
	cout << "Please enter two integer values:" << endl << "A : ";
	cin >> A;
	cout << "B : ";
	cin >> B;

	int C;

	C = A;
	A = B;
	B = C;

	cout << "value of A is : " << A << endl;
	cout << "value of B is : " << B << endl;

	


	return 0;
}