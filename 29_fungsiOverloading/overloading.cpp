#include <iostream>

using namespace std;

int square(int panjang, int lebar);
int square(int panjang);
double square (double panjang);

int main(){

	cout << "Luas persegi 3x2\t: " << square(3,2) << endl;
	cout << "Luas persegi 3x3\t: " << square(3) << endl;
	cout << "Luas persegi 3.7x3.7\t: " << square(3.7) << endl;

	cout << "\nAKHIR DARI PROGRAM"<<endl;
	cin.get();
	return 0;
}

int square(int panjang, int lebar) {
	return panjang * lebar; 
}

int square(int panjang){
	return panjang*panjang;
}

double square (double panjang){
	return panjang*panjang;
}

