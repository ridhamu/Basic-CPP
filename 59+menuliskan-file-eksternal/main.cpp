#include <iostream>
#include <fstream> // 3 anak: ofstream, ifstream, fstream(gabungan pertama dan kedua)

using namespace std;

int  main()
{
	ofstream myFile; //memanggil fungsi untuk: memanggil fungsi

	/* atribut pada fungsi ofstream/fstream
		ios::out merupakan atribut default dan untuk operasi output
		ios::app untuk menuliaskan pada akhir bari file ekstrenal
		ios::trunc merupakan atribut default dan untuk overwrite file(jika ..
		belum ada maka akan dibuatkan)
	*/

	myFile.open("File1.txt", ios::out);
	myFile << "menuliskan data pada File1.txt"; 
	myFile.close();

	myFile.open("File2.txt", ios::trunc);
	myFile << "Overwrite data pada File2.txt"; 
	myFile.close();

	myFile.open("File3.txt", ios::app);
	myFile << "\nini adalah baris kedua!!"; 
	myFile.close();

	cin.get();
	return 0;
}

