#include <iostream>
#include <cstdlib>

using namespace std; 

int main(){

	char lanjut;

	while(true){
		cout << "lempar dadu ?(y/n)"<<endl;
		cin >> lanjut;

		if(lanjut == 'y'){
			cout << "\nDadu: "<< (1 + (rand()%6)) << endl << endl;;
		}else if(lanjut == 'n'){
			cout << "\nAKHIR DARI PROGRAM"<< endl;		
			break;
		}else {
			cout << "WARNING: INPUT YANG ANDA MASUKKAN SALAH"<< endl;
		}
	}

	
	cin.get();
	return 0;
}