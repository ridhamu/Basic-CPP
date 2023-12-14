#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main(){

	ifstream eksFile;
	string buffer, output;
	bool isData = false;

	eksFile.open("data1.txt", ios::in);


	while(!isData){
		getline(eksFile, buffer);
		output.append("\n"+buffer);
		if(buffer == "data"){
			isData = true;
		}
	}

	cout << output << endl;

	getline(eksFile, buffer);
	output.append("\n" + buffer);
	cout << output << endl;

	int no;
	string nama;

	while(!eksFile.eof()){
		eksFile >> no;
		eksFile >> nama;

		cout << no << "\t" << nama << endl;
	}
	

	cout <<  endl;
	cin.get();
	return 0;
}
