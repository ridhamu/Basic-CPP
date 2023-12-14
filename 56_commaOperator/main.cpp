#include <iostream>
#include <string>

using namespace std;

void printData(int val){
	cout << val << endl;
}

int main(){

	// comma operator memasukkan espresi yang dipisah dengan comma operator dan dieksekusi secara berurutan
	/*
		SYNTAX: 
		(exspresi1, ekspresi2, dst) 
	*/

	int a;
	int b; 
	int c; 

	a = (b=18, cout<<" b: ", printData(b),  c=2, cout << " c: ", printData(c), (b+c));

	printData(a);
	

	cout << endl;
	cin.get();
	return 0;
}
