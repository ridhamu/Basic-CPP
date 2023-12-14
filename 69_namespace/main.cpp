#include <iostream>
#include "output.h"

void fungsi(){
	std::cout << "Ini adalah fungsi biasa std::" << std::endl;
}

int main(){

	std::cout << output::b << std::endl;
	fungsi();
	output::fungsi();
	std::cin.get();
	return 0;
}