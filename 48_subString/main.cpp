#include <iostream>
#include <string>

using namespace std;

int main(){

	string kalimat_1("Dayat suka olahraga supaya sehat");
	string kalimat_2("Ucup suka makan pisang di pagi hari");

	cout << "1. " << kalimat_1 << endl;
	cout << "2. " << kalimat_2 << endl;

	//mengambil bagian string tertentu(awal/tengah/akhir) berdasarkan index
	//SYNTAX: 
	// substr(index awal, panjang bagian(int));

	cout << "\nsubstr(11, 8) : " << kalimat_1.substr(11, 8) << endl;
	cout << "substr(11, 8) : " << kalimat_2.substr(16, 6) << endl;


	// mengambil index dari string tertentu(sudah tau stringnya);
	/*
		SYNTAX: 
				.find("string/karakter-dicari", opsional);

		output: menampilkan index awal dari string yang dicari(int)
	*/

	cout << "index dari 'olahraga' : " << kalimat_1.find("olahraga") << endl;
	cout << "index dari 'pisang' : " << kalimat_2.find("pisang") << endl;

	//menggunakan variabel int untuk mencari berapa jumlah string/karakter
	//yang dincari pada suatu string

	int index = kalimat_1.find("a");
	for(int counter = 0; counter<=8; counter++){
		
		
		index += counter;


		if (counter == 0 ){
			cout << "karakter 'a' ke-" << counter+1;
			cout << " pada string di index: ";
			cout << kalimat_1.find("a") << endl;
			continue;
		}else if(counter == 8){
			counter -= 1;
			cout << "karakter 'a' ke-" << counter+1;
			cout << " pada string di index: ";
			cout << kalimat_1.find("a", index) << endl;	
			break;
		}
		cout << "karakter 'a' ke-" << counter+1;
		cout << " pada string di index: ";
		cout << kalimat_1.find("a", index) << endl;	
		
	}
	

	// mengambil kalimat/karakter dari belakang
	/*
		SYNTAX: 
		.rfind("string/karakter", int(index));

	*/

	cout << "\nkarakter 'a' dari belakang kalimat pertama(kalimat 2) ";
	cout <<"terletak pada index: "<< kalimat_2.rfind("a");

	cin.get();
	return 0;
}
