#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

typedef int i;
typedef string s; 
typedef float f;
typedef double d; 

template<typename T, typename U>
auto max(T x, U y){
	return (x > y) ? x : y;
}

int main(){

	i a = 123;
	d b = 123.5; 
	f c = 124.88f; 
	s d = "string";
	auto e = max(a, c);

	cout << a << "\t tipe: " << typeid(a).name() << endl;
	cout << b << "\t tipe: " << typeid(b).name() << endl;
	cout << c << "\t tipe: " << typeid(c).name() << endl;
	cout << d << "\t tipe: " << typeid(d).name() << endl;
	cout << e << "\t tipe: " << typeid(e).name() << endl;

	cin.get();
	return 0;
}