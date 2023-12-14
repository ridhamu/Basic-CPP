#include <iostream>

using namespace std;

int pangkatIteratif(int a, int b);
int pangkatRekursif(int a, int b);

int main(){
	int angka, pangkat;

	cout << "Masukkan angka: ";
	cin >> angka;
	cout << "Masukkan pangkat: ";
	cin >> pangkat;

	cout << "Hasil Pangkat Fungsi Iteratif adalah: " << pangkatIteratif(angka, pangkat) << endl;
	cout << "Hasil Pangkat Fungsi Rekursif adalah: " << endl << pangkatRekursif(angka, pangkat) << endl;



	cout << "\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}

int pangkatIteratif(int a, int b){
	int hasil;
	hasil = 1;
	for(int i = 1; i<=b; i++){
		hasil*=a;
	}
	return hasil;
}

int pangkatRekursif(int a, int b){
	if(b == 1){
		return a; 
	}else{
		cout << "REKURSIF"<< endl;
		return a * pangkatRekursif(a, (b-1));
	}
}



