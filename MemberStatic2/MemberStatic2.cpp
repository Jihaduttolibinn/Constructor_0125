#include <iostream>
#include <string>
using namespace std;


class mahasiswa {
private:
	long long static int nim;
	static int nim;
public:
	long long static int id;
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
		
	{
		nama = pnama;
		setID();
	}

};

int mahasiswa::nim = 20230140125;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;



}

int main() {
	mahasiswa mhs1("Pep guardiola");
	mahasiswa mhs2("Ruben Dias");
	mahasiswa::setNim(9);
	mahasiswa mhs3("Foden");
	mahasiswa mhs4("Messi");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;


	return 0;
}