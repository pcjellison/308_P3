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
	Set(int);
	~Set();
	void add(int);
};

template <class T>
Set<T>::Set(int max)
{
	nums = new int[max];
	pos = 0;
	this->max = max;
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