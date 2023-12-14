#include <iostream>
#include <string>
#include <array>
#include <algorithm>


using namespace std;


struct aktor
{
	string nama; 
	int tahunLahir;
};

struct film
{
	string judul;
	string genre;
	int tahun;
	//masukkan struct aktor
	aktor pemeran_1;
	aktor pemeran_2;
	aktor pemeran_3;
};

int main(){

	aktor aktor_1, aktor_2, aktor_3; 
	film film_1, film_2; 

	//data untuk aktor_1
	aktor_1.nama = "Tom Cruise";
	aktor_1.tahunLahir = 1990; 

	//data untuk aktor_2
	aktor_2.nama = "Ryan Renold";
	aktor_2.tahunLahir = 1970;

	//data untuk aktor_3
	aktor_3.nama = "Naruto Uzumaki";
	aktor_3.tahunLahir = 1010;

	// data untuk film_1 
	film_1.judul = "Mission Impossible";
	film_1.tahun = 2000;
	film_1.genre = "Adventure";
	film_1.pemeran_1 = aktor_1;
	film_1.pemeran_2 = aktor_2;

	// data untuk film_2 
	film_2.judul = "Spiderman Home is Close";
	film_2.tahun = 2003;
	film_2.genre = "Super Hero";
	film_2.pemeran_1 = aktor_1;
	film_2.pemeran_3 = aktor_3;

	cout << "=====" << film_1.judul << "=====" << endl;
	cout << "        judul: " << film_1.judul << endl;
	cout << " tahun terbit: " << film_1.tahun << endl;
	cout << "        genre: " << film_1.genre << endl;
	cout << "        Aktor: " << film_1.pemeran_1.nama << endl;
	cout << "             : " << film_1.pemeran_2.nama << endl;

	cout << endl;

	cout << "=====" << film_2.judul << "=====" << endl;
	cout << "        judul: " << film_2.judul << endl;
	cout << " tahun terbit: " << film_2.tahun << endl;
	cout << "        genre: " << film_2.genre << endl;
	cout << "        Aktor: " << film_2.pemeran_1.nama << endl;
	cout << "             : " << film_2.pemeran_3.nama << endl;



	cout << "tes";
	cout << endl;
	cin.get();
	return 0;
}
