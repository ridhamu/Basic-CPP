#include <iostream>
#include <array>

using namespace std;

int main() {

	array<int, 10> nilai;

	cout << "\nPROGRAM INPUT JUMLAH MAHASISWA DENGAN NILAI TERTENTU"<< endl;
	for(int i=0; i<=nilai.size(); i++){
		cout << " jumlah murid dgn nilai ";
		if(i == 0){
			cout << "0 - 9   : ";
		}else if(i == 10){
			cout << "100     : ";
		}else {
			cout << (i*10) << " - " << (i*10+9) << " : ";
		}
		cin >> nilai[i];
	}

	cout << "\nGRAFIK NILAI"<< endl;
	for(int i=0; i<=nilai.size(); i++){
		if(i == 0){
			cout << "0 - 9   : ";
		}else if(i == 10){
			cout << "100     : ";
		}else {
			cout << (i*10) << " - " << (i*10+9) << " : ";
		}

		for(int star = 0; star <= nilai[i]; star++){
			cout << "* ";
		}
		cout << endl;
	}


	cin.get();
	return 0;
}
