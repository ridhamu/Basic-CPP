#include <iostream>


typedef int I;
typedef int iVector[2];
typedef unsigned long ul;
typedef double dVector[2];



int main(){

	I a = 10;
	iVector b = {1,2};
	ul c = 12134812648712;
	dVector d = {1.2 , 3.4};

	std::cout << "nilai a: " << a << std::endl;
	std::cout << "nilai b: " << b[0] << ", "<< b[1] << std::endl;
	std::cout << "nilai c: " << c << std::endl;
	std::cout << "nilai d: " << d[0] << ", "<< d[1] << std::endl;

	std::cin.get();
	return 0;
}