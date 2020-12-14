#include <iostream>
#include <vector>
#include <ctime>
#include <random>
using namespace std;


int main()
{
	int max1=0, max2=0, min1=10, min2=20;
	vector<int> vector1(10);
	vector<int> vector2(10);
	srand(time(NULL));
	
	vector<int>::iterator iter1 = begin(vector1);
	vector<int>::iterator iter2 = begin(vector2);
	for (int i = 0; i < 10; i++)
	{
		*iter1 = rand()% 11;
		*iter2 = rand() % 21;
		iter1++;
		iter2++;
	}
	iter1 = begin(vector1);
	iter2 = begin(vector2);

	cout << "<vector 1>" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *iter1 << " ";
		if (max1 < *iter1)
		{
			max1 = *iter1;
		}
		if (min1 > *iter1)
		{
			min1 = *iter1;
		}
		iter1++;
	}

	cout << endl <<endl <<"<vector 2>" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *iter2 << " ";
		if (max2 < *iter2)
		{
			max2 = *iter2;
		}
		if (min2 > *iter2)
		{
			min2 = *iter2;
		}
		iter2++;
	}


	cout << endl <<endl<< "최대값 = " << max1*max2 << endl;
	cout << "최소값 = " << min1*min2 << endl;


	return 0;
}