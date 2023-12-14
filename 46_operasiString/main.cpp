#include <iostream>
#include <string>

using namespace std;

int main(){

	string kata("cat");

	//mengeluarkan data string
	cout << kata << endl;

	//mengeluarkan karakter string berdasarkan index
	cout << "karakter index ke - 0: " << kata[0] << endl;
	cout << "karakter index ke - 1: " << kata[1] << endl;
	cout << "karakter index ke - 2: " << kata[2] << endl;
	cout << "karakter index ke - 3: " << kata[3] << endl;


	//mengubah karakter pada string
	kata[1] = 'e'; 
	cout << "setelah mengubah karakter pada string: " << endl;
	cout << kata << endl;

	// menambahkan/concatination
	string kata2(kata + "ar"); 
	cout << kata2 << endl;

	string kata3("membahana");
	kata2.append(" "+kata3);
	cout << kata2 << endl;

	kata2 += " ahaaayyyyy!!!";
	cout << kata2 << endl;

	cout << "\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0; 
}
