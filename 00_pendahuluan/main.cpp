#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "\n:::::::CONVERT FAHRENHEIT TO CELCIUS:::::::\n";
	double fahrenheit; 
	double celcius;
	const double divider = 0.5555555556;

	cout << "Enter Fahrenheit: " << endl;

	cin >> fahrenheit; 
	celcius = (fahrenheit-32.0) * divider;

	cout << "in Celcius is " << celcius << endl;

	return 0;
}
