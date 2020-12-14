#include <iostream>
#include <string>
using namespace std;

class Stack
{
	int* p_list;
	int size;
	int MAX_SIZE;

public:
	int count = 0;
	Stack(int _MAX_SIZE = 1000)
		: MAX_SIZE(_MAX_SIZE)
	{
		p_list = new int[MAX_SIZE];
	}
	~Stack() {}
	int find_index(int _item)
	{
		for (int i = 0; i < MAX_SIZE; i++)
		{
			if (p_list[i] == _item)
			{
				return i;
			}
			else
				return -1;
		}
	}
	void push(int _item)
	{
		if (count <= MAX_SIZE)
		{
			if (find_index(_item) == -1)
			{
				p_list[count] = _item;
				count++;
			}

		}
		else
		{
			cout << "Error: out of memory" << endl;
		}
	}
	int pop()
	{
		if (count > 0)
		{
			int a = p_list[count - 1];
			count = count - 1;

			return a;
		}
		else
		{
			cout << "Error: No item exists in the list" << endl;
		}
	}
	void print() const
	{
		cout << "Items in the list : ";
		for (int i = 0; i < count; i++)
		{
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}
	int get_size()
	{
		return count;
	}
	int get_item(int _index)
	{
		return p_list[_index];
	}
	void operator+=(const Stack& x)
	{
		int same = 0;
		for (int i = 0; i < x.count; i++)
		{
			for (int j = 0; j < this->count; j++)
			{
				if (this->p_list[j] == x.p_list[i])
				{
					same++;
				}
			}
			if (same == 0)
			{
				this->p_list[count] = x.p_list[i];
				count++;
			}
			else
			{
				same = 0;
			}
		}
	}
	int operator==(const Stack&x)
	{
		if (this->count == x.count)
		{
			int tf = 0;
			for (int i = 0; i < x.count; i++)
			{
				if (this->p_list[i] == x.p_list[i])
				{
					tf++;
				}
			}
			if (tf == x.count)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
};
int main(void)
{
	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s2.push(1);
	s2.push(2);
	s2.push(5);

	s1.print();
	s2.print();

	s1 += s2;

	s1.print();
	s2.print();

	cout << "s1 == s2 ? " << (s1 == s2) << endl;

	s1.pop();
	s1.pop();
	s2.pop();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;

	s2.pop();
	s2.pop();
	s2.pop();

	return 0;
}