#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> list{ 10,20,30,40,50 };
	int num;

	while (1)
	{
		try {
			cout << "��� �� ������ �� : ";
			cin >> num;
			for (int i = 0; i < num; i++)
			{
				cout << list.at(i) << " ";
			}
			cout << endl;
		}
		catch (exception& e)
		{
			cout << endl<< "Index is out of range. Please try again." << endl;
		}
	}
	return 0;
}