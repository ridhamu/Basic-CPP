#include <iostream>

using namespace std;

//default argument

double volumeBalok(double p = 1, double l = 1, double t = 1);
void println(double x);

int main(){
	double hasil1, hasil2, hasil3;
	hasil1 = volumeBalok(10, 10, 10);
	hasil2 = volumeBalok(10, 10);
	hasil3 = volumeBalok(10);

	println(hasil1);
	println(hasil2);
	println(hasil3);


	cout << "\nAKHIR DARI PROGRAM"<< endl;
	cin.get();
	return 0;
}

double volumeBalok(double p, double l, double t){
	return p*l*t;
}

void println(double x){
	cout << "Volume Balok adalah: " <<  x << endl;;
}
