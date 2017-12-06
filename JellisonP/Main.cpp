#include <iostream>
#include <cstdio>
#include <string>
#include "Set.cpp"
using namespace std;

int main()
{
	Set<int> *firstSet = new Set<int>();
	Set<int> *secondSet = new Set<int>();

	//int arraySize = 2;
	//int* firstArray = { };
	//int* secondArray = new int[10];
	string line;
	char input[50];

	cout << "Please input the first set of numbers (EX: 4, 2, 3, 1, 5)" << endl;
	cin >> line;

	for (int i = 0; i < 5; i++)
	{
		input[i] = line[i];
	}

	cout << input;

	//string delimiter = ", ";

	//int pos = 0;
	//string token;
	//while ((pos = input.find(delimiter)) != string::npos)
	//{
	//	token = input.substr(0, pos);
	//	firstSet->add(stoi(token));
	//	input.erase(0, pos + delimiter.length());
	//}
	//firstSet->add(stoi(token));

	char *next = NULL;
	int num;
	char *c = NULL;
	c = strtok_s(input, ", ", &next);
	num = atoi(c);
	firstSet->add(num);
	cout << "before" << endl;
	while (c != NULL)
	{
		cout << c << endl;
		c = strtok_s(NULL, ", ", &next);
		num = int(c);
		cout << num << endl;
		firstSet->add(num);
	}
	cout << "out of while loop" << endl;
	firstSet->print();

	int end;
	cin >> end;
}