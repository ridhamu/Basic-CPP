#include <iostream>
#include <array>

using namespace std;

int main(){


	// membuat array dengan menggunakan standard library <array>
	// SYNTAX : array<tipe-data, panjang-array> nama-array;

	array < int , 5> nilai;

	int arrayLength = sizeof(nilai)/sizeof(int);

	for(int i=0; i<arrayLength; i++){
		nilai[i] = i;
		cout << " nilai [ " << i << " ] = " << nilai[i];
		cout << " address: " << &nilai[i] << endl;
	}

	cout << endl << nilai.size() << endl;
	cout << nilai.begin() << endl;
	cout << nilai.end() << endl;
	cout << nilai.at(2) << endl;

	cout << "AHKIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}
