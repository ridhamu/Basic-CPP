#include <iostream>

using namespace std;

int main(){

	int a = 10;
	cout << "\nNilai awal adalah " << a << endl;

	//assignment operator (+=, -=, *=, /=, %=)

	a += 3;
	cout << "Ditambah 3 menjadi " << a << endl;

	a -= 3; 
	cout << "Dikurangi 3 menjadi " << a << endl;

	a /= 3;
	cout << "Dibagi 3 menjadi " << a << endl;

	a %= 3;
	cout << "di-modulus menjadi " << a << endl;

	cin.get();
	return 0;
}
