#include <iostream>
#include <cstdio>
#include <string>
#include "Set.cpp"
using namespace std;

void getInput(string, Set<int>*);
int main()
{
	Set<int> *firstSet = new Set<int>();
	Set<int> *secondSet = new Set<int>();

	string input;

	cout << "Please input the first set of numbers (EX: 4, 2, 3, 1, 5)" << endl;
	cin >> input;

	getInput(input, *firstSet);
}

void getInput(string in, Set<int> &set)
{
	string delimiter = ", ";

	int pos = 0;
	string token;
	while ((pos = in.find(delimiter)) != -1)
	{
		token = in.substr(0, pos);
		set.add(stoi(token));
		in.erase(0, pos + delimiter.length());
	}
	set.add(stoi(token));
}