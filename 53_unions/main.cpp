#include <iostream>

using namespace std;


union nama {
	int int_value;
	char char_value[4];
};

int main(){

	nama data_1;

	data_1.int_value = 123456;

	cout << "value dalam bentuk integer: " << data_1.int_value << endl;
	cout << "value dalam bentuk array char: " << data_1.char_value << endl;


	cin.get();
	return 0;
}
