#include <iostream>
#include <array>
#include <algorithm>


// using namespace std; 
//since the algorithm also member of std library on c++, so we 
// can indlude [using namespace std] on our code

const size_t arraySize = 10;


void printArray(std::array< int , arraySize> &angka){
	std::cout << "Angka: "; 
	for(int outAngka : angka){
		std::cout << outAngka << " ";
	}
	std::cout << std::endl;
}

void printArray(std::array< char , arraySize> &huruf){
	std::cout << "Angka: "; 
	for(char outHuruf : huruf){
		std::cout << outHuruf << " ";
	}
	std::cout << std::endl;
}



int main(){

	std::array< int , arraySize> angka = {5, 2, 3, 4, 1, 9, 6, 7, 8, 0};
	std::array< char, arraySize> huruf = {'x', 'w', 'a', 'i', 'h', 'g', 'p', 'k', 's', 'z'};

	printArray(angka);
	printArray(huruf);
	std::cout << std::endl;

	std::sort(angka.begin(), angka.end());
	printArray(angka);
	std::sort(huruf.begin(), huruf.end());
	printArray(huruf);

	std::cout << "\nAKHIR DARI PROGRAM" << std::endl;
	std::cin.get();
	return 0;
}
