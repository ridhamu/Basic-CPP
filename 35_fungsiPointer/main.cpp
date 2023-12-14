#include <iostream>

using namespace std;


void fungsi(int *);
void power(int *);

int main(){

	int a = 5; 

	cout << " nilai dari a: " << a << endl;
	cout << "addres dari a: " << &a <<endl << endl;

	fungsi(&a);
	power(&a);

	cout << "Nilai kuadart dari a: " << a << endl;

	cout << "\nAKHIR DARI PROGRAM"<< endl;
	cin.get();
	return 0;
}

void fungsi (int *b){
	cout << " nilai dari b: " << *b << endl; //dereference
	cout << "addres dari a: " << b <<endl << endl;
}

void power(int *valPtr){
	*valPtr *= *valPtr;
}
