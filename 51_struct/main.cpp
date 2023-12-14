#include <iostream>
#include <array>
#include <string>
#include <algorithm>


using namespace std;

//struct merupakan data yang berisikan berbagai macam data

struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){

	buah apel;
	buah jeruk;

	apel.warna = "merah";
	apel.berat = 250.5f;
	apel.harga = 250000;
	apel.rasa = "manis kesat";

	jeruk.warna = "orannye";
	jeruk.berat = 150.5f;
	jeruk.harga = 10000;
	jeruk.rasa = "asam";

	cout << "===apel===" << endl;
	cout << "+" << apel.warna << endl;
	cout << "+" << apel.berat << " gr " << endl;
	cout << "+" << apel.harga << " idr" << endl;
	cout << "+" << apel.rasa << endl;

	cout << endl;

	cout << "===jeruk===" << endl;
	cout << "+" << jeruk.warna << endl;
	cout << "+" << jeruk.berat << " gr " << endl;
	cout << "+" << jeruk.harga << " idr" << endl;
	cout << "+" << jeruk.rasa << endl;


	cout << endl;
	cin.get();
	return 0;
}
