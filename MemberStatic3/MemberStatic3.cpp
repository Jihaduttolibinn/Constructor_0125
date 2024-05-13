#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{

public:
	int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 20230140125;
		nama = "Manchester City";

	};
	Mahasiswa(int inim) {
		nim = inim;
	}
};

Mahasiswa::Mahasiswa(int iNim)
{
	nim = iNim;
}
Mahasiswa::Mahasiswa(string iNama)
{
	nama = iNama;
}
Mahasiswa::Mahasiswa(int iNim, string iNama)
{
	nim = iNim;
	nama = iNama;
}
 
