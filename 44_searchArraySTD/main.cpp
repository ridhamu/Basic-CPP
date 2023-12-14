#include <iostream>
#include <array>
#include <algorithm>



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

	std::array< int , arraySize> angka = {7, 2, 1, 0, 8, 3, 9, 4, 6, 5};
	int angkaCari;
	bool exist; 

	printArray(angka);
	std::cout << "Masukkan angka yang ingin dicari dari array di atas: ";
	std::cin >> angkaCari;

	std::sort(angka.begin(), angka.end());
	exist = std::binary_search(angka.begin(), angka.end(), angkaCari);
	
	if(exist){
		std::cout << "angka " << angkaCari << " ada!" << std::endl;
	}else{
		std::cout << "angka " << angkaCari << " tidak ada!" << std::endl;
	}


	std::cout << "\nAKHIR DARI PROGRAM" << std::endl;
	std::cin.get();
	return 0;
}
