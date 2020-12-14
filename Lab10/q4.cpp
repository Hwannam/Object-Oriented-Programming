#include <iostream>
using namespace std;

template <class T>
class CList
{
public:
	CList();
	~CList();

	bool IsEmpty();
	bool IsFull();

	void Add(T data);
	void Delete(T data);
	void Print();

private:
	T m_Array[5];
	int m_Length;
};
template <class T>
CList<T>::CList()
{
	m_Length = 0;
}
template <class T>
CList<T>::~CList()
{}

template <class T>
bool CList<T>::IsFull()
{
	if (m_Length == 5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
template <class T>
bool CList<T>::IsEmpty()
{
	if (m_Length == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
template <class T>
void CList<T>::Add(T data)
{
	int count = 0;
	if (IsFull() == 1)
	{
		cout << endl << "\tList is full." << endl;
	}
	else
	{
		if (m_Length == 0)
		{
			m_Array[m_Length] = data;
			m_Length++;
		}
		else
		{
			for (int i = 0; i < m_Length; i++)
			{
				if (m_Array[i] == data)
				{
					count++;
				}
			}
			if (count != 0)
			{
				cout << "\n\t�ߺ��� �����Ͱ� ����\n";
			}
			else
			{
				m_Array[m_Length] = data;
				
				for (int i = 0; i < m_Length; i++)
				{
					if (m_Array[i] > m_Array[m_Length])
					{
						T temp = m_Array[i];
						m_Array[i] = m_Array[m_Length];
						m_Array[m_Length] = temp;
					}
				}
				m_Length++;
			}

		}
	}
}
template <class T>
void CList<T>::Delete(T data)
{
	if (IsEmpty() == 1)
	{
		cout << "\n\tList is empty" << endl;
	}
	else
	{
		while (1)
		{
			for (int i = 0; i < m_Length; i++)
			{
				if (m_Array[i] == data)
				{
					for (int j = i; j < m_Length; j++)
					{
						m_Array[j] = m_Array[j + 1];
					}
					m_Length--;
					continue;
				}
			}
			break;
		}
	}

}
template <class T>
void CList<T>::Print()
{
	cout << "\n\t# Current List" << endl << "\t";
	for (int i = 0; i < m_Length; i++)
	{
		cout << m_Array[i] << " ";
	}
	cout << endl;
}
int command()
{
	int num;

	cout << "\n\t---- menu ----" << endl;
	cout << "\t1. ����Ʈ �߰�" << endl;
	cout << "\t2. ����Ʈ ����" << endl;
	cout << "\t3. ����Ʈ ���" << endl;
	cout << "\t4. ���α׷� ����" << endl;
	cout << "\n\t�Է� --> ";
	cin >> num;
	return num;
}

int main()
{
	CList<int> list;
	int input;
	int com;

	while (1)
	{
		com = command();

		switch (com)
		{
		case 1:
			cout << "\n�߰��� ������ : ";
			cin >> input;
			list.Add(input);
			break;
		case 2:
			cout << "\n������ ������ : ";
			cin >> input;
			list.Delete(input);
			break;
		case 3:
			list.Print();
			break;
		case 4:
			cout << "\n\t���α׷��� �����մϴ�\n";
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}