#include <iostream>

using namespace std;


int x = 10;

int aksesVariabelGlobal(){
	return x; 
}

int aksesVariabelLokal(){
	int x = 9; 
	return x;
}



int main(){

	cout << "\n1. variabel global: " << x << endl;
	int x = 8; // variabel lokal (main function)

	cout << "2. variabel local(main): " << x << endl;
	cout << "3. variabel global: " << aksesVariabelGlobal() << endl;
	cout << "4. variabel local(main): " << x << endl;
	cout << "5. variabel fungsi local: " << aksesVariabelLokal() << endl;
	cout << "6. variabel global (menggunakan resolution operator :: ): "<< ::x <<endl;
	cout << "7. variabel local(main): " << x << endl;
	{
		cout << "8. variabel local dalam block{}: " << x << endl;
		int x = 7; 
		cout << "9. variabel block: "<< x << endl;
		cout << "10. variabel fungsi local dalam block: " << aksesVariabelLokal() << endl;
		cout << "11. variabel global dengan fungsi: " << aksesVariabelGlobal() << endl;
		cout << "12. variabel global dengan resolution operator: " << ::x << endl;
	}
	cout << "13. variabel local(main): " << x << endl;

	cout << "\nAKHIR DARI PROGRAM" << endl;
	cin.get();
	return 0;
}
