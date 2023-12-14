#include <iostream>

using namespace std;

int main(){

	int a = 5; 

	// pointer dari variabel a
	// pointer selalu bertipe integer(int)

	// int *aPtr = nullptr;
	// aPtr = &a;
	int *aPtr = &a;

	cout << "ALAMAT MEMORI DARI a\t\t\t: " << &a << endl;
	cout << "VALUE DARI a \t\t\t\t: " << a << endl;
	cout << "ADDRESS DARI a MENGGUNAKAN POINTER\t: " << aPtr << endl;
	cout << "VALUE DARI a MENGGUNAKAN PIONTER \t: " << *aPtr << endl;
	cout << "VALUE DARI a \t\t\t\t: " << a << endl;



	cout << "\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}
