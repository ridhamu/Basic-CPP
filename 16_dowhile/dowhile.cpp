#include <iostream>

using namespace std;

int main(){

	int a = 1;

	do{
		cout << "Loop ke-" << a << endl;
		++a;
	}while(a<=10);

	cin.get();
	return 0;
}
