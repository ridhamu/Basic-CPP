#include <iostream>
#include <fstream>
#include <string>


using namespace std;

struct Mahasiswa
{
	int NIM;
	string nama;
	string jurusan;
};


Mahasiswa ambilData(int &posisi, fstream &objFile){
	Mahasiswa bufferdata;

	//algoritma cara membaca data ke-n dengan kelipatan ukuran data n;

	/*
		data struct Mahasiswa adalah 56 byte;
		0-----56-----|-----56-----|-----56-----168 byte

	*/

	objFile.seekp((posisi-1)*(sizeof(bufferdata)));
	objFile.read(reinterpret_cast<char*>(&bufferdata), sizeof(bufferdata));

	return bufferdata;

}

int main(){

	fstream objFile;
	Mahasiswa dataMahasiswa;

	objFile.open("data1.bin", ios::in | ios::binary);
	
	int posisi = 3 ;

	dataMahasiswa = ambilData(posisi, objFile);

	cout << dataMahasiswa.NIM << endl;
	cout << dataMahasiswa.nama << endl;
	cout << dataMahasiswa.jurusan << endl;

	objFile.close();

	cin.get();
	return 0;
}
