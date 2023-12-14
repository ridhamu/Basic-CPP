#include <iostream>


typedef int I;
typedef std::string S;
typedef double D;


template<typename S>
void print(S input){
	std::cout << input << std::endl;
}

template<typename T>
int toInt(T input){
	return int(input);
}

template<typename X, typename Y>
X max(X a, Y b){
	return (a>b) ? a : b;
}



int main(){

	D d = 199.9;
	I i = 100; 

	print("I Wanna Compete and Win on CP !!");
	print(d);
	std::cout << d << "toInt: " << toInt(d) << std::endl;
	std::cout << "Max : " << max(i, d) << std::endl;

	std::cin.get();
	return 0;
}
