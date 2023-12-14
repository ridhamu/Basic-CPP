#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	cout << "Masukkan Nilai: "<< endl;
	cin >> a;

	if(a == 1){
		cout << "nilai yang dimasukkan = 1" << endl;
	}else if (a == 2){
		cout << "nilai yang dimasukkan = 2" << endl;
	}else if (a == 3){
		cout << "nilai yang dimasukkan = 3" << endl;
	}else{
		cout << "nilai yang anda masukkan bukan 1,2 atau 3.";
	}

	cout << "\nSELESAI"<< endl;
	return 0;
}
