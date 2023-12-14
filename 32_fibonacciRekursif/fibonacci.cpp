#include <iostream>

using namespace std;

int fibonacci(int n);

int main (){

	int n, hasil;
	cout << "Mencari nilai fibonacci ke: ";
	cin >> n;

	hasil = fibonacci(n);

	cout << "nilainya adalah: " << hasil << endl;


	cout << "\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}

int fibonacci(int n){
	if((n==1)||(n==0)){
		return n;
	}else {
		return (fibonacci(n-1)) + (fibonacci(n-2));
	}
}
