#include <iostream>
#include <array>

using namespace std;

void printArray(int *arrayPtr, int baris, int kolom){
	int index = 0;
	for(int i = 0; i<baris; i++){
		cout << "[ ";
		for(int j = 0; j<kolom; j++){
			cout << *(arrayPtr + index) << " ";
			index++; 
		}
		cout << "]" << endl;
	}

}

int main(){

	const int baris = 3;
	const int kolom = 3;
	int array[baris][kolom] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printArray(*array, baris, kolom);


	cout <<"\nAKHIR DARI PROGRAM"<< endl;
	cin.get();
	return 0;
}
