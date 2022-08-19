#include <iostream>

using namespace std;

int main()
{
	short number[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << number[4] << endl;

	char str1[10] = { 'H', 'I' , 'E', 'A', 'Z', 'L', 'T', 'L', 'U', 'O' };

	cout << str1[0] << str1[2] << str1[5] << str1[7] << str1[9] << endl;

	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	int change;
	change = a;
	a = b;
	b = change;
	cout << a << ", " << b << endl;

	char str2[6] = "Hello";
	char* copy;
	copy = new char[strlen(str2) + 1];
	strcpy(copy, str2);

	cout << copy << endl;
}