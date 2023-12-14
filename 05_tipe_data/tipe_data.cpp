#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
		TIPE DATA FUNDAMENTAL
	*/

	// tipe data bulat (whole number)
	short a = 1;
	int b = 2;
	long c = 3;

	// tipe data bilangan decimal
	float d = 4.0;
	double e = 5.0;

	// tipe data character
	char f = 'f'; 

	cout << a << endl;
	cout << sizeof(a) << "byte" << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cin.get();

	return 0;
}
