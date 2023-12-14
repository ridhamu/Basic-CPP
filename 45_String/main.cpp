#include <iostream>
#include <string>

using namespace std;


int main (){

	//string merupakan kumpluan charater pada array dengan tipe array;

	// char kata[5] = {'m', 'o', 'b', 'i', 'l'};
	// cout << kata << endl;

	string kata("kucing");
	cout << kata << endl;

	string word; 
	cout << "masukkan kata(tanpa spasi): ";
	cin >> word; 
	cout << "kata yang anda masukkan adalahd: " ;
	cout << word;

	cin.get();
	return 0;
}
