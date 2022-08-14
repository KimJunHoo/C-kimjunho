#include <iostream>

using namespace std;
const int PI = 3.14;

int main() {

	cout << "My name is ±èÁØÈ£" << endl;

	return 0;
}

int main() {

	int a = 2147483648;
	cout << a << endl;

	return 0;
}

int main() {

	char ch1 = 41;
	char ch2 = 42;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;

	return 0;
}

int main() {

	char ch4;
	int X;
	unsigned short siX;
	unsigned iX;
	long liX;
	long long lliX;

	cout << "sizeof(ch4)" << ch4 << endl;
	cout << "sizeof(X)" << X << endl;
	cout << "sizeof(siX)" << siX << endl;
	cout << "sizeof(iX)" << iX << endl;
	cout << "sizeof(liX)" << liX << endl;
	cout << "sizeof(lliX)" << lliX << endl;

	return 0;
}

int main() {

	int F = 30;
	int C;
	C = 5 / 9 * (F - 32);

	cout << "Please enter Fahrenheit Value :" << F << endl;
	cout << "Celsius value is" << C << endl;
}