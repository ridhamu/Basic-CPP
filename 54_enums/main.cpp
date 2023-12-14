#include <iostream>

using namespace std;

enum warna
{
	merah, 
	jingga, 
	kuning, 
	hijau = 6,
	biru, 
	cokelat,

};

int main(){

	warna kain; 

	kain = cokelat;

	cout << " warna kain adalah : " << kain << endl;

	if(kain == cokelat){
		cout << kain << " adalah nomor untuk warna cokelat" << endl;
	}

	cout << "tes"<< endl;
	cin.get();
	return 0;
}
