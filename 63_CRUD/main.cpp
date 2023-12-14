#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa{
	int pk;
	string nama;
	string nim;
	string jurusan;
};

int getOption();
void checkDatabase(fstream &fileData);
void writeData(fstream &fileData, int posisi, Mahasiswa &inputMahsiswa);
int getDataSize(fstream &fileData);
Mahasiswa readData(fstream &fileData, int posisi);
void addDataMahasiswa(fstream &fileData);
void displayDataMahasiswa(fstream &fileData);
void updateRecordMahasiswa(fstream &fileData);
void deleteRecordMahasiswa(fstream &fileData);
// ============= above is prototype of a function =======================


int main(){

	fstream fileData;
	checkDatabase(fileData);
	

	int pilihan = getOption();
	char is_continue;
	enum option{CREATE = 1, DISPLAY, EDIT, DELETE, EXIT};

	while(pilihan != EXIT){


		//switch case 
		switch(pilihan){
			case CREATE: 
				cout << "menambah data mahasiswa" << endl;
				//memanggil fungsi untuk menginput data mahasiswa ke database
				addDataMahasiswa(fileData);
				break;
			case DISPLAY: 
				cout << "menampilkan data mahasiswa" << endl;
				displayDataMahasiswa(fileData);
				break; 
			case EDIT: 
				cout << "mengubah data mahasiswa" << endl;
				displayDataMahasiswa(fileData);
				updateRecordMahasiswa(fileData );
				displayDataMahasiswa(fileData);
				break;
			case DELETE: 
				cout << "menghapus data mahasiswa" << endl;
				displayDataMahasiswa(fileData);
				deleteRecordMahasiswa(fileData);
				displayDataMahasiswa(fileData);
				break; 
			default: 
				cout << "Pilihan tidak ditemukan" << endl;
				break;
		}


		//membuat pilihan lanjut atau tidak setelah mengakses salah satu menu
		label_continue: //control flow 

		cout << "Lanjutkan(y/n) ?: "; 
		cin >> is_continue; 
		if(is_continue == 'y' | is_continue == 'Y'){
			pilihan = getOption();
		}else if(is_continue == 'n' | is_continue == 'N'){
			break;
		}else {
			goto label_continue;
		}
	}

	cout << "akhir dari program" << endl;
	cin.get();
	return 0;
}

void deleteRecordMahasiswa(fstream &fileData){
	/*
		1. pilih nomor data yang ingin dihapus
		2. diposisi nomor data yang dipilih diisi dengan data kosong(delete)
		3. cek data dalam [data.bin]: 
			(ada data dalam [data.bin]) --> pindahkan data ke file temporary
			(tidak ada data dalam [data.bin]) --> akan ditimpa dengan menambahkan offset (offset++)
		 4.pindahkan data(sudah berurut) dari file temporary ke data.bin(yang sudah di kosongkan/flush)
	*/

	int nomor, size, offset;
	fstream tempData;
	Mahasiswa blankMahasiswa, tempMahasiswa;
	size = getDataSize(fileData);

	// 1
	cout << "  data yang dihapus nomor: "; 
	cin >> nomor; 

	// 2
	writeData(fileData, nomor, blankMahasiswa);

	//3
	tempData.open("temp.dat", ios::trunc|ios::out|ios::in|ios::binary);

	offset = 0;

	for(int i=1; i<=size; i++){
		tempMahasiswa = readData(fileData, i);


		if(!tempMahasiswa.nama.empty()){
			writeData(tempData, i - offset, tempMahasiswa);
		}else{
			offset++; 
			cout << "deleted data"<< endl;
		}
	}

	//4
	size = getDataSize(tempData);

	fileData.close(); 
	fileData.open("data.bin", ios::trunc|ios::out|ios::binary); 
	fileData.close();
	fileData.open("data.bin", ios::out|ios::in|ios::binary);

	for(int i=1; i<=size; i++){
		tempMahasiswa = readData(tempData, i);
		writeData(fileData, i, tempMahasiswa);
	}
}

