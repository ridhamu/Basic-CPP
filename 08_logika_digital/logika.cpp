#include <iostream>

using namespace std;

int main(){

	int a = 3; 
	int b = 2;
	bool hasil;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// Logika not, and & or 

	//logka basic yang bernilai benar
	cout << "\nLogika basic" << endl;
	hasil = (a==3);
	cout << hasil << endl;

	//logi not(!): bernilai true jika nilai salah dan sebaliknya
	cout << "\nLogika NOT(!)" << endl;
	hasil = !(b==2);
	cout << hasil << endl;

	//logika and(&&): bernilai true jika kedua buah nilai bernilai benar
	cout << "\nLogika AND(&&)" << endl;
	cout << "hasil = (a==3) and (b==2);" << endl;
	hasil = (a==3) and (b==2); // benar dan salah
	cout << hasil << endl;
	cout << "hasil = (a==3) and (b==3);" << endl;
	hasil = (a==3) and (b==3); // benar dan salah
	cout << hasil << endl;
	cout << "hasil = (a==2) and (b==2);" << endl;
	hasil = (a==2) && (b==2); // salah dan benar
	cout << hasil << endl;
	cout << "hasil = (a==1) and (b==1);" << endl;
	hasil = (a==1) && (b==1); // salah dan salah
	cout << hasil << endl;


	/*logika or(||): bernilai true jika salah satu nilai bernilai benar 
					 hanya butuh satu nilai benar;
	*/
	cout << "\nLogika OR(&&)" << endl;
	cout << "hasil = (a==3) or (b==2);" << endl;
	hasil = (a==3) or (b==2); // benar dan salah
	cout << hasil << endl;
	cout << "hasil = (a==3) or (b==3);" << endl;
	hasil = (a==3) or (b==3); // benar dan salah
	cout << hasil << endl;
	cout << "hasil = (a==2) || (b==2);" << endl;
	hasil = (a==2) || (b==2); // salah dan benar
	cout << hasil << endl;
	cout << "hasil = (a==1) || (b==1);" << endl;
	hasil = (a==1) || (b==1); // salah dan salah
	cout << hasil << endl;


	cin.get();
	return 0;
}
