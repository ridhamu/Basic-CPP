
#include <iostream>
#include <array>

using namespace std;

int main(){

	/*
	LOOPING ARRAY (untuk c++ 11 keatas)
	SYNTAX: 
	for(deklarasi variabel: array){
	statement;
	}

	example: 
	for(int i : array){
		cout << array << endl;
	}

	*/

	array <int, 10> nilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 

	cout << "\nKonstan address"<< endl;
	for(int i : nilai){
		cout << " Address : "<< &nilai << ", nilainya: " << nilai[i] << endl;
	}

	//menggunakan reference
	cout << "\nAddress Sesuai"<< endl;
	for(int &i : nilai){
		cout << " Address : "<< &i << ", nilainya: " << i << endl;
	}

	cout << "\n mengubah nilai array dengan reference"<< endl;
	for(int &i : nilai){
		i *= 2;
	}
	for(int &i : nilai){
		cout << " Address : "<< &i << ", nilainya: " << i << endl;
	}

	cout << "\nAKHIR DARI PROGRAM";
	cin.get();
	return 0;
}

