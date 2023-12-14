#include <iostream>

//macro
#define PI  3.141592653589793238



using namespace std;

double pi = 3.141592653589793238; 

int main(){

	cout << "  Nilai PI(macro) : " << PI << endl;
	// cout << "address PI(macro) : " << &PI << endl; ERROR
	cout << "    Nilai PI(var) : " << pi << endl;
	cout << "  Address PI(var) : " << &pi << endl;

	cin.get();
	return 0;
}
