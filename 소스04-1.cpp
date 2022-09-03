#include<iostream>
#include<vector>
using namespace std;

template<class Any>
bool less_than(Any, float);
template<class T>
T sum(const vector<T>&);

int main()
{
	cout << less_than(2, 3) << endl;
	cout << less_than(2.1, 2.9) << endl;
	cout << less_than(2, 2.5) << endl;

	vector<int> v1{ 1,2,3,4 };
	cout << sum(v1) << endl;
}

template<class Any>
bool less_than(Any a, float b)
{
	if (a < b) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
T sum(const vector<T>& v)
{
	int total1 = 0;
	for(int i = 0; i<sizeof(v); i++;){
		total1 += v(i)
	}
	return total1;
}

//실행오류