void updateRecordMahasiswa(fstream &fileData){
	Mahasiswa updateMahasiswa;
	int nomor; 

	// mengedit data berdasarkan nomor data
	cout << "mengedit Nomor: "; 
	cin >> nomor; 
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	updateMahasiswa = readData(fileData, nomor);
	
	cout << "\n\nPilihan data: " << endl;
	cout << "    NIM: " << updateMahasiswa.nim << endl;
	cout << "   Nama: " << updateMahasiswa.nama << endl;
	cout << "jurusan: " << updateMahasiswa.jurusan << endl;

	cout << "\nUpdate data no "<< nomor << ": " << endl;
	cout << "    NIM: "; 
	getline(cin, updateMahasiswa.nim);
	cout << "   Nama: " ; 
	getline(cin, updateMahasiswa.nama);
	cout << "jurusan: " ; 
	getline(cin, updateMahasiswa.jurusan);

	// menulis ulang data yang sudah di update pada file
	writeData(fileData, nomor, updateMahasiswa); 
}

void writeData(fstream &fileData, int posisi, Mahasiswa &inputMahsiswa){
	//fungsi menuliskan data pada struct yang sudah di ambil dan 
	// menuliskannya ke dalam data.bin dalam format binary
	fileData.seekp((posisi - 1)*sizeof(Mahasiswa), ios::beg);
	fileData.write(reinterpret_cast<char*>(&inputMahsiswa), sizeof(Mahasiswa));
}


int getDataSize(fstream &fileData){
	//mengembalikan ukuran data
	int start , end;
	fileData.seekg(0, ios::beg);
	start = fileData.tellg();
	fileData.seekg(0, ios::end);
	end  = fileData.tellg();

	return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &fileData, int posisi){
	//memebaca data Mahasiswa terkhir
	Mahasiswa readMahasiswa;
	fileData.seekg((posisi - 1)*sizeof(Mahasiswa), ios::beg);
	fileData.read(reinterpret_cast<char*>(&readMahasiswa), sizeof(Mahasiswa));

	return readMahasiswa;
}

void addDataMahasiswa(fstream &fileData){
	//fungsi mengambil input ke dalam struct data mahasiswa
	Mahasiswa inputMahsiswa, lastMahasiswa; 
	/*
		untuk bisa menambahkan data setelah data yang terakhir(data yg exist), 
		diperlukan: -method untuk membaca data(mendapatkan [Mahasiswa.pk] terikahir)
					-ukuran dari data(dalam byte)
	*/

	int size = getDataSize(fileData);

	//tes output size 
	cout << "ukuran data: " << size <<  endl;

	// readData(fileData, size);

	if(size ==  0){
		inputMahsiswa.pk = 1; 
		cout << "pk : " << inputMahsiswa.pk << endl;
	}else {
		lastMahasiswa = readData(fileData, size);
		cout << ".pk : " << lastMahasiswa.pk << endl; 
		inputMahsiswa.pk = lastMahasiswa.pk + 1;

	}

	//mengambil input data mahasiswa ke data base
	cout << "Nama: "; 
	getline(cin, inputMahsiswa.nama);
	cout << "Jurusan: "; 
	getline(cin, inputMahsiswa.jurusan);
	cout << "NIM: "; 
	getline(cin, inputMahsiswa.nim);

	writeData(fileData, size + 1, inputMahsiswa);
}

void displayDataMahasiswa(fstream &fileData){
	//menampilkan data mahasiswa 
	int size = getDataSize(fileData); 
	Mahasiswa showMahasiswa;
	cout << "No.\tpk.\tNIM\tNama.\t\tJurusan." << endl;
	for(int i = 1; i<=size; i++){
		showMahasiswa = readData(fileData, i);
		cout << i << "\t"; 
		cout << showMahasiswa.pk  << "\t";		
		cout << showMahasiswa.nim << "\t";
		cout << showMahasiswa.nama << "\t\t";
		cout << showMahasiswa.jurusan << endl;


	}
}

void checkDatabase(fstream &fileData){
	fileData.open("data.bin", ios::out | ios::in | ios::binary);

	if(fileData.is_open()){
		cout << "Database ditemukan" << endl;
	}else{
		cout << "Database tidak ditemukan, buat database baru!" << endl;
		fileData.close();
		fileData.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
} 

int getOption(){
	int input;
	system("clear"); //membersihkan console setiap kali menampilkan menu

	//output menu input
	cout << "\nProgram CRUD data mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data mahasiswa" << endl;
	cout << "2. Tampilkan data mahasiswa" << endl;
	cout << "3. Ubah data mahasiswa" << endl;
	cout << "4. Hapus data mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5]? : ";

	//mengmbil input dari console
	cin >> input;
	//mengatasi getline tidak bisa di akses
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return input;
}
