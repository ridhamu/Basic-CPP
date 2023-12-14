#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a = 6;
	int b = 4;
	int hasil;


	// Penjumlahan
	hasil = a + b; 
	cout << a << " + " << b << " = " << hasil << endl;

	// Pengurangan
	hasil = a - b; 
	cout << a << " - " << b << " = " << hasil << endl;

	// Perkalian
	hasil = a * b; 
	cout << a << " x " << b << " = " << hasil << endl;

	// Pembagian
	hasil = a / b; 
	cout << a << " / " << b << " = " << hasil << endl;

	// Modulus
	hasil = a % b; 
	cout << a << " % " << b << " = " << hasil << endl;

	// Penjumlahan
	hasil = (a + b) * a; 
	cout << hasil << endl;

	return 0;
}
