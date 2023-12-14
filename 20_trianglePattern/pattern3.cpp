#include <iostream>

using namespace std;

int main(){

	int n;
	cout<< "Masukkan nilai N: ";
	cin >> n;

	cout << "\nPOLA 5"<<endl;

	for(int i=1; i<=n; i++){

		for(int j=n; j>i; j--){
			cout << "  ";
		}
		for(int j=1; j<=((i*2)-1); j++){
			cout << "* ";
		}
		cout << endl;
	}



	cout << "\nPOLA 6"<<endl;

	for(int i=1; i<=n; i++){

		for(int j=1; j<i; j++){
			cout << "  ";
		}

		for(int j=n; j>=(2*i-n); j--){
			cout << "* ";
		}
		cout << endl;
	}



	cout << "\nPOLA 7"<<endl;

	for(int i=1; i<=n; i++){

		for(int j=n; j>i; j--){
			cout << "  ";
		}
		for(int j=1; j<=((i*2)-1); j++){
			cout << "* ";
		}
		cout << endl;
	}
	for(int i=2; i<=n; i++){

		for(int j=1; j<i; j++){
			cout << "  ";
		}

		for(int j=n; j>=(2*i-n); j--){
			cout << "* ";
		}
		cout << endl;
	}


	cout << "\nPROGRAM SELESAI" << endl;
	cin.get();
	return 0;
}
