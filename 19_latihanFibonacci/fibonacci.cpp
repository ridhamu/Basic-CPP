#include <iostream>

using namespace std;

int main(){

	int n;
	int f_n, f_n1, f_n2;
	cout << "Masukkan nilai ke-n: ";  
	cin >> n; 

	cout << "Deret Fibonacci: " << endl;

	f_n1 = 1;
	f_n2 = 0;

	cout << f_n1 << " ";
	for(int i=1; i<n; i++){


		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;

		cout << f_n << " ";
	}


	cout << "\nProgram Selesai" << endl;
	return 0;
}
