#include <iostream>

using namespace std;

int main(){


	int n;
	cout << "Masukkan panjang pola: " << endl;
	cin >> n;


	cout << "\nPOLA 3"<<endl;

	for(int i=1; i<=n; i++){

		for(int j=1; j<i; j++){
			cout << "  ";
		}

		for(int j=n; j>=i; j--){
			cout << "* ";
		}
		cout << endl;
	}


	cout << "\nPOLA 4"<<endl;

	for(int i=1; i<=n; i++){

		for(int j=n; j>i; j--){
			cout << "  ";
		}
		for(int j=1; j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}


	cout<<"\nProgram Selesai"<<endl;
	cin.get();
	return 0;
}
