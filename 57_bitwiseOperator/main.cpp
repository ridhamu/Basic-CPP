#include <iostream>
#include <string>

using namespace std;

/*
	&	Bitwise AND Operator
	|	Bitwise OR Operator
	^	Bitwise XOR Operator
	~	Bitwise Complement Operator
	<<	Bitwise Shift Left Operator
	>>	Bitwise Shift Right Operator
*/

void printBinary(unsigned short val, string name){
	cout << " "<< name<< " : " << bitset<8>(val) << endl;
}

int main(){

	unsigned short a = 6; 
	unsigned short b = 10;
	unsigned short c;

	cout << "\n<< - Bitwise SHFT RIGHT OPERATOR" << endl;
	c = a >> 1; 
	printBinary(a, "a");
	printBinary(c, "c");
	cout << " "<< c << endl;

	cout << "\n<< - Bitwise SHFT LEFT OPERATOR" << endl;
	c = a << 1; 
	printBinary(a, "a");
	printBinary(c, "c");
	cout << " "<< c << endl;

	cout << "\n~ - Bitwise NOT" << endl;
	c = ~a; 
	printBinary(a, "a");
	printBinary(c, "c");
	cout << " "<< c << endl;

	cout << "\n^ - Bitwise XOR" << endl;
	c = a ^ b; 
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << " "<< c << endl;

	cout << "\n| - Bitwise OR" << endl;
	c = a | b; 
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << " "<< c << endl;

	cout << "\n& - Bitwise AND" << endl;
	c = a & b; 
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << " "<< c << endl;

	cout <<  endl;
	cin.get();
	return 0;
}
