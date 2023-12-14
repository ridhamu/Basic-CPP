#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
	int a; 
	a = 10;

	cout << "nilai a adalah ";
	cout << a << endl;


	// memasukkan nialai melalui console(terminal)

	cout << "Masukkan nilai : ";
	cin >> a; 
	cout << "nilai yang anda masukkan adalah " << a << endl;


	cin.get();
	return 0;
}