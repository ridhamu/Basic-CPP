#include <iostream>

using namespace std;

void tampilB(int &);
void power(int &);

int main(){

	int a = 5;

	cout << " value dari a: " << a << endl;
	cout << "alamat dari a: " << &a << endl;
	tampilB(a);

	a = 10;
	cout << " value dari a setelah update A: " << a << endl;
	cout << "alamat dari a setelah update A: " << &a << endl;
	tampilB(a);


	power(a);
	cout << " value dari a setelah kuadrat A: " << a << endl;
	cout << "alamat dari a setelah kuadrat A: " << &a << endl;
	tampilB(a);

	cout << "\nAKHIR DARI PROGRAM"<< endl;
	cin.get();
	return 0;

}


void tampilB(int &b){
	cout << " value dari a: " << b << endl;
	cout << "alamat dari a: " << &b << endl << endl;
}

void power(int &valRef){
	valRef *= valRef;
}
