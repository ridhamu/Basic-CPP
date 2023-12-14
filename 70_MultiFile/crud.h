#include <iostream>
#include <string>
#include <fstream>


namespace crud{

	struct Mahasiswa{
		int pk;
		std::string nama;
		std::string nim;
		std::string jurusan;
	};

	int getOption();
	void checkDatabase(std::fstream &fileData);
	void writeData(std::fstream &fileData, int posisi, Mahasiswa &inputMahsiswa);
	int getDataSize(std::fstream &fileData);
	Mahasiswa readData(std::fstream &fileData, int posisi);
	void addDataMahasiswa(std::fstream &fileData);
	void displayDataMahasiswa(std::fstream &fileData);
	void updateRecordMahasiswa(std::fstream &fileData);
	void deleteRecordMahasiswa(std::fstream &fileData);
	// ============= above is prototype of a function =======================

}

