#include <iostream>
#include <string>

using namespace std;

int main(){

	string input;

	cout << "masukkan kalimat: ";
	getline(cin, input);

	cout << "input: " << input << endl;

	//menghitung kata menggunakan while loop dan .find

	int jumlah = 0;
	int posisi = 0;
	while(true){
		posisi = input.find(" ", posisi);
		jumlah += 1; 
		if(posisi < 0){
			break;
		}
		posisi += 1;
	}

	cout << "jumlah kata: " << jumlah << " kata" << endl;


	cout << endl;
	cin.get();
	return 0;
}
