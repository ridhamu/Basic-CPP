//PREPROCESSING DIRECTIVE
#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"



// #define FOO 
//ifdef
// #ifdef FOO
// #define FOO_CHECK "foo ada!"
// #else
// #define FOO_CHECK "foo tidak ada!"
// #endif


//ifndef
// #ifndef FOO
// #define FOO_EXIST "foo tidak ada(#ifndef)"
// #endif


//pragma once

 
//AKHIR DARI PREPROCESSING DIRECTIVE

using namespace std;


int main(){
	Mahasiswa mahasiswa; 
	mahasiswa.nim = 10;
	cout << FOO << endl;
	cout << mahasiswa.nim << endl;
	cin.get();
	return 0;
}
