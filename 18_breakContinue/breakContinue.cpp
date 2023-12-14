#include <iostream>

using namespace std;

int main(){

	for (int i = 1; i <= 10; ++i)
	{
		

		if(i == 5){		// control flow menggunakan continue; dan break;
			break;
			// continue;
		}
		cout << i << endl;
	}


	cout << "\nMENGGUNAKAN WHILE" << endl;

	int j=1;
	while(j<=10){

		if(j==5){
			// break;
			continue;
		}
		cout << j << endl;
		j++;
	}

	cout << "Akhir dari program" << endl;

	cin.get();
	return 0;
}