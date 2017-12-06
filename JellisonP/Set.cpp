#include <iostream>
#include <cstdio>
using namespace std;


template <class T>
class Set
{
private:
	int *nums;
	int pos;
	int max;
public:
	//Set(int);
	Set(void);
	~Set();
	void add(int);
	void print(void);
};

template <class T>
Set<T>::Set()
{
	nums = new int[max];
	pos = 0;
	max = 10;
}

template<class T>
Set<T>::~Set()
{
	delete[] nums;
}

template<class T>
void Set<T>::add(int elem)
{
	int i;
	if (pos >= max)	return;
	for (i = 0; i < pos; i++)
	{
		if (nums[i] = elem)	return;
	}
	nums[pos++] = elem;
}

template<class T>
void Set<T>::print(void)
{
	//cout << "print called" << endl;
	cout << max << endl;
	for (int i = 0; i < max; i++)
	{
		//cout << "inside loop" << endl;
		cout << nums[i] << endl;
		cout << i << endl;
		cout << "printing" << endl;
	}
	cout << "end" << endl;
	int end;
	cin >> end;
}



//void Set::intersection_values()
//{
//
//}
//void Set::union_values()
//{
//
//}
//void Set::difference_values()
//{
//
//}