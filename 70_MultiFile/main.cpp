#include <iostream>
#include <string>
#include <fstream>
#include "crud.h"



int main(){

	std::fstream fileData;
	crud::checkDatabase(fileData);
	

	int pilihan = crud::getOption();
	char is_continue;
	enum option{CREATE = 1, DISPLAY, EDIT, DELETE, EXIT};

	while(pilihan != EXIT){


		//switch case 
		switch(pilihan){
			case CREATE: 
				std::cout << "menambah data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(fileData);
				//memanggil fungsi untuk menginput data mahasiswa ke database
				crud::addDataMahasiswa(fileData);
				crud::displayDataMahasiswa(fileData);
				break;
			case DISPLAY: 
				std::cout << "menampilkan data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(fileData);
				break; 
			case EDIT: 
				std::cout << "mengubah data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(fileData);
				crud::updateRecordMahasiswa(fileData );
				crud::displayDataMahasiswa(fileData);
				break;
			case DELETE: 
				std::cout << "menghapus data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(fileData);
				crud::deleteRecordMahasiswa(fileData);
				crud::displayDataMahasiswa(fileData);
				break; 
			default: 
				std::cout << "Pilihan tidak ditemukan" << std::endl;
				break;
		}


		//membuat pilihan lanjut atau tidak setelah mengakses salah satu menu
		label_continue: //control flow 

		std::cout << "Lanjutkan(y/n) ?: "; 
		std::cin >> is_continue; 
		if(is_continue == 'y' | is_continue == 'Y'){
			pilihan = crud::getOption();
		}else if(is_continue == 'n' | is_continue == 'N'){
			break;
		}else {
			goto label_continue;
		}
	}

	std::cout << "akhir dari program" << std::endl;
	std::cin.get();
	return 0;
}

 
