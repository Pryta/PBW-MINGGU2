//judul
//program input output
//pryta yonifa putri
//19 sept 2022
//A11.2022.14360

#include <iostream>
using namespace std;

//kamus
string jeniskelamin, Nama, NIM ;


//deskripsi
int main()
{
	cout<<"----------------------------------------------------------------"<< endl;
	cout<<"HALO"<< endl;
	
	cout<<"masukkan nama anda"<< endl;
	getline (cin, Nama);
	
	cout<<"masukkan NIM anda"<< endl;
	getline (cin, NIM);
	
	
	cout<<"pilih jenis kelamin (l/p)"<< endl;
	cin>> jeniskelamin;
	
	if(jeniskelamin=="l") 
	{ 
		cout<<"jadi " << Nama <<  ", NIM " << NIM << " jenis kelamin anda adalah Laki-laki"<< endl;
	}
	
	else 
	if (jeniskelamin=="p")
	{
		cout<< "jadi " << Nama << ", NIM " << NIM << " jenis kelamin anda adalah Perempuan"<< endl;
	}
	
	cout<<"-----------------------------------------------------------------"<< endl;
	
	return 0;
}
