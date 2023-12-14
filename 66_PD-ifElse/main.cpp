//PREPROCESSING DIRECTIVE
#include <iostream>

#define ID 2

#if ID == 1
#define BAHASA "Indonesia"
#else
#define BAHASA "English"
#endif

//AKHIR PREPROCESIING DIRECTIVE

using namespace std;

int main(){

	cout << " Bahasa yang dipilih : " << BAHASA <<  endl;


	cin.get();
	return 0;
}

