#include <iostream>

using namespace std;

int main(){


	int n;
	cout << "Masukkan panjang pola: " << endl;
	cin >> n;

	cout << "\n POLA 1"<< endl;
	for(int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}


	cout << "\n POLA 2"<< endl;
	for(int i=1; i<=n; i++){
		for (int j=n; j>=i; j--){
			cout << "* ";
		}
		cout << endl;
	}


	cout<<"\nProgram Selesai"<<endl;
	cin.get();
	return 0;
}
