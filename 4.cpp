#include<iostream>
#include<vector>
using namespace std;

//1
template< class any >
bool less_than (int a, int b)
{
	if (a > b)
	{
		return 0;
	}
	if (a < b)
	{
		return 1;
	}
}

template<class T>
T sum(const vector<T>&v)
{
	int total = 0
	for (int i = 0; i < 100; i++)
	{
		total += v[i];
	}
	return total;
}

//3

int main()
{
	int number1;
	int realnumber;
	cin >> number1;
	cin >> realnumber;
	int total2 = 0;
	for (int k = 0; k < 2 * number1;)
	{
		total2 += realnumber[k];
		k = k + 2;
	}
	cout << total2 << endl;
}

//ÀúÀå¿ë