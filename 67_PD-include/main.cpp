//PREPROCESSING DIRECTIVE
#include <iostream>

//menguunakan include dari file yang di save di local computer
#include "library.h"

//AKHRI PREPROCESSSING DIRECTIVE

using namespace std;


int main(){

	cout << "===berhasil===" << endl;
	cout << "       PI : " << PI << endl;
	cout << "  kuadrat : " << KUADRAT(10) << endl;
	cout << "      Max : " << MAX(100, 99) << endl;
	cout << "   String : " << data << endl;

	cin.get();
	return 0;
}