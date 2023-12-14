#include <iostream>
#include <string>
#include <fstream>
#include "crud.h"

int crud::getDataSize(std::fstream &fileData){
		//mengembalikan ukuran data
		int start , end;
		fileData.seekg(0, std::ios::beg);
		start = fileData.tellg();
		fileData.seekg(0, std::ios::end);
		end  = fileData.tellg();

		return (end-start)/sizeof(Mahasiswa);
	}

crud::Mahasiswa crud::readData(std::fstream &fileData, int posisi){
	//memebaca data Mahasiswa terkhir
	Mahasiswa readMahasiswa;
	fileData.seekg((posisi - 1)*sizeof(Mahasiswa), std::ios::beg);
	fileData.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));

	return readMahasiswa;
}

void crud::writeData(std::fstream &fileData, int posisi, Mahasiswa &inputMahsiswa){
	//fungsi menuliskan data pada struct yang sudah di ambil dan 
	// menuliskannya ke dalam data.bin dalam format binary
	fileData.seekp((posisi - 1)*sizeof(Mahasiswa), std::ios::beg);
	fileData.write(reinterpret_cast<char*>(&inputMahsiswa), sizeof(Mahasiswa));
}

void crud::deleteRecordMahasiswa(std::fstream &fileData){
	/*
		1. pilih nomor data yang ingin dihapus
		2. diposisi nomor data yang dipilih diisi dengan data kosong(delete)
		3. cek data dalam [data.bin]: 
			(ada data dalam [da  ta.bin]) --> pindahkan data ke file temporary
			(tidak ada data dalam [data.bin]) --> akan ditimpa dengan menambahkan offset (offset++)
		 4.pindahkan data(sudah berurut) dari file temporary ke data.bin(yang sudah di kosongkan/flush)
	*/

	int nomor, size, offset;
	std::fstream tempData;
	Mahasiswa blankMahasiswa, tempMahasiswa;
	size = crud::getDataSize(fileData);

	// 1
	std::cout << "  data yang dihapus nomor: "; 
	std::cin >> nomor; 

	// 2
	crud::writeData(fileData, nomor, blankMahasiswa);

	//3
	tempData.open("temp.dat", std::ios::trunc|std::ios::out|std::ios::in|std::ios::binary);

	offset = 0;

	for(int i=1; i<=size; i++){
		tempMahasiswa = crud::readData(fileData, i);


		if(!tempMahasiswa.nama.empty()){
			crud::writeData(tempData, i - offset, tempMahasiswa);
		}else{
			offset++; 
			std::cout << "deleted data"<< std::endl;
		}
	}

	//4
	size = crud::getDataSize(tempData);

	fileData.close(); 
	fileData.open("data.bin", std::ios::trunc|std::ios::out|std::ios::binary); 
	fileData.close();
	fileData.open("data.bin", std::ios::out|std::ios::in|std::ios::binary);

	for(int i=1; i<=size; i++){
		tempMahasiswa = crud::readData(tempData, i);
		crud::writeData(fileData, i, tempMahasiswa);
	}
}

void crud::updateRecordMahasiswa(std::fstream &fileData){
	Mahasiswa updateMahasiswa;
	int nomor; 

	// mengedit data berdasarkan nomor data
	std::cout << "mengedit Nomor: "; 
	std::cin >> nomor; 
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	updateMahasiswa = crud::readData(fileData, nomor);
	
	std::cout << "\n\nPilihan data: " << std::endl;
	std::cout << "    NIM: " << updateMahasiswa.nim << std::endl;
	std::cout << "   Nama: " << updateMahasiswa.nama << std::endl;
	std::cout << "jurusan: " << updateMahasiswa.jurusan << std::endl;

	std::cout << "\nUpdate data no "<< nomor << ": " << std::endl;
	std::cout << "    NIM: "; 
	getline(std::cin, updateMahasiswa.nim);
	std::cout << "   Nama: " ; 
	getline(std::cin, updateMahasiswa.nama);
	std::cout << "jurusan: " ; 
	getline(std::cin, updateMahasiswa.jurusan);

	// menulis ulang data yang sudah di update pada file
	crud::writeData(fileData, nomor, updateMahasiswa); 
}

	

void crud::addDataMahasiswa(std::fstream &fileData){
	//fungsi mengambil input ke dalam struct data mahasiswa
	Mahasiswa inputMahsiswa, lastMahasiswa; 
	/*
		untuk bisa menambahkan data setelah data yang terakhir(data yg exist), 
		diperlukan: -method untuk membaca data(mendapatkan [Mahasiswa.pk] terikahir)
					-ukuran dari data(dalam byte)
	*/

	int size = crud::getDataSize(fileData);

	//tes output size 
	std::cout << "ukuran data: " << size <<  std::endl;

	// crud::readData(fileData, size);

	if(size ==  0){
		inputMahsiswa.pk = 1; 
		std::cout << "pk : " << inputMahsiswa.pk << std::endl;
	}else {
		lastMahasiswa = crud::readData(fileData, size);
		std::cout << ".pk : " << lastMahasiswa.pk << std::endl; 
		inputMahsiswa.pk = lastMahasiswa.pk + 1;

	}

	//mengambil input data mahasiswa ke data base
	std::cout << "Nama: "; 
	getline(std::cin, inputMahsiswa.nama);
	std::cout << "Jurusan: "; 
	getline(std::cin, inputMahsiswa.jurusan);
	std::cout << "NIM: "; 
	getline(std::cin, inputMahsiswa.nim);

	crud::writeData(fileData, size + 1, inputMahsiswa);
}

void crud::displayDataMahasiswa(std::fstream &fileData){
	//menampilkan data mahasiswa 
	int size = crud::getDataSize(fileData); 
	Mahasiswa showMahasiswa;
	std::cout << "No.\tpk.\tNIM\tNama.\t\tJurusan." << std::endl;
	for(int i = 1; i<=size; i++){
		showMahasiswa = crud::readData(fileData, i);
		std::cout << i << "\t"; 
		std::cout << showMahasiswa.pk  << "\t";		
		std::cout << showMahasiswa.nim << "\t";
		std::cout << showMahasiswa.nama << "\t\t";
		std::cout << showMahasiswa.jurusan << std::endl;


	}
}

void crud::checkDatabase(std::fstream &fileData){
	fileData.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

	if(fileData.is_open()){
		std::cout << "Database ditemukan" << std::endl;
	}else{
		std::cout << "Database tidak ditemukan, buat database baru!" << std::endl;
		fileData.close();
		fileData.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
	}
} 

int crud::getOption(){
	int input;
	system("clear"); //membersihkan console setiap kali menampilkan menu

	//output menu input
	std::cout << "\nProgram CRUD data mahasiswa" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "1. Tambah data mahasiswa" << std::endl;
	std::cout << "2. Tampilkan data mahasiswa" << std::endl;
	std::cout << "3. Ubah data mahasiswa" << std::endl;
	std::cout << "4. Hapus data mahasiswa" << std::endl;
	std::cout << "5. Selesai" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "pilih [1-5]? : ";

	//mengmbil input dari console
	std::cin >> input;
	//mengatasi getline tidak bisa di akses
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return input;
}