#include <iostream>

using namespace std;

int main(){

	//ternary operator (?)
	/*
		SYNTAX: 
			(kondisi) ? hasil1(benar) : hasil2(salah)
	*/

	int a, b;
	a = 4;  
	string hasil_1, hasil_2;
	hasil_1 = "benar";
	hasil_2 = "salah";

	cout << "Masukkan angka supaya persamaan benar: ";
	cin >> b;

	string output = (a < b) ? hasil_1 : hasil_2;

	cout << output << endl;

	cout << endl;
	cin.get();
	return 0;
}
