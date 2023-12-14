#include <iostream>

using namespace std;

int main(){
	int a = 1;

	while(a <= 10){
		cout << "ini looping ke-"<< a << " dengan increment a++" << endl;
		++a;
	}

	cout << "program selesai" << endl;

	cin.get();
	return 0;
}
