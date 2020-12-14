#include <iostream>

using namespace std;

template <class T>
class Queue
{
	T* p_list;
	int size=0;
	int MAX_SIZE;
public:
	Queue(int _MAX_SIZE = 1000)
	{
		p_list = new T[_MAX_SIZE];
	}
	~Queue()
	{
		delete[] p_list;
	}

	int find_index(T _item)
	{
		int count = 0;
		int index;
		for (int i = 0; i < size; i++)
		{
			if (p_list[i] == _item)
			{
				count++;
				index = i;
			}
		}
		if (count == 0)
		{
			return -1;
		}
		else
		{
			return index;
		}
	}
	void Enqueue(T _item)
	{
		if (find_index(_item) != -1)
		{
			if (size == MAX_SIZE)
			{
				cout << "Error: out of memory" << endl;
			}
		}
		else if(find_index(_item) == -1)
		{
			p_list[size] = _item;
			size++;
		}
	}
	T Dequeue()
	{
		if (size == 0)
		{
			cout << "Error: No item exists in the list" << endl;
		}
		else
		{
			T first = p_list[0];
			for (int i = 0; i < size; i++)
			{
				p_list[i] = p_list[i + 1];
			}
			size--;
			return first;
		}
	}

	void print() const
	{
		cout << "Items in the list : ";
		for (int i = 0; i < get_size(); i++)
		{
			cout << get_item(i) << ", ";
		}
		cout << endl;
	}
	int get_size() const
	{
		return size;
	}
	T get_item(int _index) const
	{
		return p_list[_index];
	}
};
int main()
{
	Queue<int> int_queue;
	Queue<float> float_queue;
	Queue<char> char_queue;
	
	int_queue.Enqueue(1);
	int_queue.Enqueue(2);
	int_queue.Enqueue(2);
	int_queue.Enqueue(5);
	
	float_queue.Enqueue(4.3);
	float_queue.Enqueue(2.5);
	float_queue.Enqueue(3.7);
	float_queue.Enqueue(3.7);
	
	char_queue.Enqueue('b');
	char_queue.Enqueue('b');
	char_queue.Enqueue('c');
	char_queue.Enqueue('a');
	
	cout << "<Before Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	int_queue.Dequeue();
	float_queue.Dequeue();
	float_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	
	cout << "<After Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	return 0; 
}