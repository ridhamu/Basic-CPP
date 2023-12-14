//PREPROCESSING DIRECTIVE

#include <iostream>

#define PI 3.14159
#define BAHASA "indonesia"
#define KUADRAT(x) (x*x)
#define MAX(x, y) (x > y ? x:y)

// AKHIR DARI PREPROCESSING DIRECTIVE

using namespace std;

int main(){

	cout << "        nilai PI : " << PI << endl;
	cout << "          bahasa : " << BAHASA << endl;
	cout << "   kuadrat dari"<< 4 <<  " : " << KUADRAT(5) << endl;
	cout << "max dari " << 5 << " dan " << 3 << " : " << MAX(3, 5) << endl;

	#undef BAHASA
	#define BAHASA "inggris"
	cout << "          bahasa : " << BAHASA << endl;



	cin.get();
	return 0;
}
