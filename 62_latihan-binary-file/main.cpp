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


// fungsi untuk mengambil data
Mahasiswa ambilData(int posisi, fstream &objFile){
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

// fungsi untuk membaca data data
void tulisdata(Mahasiswa &data, fstream &objFile){
	objFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

void tulisDataByPoistion(int posisi, Mahasiswa &bufferdata, fstream &objFile){
	objFile.seekg((posisi-1)*(sizeof(bufferdata)));
	objFile.write(reinterpret_cast<char*>(&bufferdata), sizeof(bufferdata));
}

int  main()
{	

	fstream objFile;
	Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

	objFile.open("data1.bin", ios::trunc | ios::in | ios::out | ios::binary);

	mahasiswa1.NIM = 123;
	mahasiswa1.nama = "ucup";
	mahasiswa1.jurusan = "tataboga";

	mahasiswa2.NIM = 456;
	mahasiswa2.nama = "rangga";
	mahasiswa2.jurusan = "mesin";

	mahasiswa3.NIM = 789;
	mahasiswa3.nama = "doni";
	mahasiswa3.jurusan = "matematika";


	tulisdata(mahasiswa1, objFile);
	tulisdata(mahasiswa2, objFile);
	tulisdata(mahasiswa3, objFile);

	mahasiswa3.nama = "yono";
	tulisDataByPoistion(3, mahasiswa3, objFile);

	output = ambilData(3, objFile);

	cout << output.NIM << endl;
	cout << output.nama << endl;
	cout << output.jurusan << endl;

	objFile.close(); 

	cin.get();
	return 0;
}
