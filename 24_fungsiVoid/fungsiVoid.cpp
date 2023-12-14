#include <iostream>

using namespace std;

int kuadrat(int x){
	int y;
	y = x*x;
	return y;
}

void tampil(int hasilInput){
	cout << "===Menampilkan dengan fungsi void==="<<endl;
	cout << hasilInput << endl;
}

int main(){

	cout << "Nilai kuadrat dari : " << endl;
	int a, hasil; 
	cin >> a;

	hasil = kuadrat(a);
	tampil(hasil);


	return 0;
}
