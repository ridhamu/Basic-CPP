//menambahkan guard, untuk mencegah redifinisi dari data dari bersama.h
// #ifndef _BERSAMA
// #define _BERSAMA

//menambahkan pragma once
#pragma once
#define FOO "ini adalah foo dalam bersama.h"
struct Mahasiswa {
	int nim;
};

// #endif