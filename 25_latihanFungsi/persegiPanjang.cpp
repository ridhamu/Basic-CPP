#include <iostream>

using namespace std;



double hitungLuas(double p, double l){
	double hasil;
	hasil = p*l;
	return hasil;
}

double hitungKeliling(double p, double l){
	double hasil;
	hasil = 2*(p+l);
	return hasil;
}

void tampilLuas(double p, double l){
	cout << "\nLuas persegi panjang adalah: ";
	cout << hitungLuas(p,l) << endl;
}

void tampilKeliling(double p, double l){
	cout << "\nKeliling persegi panjang adalah: ";
	cout << hitungKeliling(p, l) << endl;
}


int main(){

	cout<< "===PROGRAM MENGHITUNG LUAS&KELILING PERSEGI PANJANG==="<< endl;
	double panjang, lebar;

	cout << "Masukkan panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar: ";
	cin >> lebar;
	tampilLuas(panjang, lebar);
	tampilKeliling(panjang, lebar);



	cin.get();
	return 0;
}
