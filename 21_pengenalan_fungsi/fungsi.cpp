#include <iostream>
#include <cmath>

using namespace std;

int main(){

	cout << "FUNGSI MENCARI AKAR\n"<< "Masukkan nilai a: "<<endl;
	int a; 
	cin >> a;

	double akar = sqrt(a);

	cout << "Nilai akar dari "<< a << " adalah " << akar << endl;

	cout << "\nAkhir Program"<< endl;
	cin.get();
	return 0;
}