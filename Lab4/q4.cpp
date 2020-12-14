#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream file1, file2;
	ofstream out;

	char b;
	
	int count = 0;
	file1.open("input1.txt");
	file2.open("input2.txt");
	out.open("output.txt");

	while (file1.get(b))
	{
		if (b == ' ')
		{
			count++;
		}
		out << b;
		if (count == 7 )
		{
			out << endl;
			count = 0;
		}
		else if (b == '\n')
		{
			count = 0;
			
		}

	}

	out << endl << endl;

	while (file2.get(b))
	{
		
		out << b;
	}

	file1.close();
	file2.close();
	out.close();
	return 0;
}