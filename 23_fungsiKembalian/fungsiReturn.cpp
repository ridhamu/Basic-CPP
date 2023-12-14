#include <iostream>
#include <cmath>

using namespace std;

int pangkat(int x){
	int y; 
	y = x * x; 
	return y;
}

int tambah(int a, int b){
	int result; 
	result = a + b;
	return result;
}



int main(){

	int a, b, r, hasil1, hasil2;

	cout << "mencari pangkat dari : "<< endl;
	cin >> r; 
	hasil1 = pangkat(r);
	cout << "\nPangkat dari "<< r << " adalah " << hasil1 << endl;

	cout << "\nMencari nilai tambah a dan b." << endl;
	cout << "Masukkan nilai a: ";
	cin >> a;
	cout << "Masukkan nilai b: ";
	cin >> b; 
	hasil2 = tambah(a, b);
	cout<< "\nHasil " << a << " tambah " << b << ": " << hasil2 << endl;


	cin.get();
	return 0;
}
