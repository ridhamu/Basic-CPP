#include <iostream>
#include <exception>
// #include <array>



using namespace std;

/*
	1. syntax error
	2. linking error
	3. non-error
	3. runtime error --> try and catch method
*/

int bagi(int &num, int &denum){

	if(denum == 0){
		throw overflow_error("error: pembagi nol");
		// throw "error: pembagi nol"; 
	}

	return num/denum; 
}

int main(){

	int a, b, c;

	cout << "Masukkan nilai bagi: "; 
	cin >> a; 
	cout << "Masukkan nilai pembagi: ";
	cin >> b; 


	try{
		c = bagi(a, b);
		cout << c << endl;
	}catch(exception &e){
		cout <<"=== " << e.what() << " ===" <<  endl;
	}


	// EXCEPTION FOR ARRAY ERROR
	// array<int , 5> num = {0, 1, 2, 3, 4};
	// try{
	// 	cout << num.at(5) << endl;
	// }catch(exception &e){
	// 	cout << e.what() << endl;
	// }


	//MANUAL EXCEPTION 
	// try{
	// 	c = bagi(a, b);
	// 	cout << c << endl;
	// }catch(const char *e){
	// 	cout << "=== " << e << " ===" << endl;
	// }


	cin.get();
	return 0;
}


