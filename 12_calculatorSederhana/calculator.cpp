#include <iostream>

using namespace std;

int main(){

	cout << "======KALKULATOR SEDERHANA======\n" << endl;
	float a, b, hasil;
	char aritmatika;

	//mengampil input dari user
	cout << "Masukkan nilai a: ";
	cin >> a; 
	cout << "Masukkan operator(+, -, *, /): ";
	cin >> aritmatika;
	cout << "Masukkan nilai b: ";
	cin >> b;

	
	//switch case

	switch(aritmatika) {
		case '+': 
			hasil = a + b;
			cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
			cout << hasil;
			break;
		case '-': 
			hasil = a - b;
			cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
			cout << hasil;
			break;
		case '*':
			hasil = a * b;
			cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
			cout << hasil;
			break;
		case '/':
			hasil = a / b;
			cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
			cout << hasil;
			break;
		default: 
			cout << "!!!!!OPERATOR YANG ANDA MASUKKAN SALAH!!!!!" ;

	}




	//if else statement
	
	if(aritmatika == '+'){
		hasil = a + b;
		cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
		cout << hasil;
	}else if(aritmatika == '-'){
		hasil = a - b;
		cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
		cout << hasil;
	}else if(aritmatika == '*'){
		hasil = a * b;
		cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
		cout << hasil;
	}else if(aritmatika == '/'){
		hasil = a / b;
		cout << "HASIL DARI " << a << " " << aritmatika << " " << b << " = ";
		cout << hasil;
	}else{
		cout << "!!!!!OPERATOR YANG ANDA MASUKKAN SALAH!!!!!" ;
	}

	return 0;
}
