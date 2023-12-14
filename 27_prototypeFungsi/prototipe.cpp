#include <iostream>

using namespace std; 


//Prototype Fungsi

double hitungLuas(double p, double l);
void println(double hasil);

int main(){

	double panjang, lebar, hasil;

	cout << "Masukkan panjang: ";
	cin >> panjang; 
	cout << "Masukkan lebar: ";
	cin >> lebar;
	hasil = hitungLuas(panjang, lebar);

	println(hasil);


	cout <<"\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}


double hitungLuas(double p, double l){
	return p*l;
}

void println(double hasil){
	cout << "Hasilnya adalah: " << hasil << endl;
}