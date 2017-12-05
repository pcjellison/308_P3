#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	int *firstArray = new int[100];
	int *secondArray = new int[100];
	string input;
	//char *str = new char[50];

	cout << "Please input the first set of numbers (EX: 4, 2, 3, 1, 5)" << endl;
	getline(cin, input);

	string delimiter = ", ";

	size_t pos = 0;
	string token;
	int i = 0;
	while ((pos = input.find(delimiter)) != std::string::npos)
	{
		token = input.substr(0, pos);
		firstArray[i] = stoi(token);
		i++;
		cout << token << endl;
		input.erase(0, pos + delimiter.length());
	}
	firstArray[i] = stoi(input);

	cout << "printing array" << endl;
	for (int i = 0; i < sizeof(firstArray); i++)
	{
		cout << firstArray[i] << endl;
	}

	cout << "END" << endl;
	int end;
	cin >> end;
}