#include <iostream>

using namespace std;

int main(){

	int a = 3;
	int b = 3; 


	cout << "#postfix increment"<< endl;
	cout << "Nilai awal " << a << endl;
	cout << a++ << endl;
	cout << a << endl << endl;


	cout << "prefix increment" << endl;
	cout << "Nilai awal " << b << endl;
	cout << ++b << endl;
	cout << b << endl << endl;


	cout << "postifx decrement" << endl;
	cout << "Nilai awal " << a << endl;
	cout << a-- << endl;
	cout << a << endl;

	cout << "prefix decrement" << endl;
	cout << "Nilai awal " << b << endl;
	cout << b-- << endl;
	cout << b << endl;

	cin.get();
	return 0;
}