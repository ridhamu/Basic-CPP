#include <iostream>
#include <string>

using namespace std;


int main(){

	string input; 
	string namaRahasia("qwer");


	while(true){
		cout << "Tebak nama: ";
		cin >> input;
		cout << "nama yang anda masukkan: "<< input << endl;

		if(input == namaRahasia){
			cout << "\nTEBAKAN ANDA BENAR!!!" << endl;
			break;
		}
		cout << "\nTEBAKAN ANDA SALAH!!!!"<< endl;
		cout << "silahkan coba lagi" << endl;
	}

	cout << "\n" << endl;
	cin.get();
	return 0;
}
