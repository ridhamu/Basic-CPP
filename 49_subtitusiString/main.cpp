#include <iostream>
#include <string>

using namespace std;

int main(){

	string kalimat_1("aku suka kamu suka, siapa? dia!");
	string kalimat_2("wakanda forevah!!!");

	//tampil string
	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl;

	//swap string
	kalimat_1.swap(kalimat_2);
	cout << "--swap string--" << endl;
	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl;

	//replace string
	kalimat_2.replace(kalimat_2.find("dia"), 3, "AKU");
	kalimat_1.replace(kalimat_1.find("ah"), 2, "er");
	cout << "--replace string--" << endl;
	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl;

	//insert string

	kalimat_1.insert(kalimat_1.find("fo"), "dan hatiku ");
	kalimat_2.insert(kalimat_2.find("!"), " ATAU DIA?");
	cout << "--replace string--" << endl;
	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl;


	cout << endl;
	cin.get();
	return 0;
}
