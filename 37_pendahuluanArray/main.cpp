#include <iostream>

using namespace std;


int main(){

	int nilai[5]; // int nilai[5] = {0, 1, 2, 3, 4};
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << sizeof(nilai)/sizeof(int) << endl;

	cout << "\nADDRES DARI ARRAY " <<  nilai << endl;
	cout << &nilai[0] << " memiliki nilai " << nilai[0] << endl;
	cout << &nilai[1] << " memiliki nilai " << nilai[1] << endl;
	cout << &nilai[2] << " memiliki nilai " << nilai[2] << endl;
	cout << &nilai[3] << " memiliki nilai " << nilai[3] << endl;
	cout << &nilai[4] << " memiliki nilai " << nilai[4] << endl;

	int *ptr = nilai; // karena nilai merupakan sebuah address
	*(ptr + 1) = 0;

	nilai[2] = 99;
	cout << endl;
	cout << &nilai[0] << " memiliki nilai " << nilai[0] << endl;
	cout << &nilai[1] << " memiliki nilai " << nilai[1] << endl;
	cout << &nilai[2] << " memiliki nilai " << nilai[2] << endl;
	cout << &nilai[3] << " memiliki nilai " << nilai[3] << endl;
	cout << &nilai[4] << " memiliki nilai " << nilai[4] << endl;


	cout << "AKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}
