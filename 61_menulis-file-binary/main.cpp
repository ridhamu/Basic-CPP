#include <iostream>
#include <fstream>

using namespace std;

int main(){

	fstream myFile;
	int hasil;

	myFile.open("data.bin", ios::in | ios::binary);

	myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));

	myFile.close();

	cout << "besarnya adalah: " << sizeof(hasil) << endl;
	cout << hasil << endl;

	
	cin.get();
	return 0;
}


/*
	fstream myFile;
	int num = 12345; 

	myFile.open("data.bin", ios::out | ios::binary);

	myFile.write(reinterpret_cast<char*>(&num), sizeof(num));

	myFile.close();

*/