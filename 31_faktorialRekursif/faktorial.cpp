#include <iostream>

using namespace std;

//prototipe
int faktorial(int n);

int main(){

	int n, hasil;

	cout << "Mencari Faktorial dari: ";
	cin >> n;

	hasil = faktorial(n);

	cout << "\nHasil Faktorila dari "<< n << " adalah: " << hasil << endl;

	cout << "\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}

int faktorial(int n){
	if(n==1){
		cout << n;
		return n;
	}else{
		cout << n << " * ";
		return n * faktorial(n-1);
	}
}
