#include <iostream>

using namespace std;


int main(){

	int a = 5;

	cout << "  value dari a: " << a << endl;
	cout << " alamat dari a: " << &a << endl << endl;

	//references; int &variable_name = variable_to_references; 

	int &b = a;
	cout << "  value dari b: " << b << endl;
	cout << " alamat dari b: " << &b << endl << endl;


	b = 10;
	cout << "  value dari a setelah update b: " << a << endl;
	cout << " alamat dari a setelah update b: " << &a << endl;
	cout << "  value dari b setelah update b: " << b << endl;
	cout << " alamat dari b setelah update b: " << &b << endl << endl;


	a = 15;
	cout << "  value dari b setelah update a: " << b << endl;
	cout << " alamat dari b setelah update a: " << &b << endl;
	cout << "  value dari a setelah update a: " << a << endl;
	cout << " alamat dari a setelah update a: " << &a << endl << endl;



	cout << "\nAKHIR DARI PROGRAM"<<endl;
	cin.get();
	return 0;
}
