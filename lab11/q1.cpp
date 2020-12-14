#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
void sort(T& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = (i + 1); j < a.size(); j++)
		{
			if (a[i] > a[j])
			{
				auto temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

template <class T>
void print(T b)
{
	auto k = b.begin();
	for (int i = 0; i < b.size(); i++)
	{
		cout << *k << ", ";
		k++;
	}
	cout << endl;
}

int main()
{
	vector<int> int_list(5);
	int_list = { 10, 5, 8, 1, 3 };
	vector<double> double_list(5);
	double_list = { 10.1, 5.1, 8.1, 1.1, 3.1 };
	vector<string> string_list(5);
	string_list = { "하나", "둘", "셋", "넷", "다섯" };
	
	sort(int_list);
	sort(double_list);
	sort(string_list);

	print(int_list);
	print(double_list);
	print(string_list);
	
	return 0;
}