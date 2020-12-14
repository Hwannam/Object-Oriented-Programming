#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream open;
	open.open("input.txt");
	ofstream file;
	file.open("output.txt");

	char a;
	int length;
	int count = 0;
	cout << "length = ";
	cin >> length;
	while (open.get(a))
	{
		if (count == 0 && a == ' ')
		{
			continue;
		}
		if (a == '\n')
		{
			a = ' ';
		}
		file << a;
		count++;

		
		if (count == length)
		{
			file << endl;
			count = 0;
		}
	}
	open.close();
	file.close();
	return 0;
}