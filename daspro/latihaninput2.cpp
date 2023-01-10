// judul
//pryta yonifs putri
//19 sept 2022

#include <iostream>
using namespace std;

//kamus
string jeniskelamin, nama;

//deskripsi
int main()
{
	cout<< "masukkan nama"; 
	cin>> nama;
	cout<< "oh jadi kamu si " << nama << " too, gimana kabarnya?" << endl;
	cout<< "pilih jenis kelamin (l/p)" << endl;
	cin>> jeniskelamin;
		if (jeniskelamin=="l")
		{
			cout<< "oke jadi jenis kelamin: "  <<  nama  <<  " laki laki" << endl;	
		}
		else if (jeniskelamin=="p")
		{
			cout<< "oke jadi jenis kelamin: "  <<  nama  <<  " perempuan" << endl;
		}
		
	return 0;
}
