#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a = 2;
	int b = 2;
	bool hasil1, hasil2;

	// komparasi sebanding (==)
	hasil1 = a == b;
	// komparasi tidak sebanding (!=)
	hasil2 = a != b;


	// komparasi lebih dari (>)
	hasil1 = a > b;
	// komparasi kurang dari (<)
	hasil2 = a < b; 

	cout << hasil1 << endl;
	cout << hasil2 << endl;

	cin.get();
	return 0;
}
