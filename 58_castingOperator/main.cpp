#include <iostream>

using namespace std;

int main(){

	int a = 6;
	float b = 5.67; 
	char c = 'c'; 

	//implisit casting--> dilakukan oleh compiler dibalik layar tanpa perlu code tambahan
	cout << a + b << " (implisit casting)" << endl;

	//explisit casting(memerlukan penuliasn operator)
	cout << a + (int)b<< " (explisit casting)" << endl;

	cout << (char)(a + c) << endl;


	cin.get();
	return 0;
}
