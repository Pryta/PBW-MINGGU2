//judul
//prodi simulator
//pryta yonifa putri
//A11.2022.14360
//6 okt 2022

#include <iostream>
using namespace std;

//kamus
int ak,dg,thn,kodepro;
char NIM;
//ak: angka
//dg:digit
//thn:tahun
//kodepro:kodeprodi

//deskripsi
int main()
{
	cout<<"Deteksi prodi"<< endl;
	cout<<"-----------------------------"<< endl;
	cout<<"Silahkan Masukkan Kode Prodi "<< endl;
	cout<<"1. A11"<< endl;
	cout<<"2. A21"<< endl;
	cout<<"3. B11"<< endl;
	cout<<"4. B21"<< endl;
	
	cout<<"Pilih kode prodi anda";cin>>kodepro;
	
	if (kodepro==1)
	{
		cout<<"Kode prodi			: A11"<< endl;
		cout<<"Masukkan tahun mulai aktif menjadi mahasiswa UDINUS"<< endl;
		cin>>thn;
		cout<<"Masukkan 5 digit terakhir NIM anda"<< endl;
		cin>>dg;
		cout<<"Anda adalah mahasiswa UDINUS "<< endl;
		cout<<"prodi Teknik Informatika dengan NIM"<< endl;
		cout<<"---"<< "A11"<<"."<<thn<<"."<<dg<<"---"<< endl;
	}
	
		if (kodepro==2)
	{
		cout<<"Kode prodi			: A21"<< endl;
		cout<<"Masukkan tahun mulai aktif menjadi mahasiswa UDINUS"<< endl;
		cin>>thn;
		cout<<"Masukkan 5 digit terakhir NIM anda"<< endl;
		cin>>dg;
		cout<<"Anda adalah mahasiswa UDINUS "<< endl;
		cout<<"prodi Sistem Informasi dengan NIM"<< endl;
		cout<<"---"<< "A21"<<"."<<thn<<"."<<dg<<"---"<< endl;
	}
	
		if (kodepro==3)
	{
		cout<<"Kode prodi			: B11"<< endl;
		cout<<"Masukkan tahun mulai aktif menjadi mahasiswa UDINUS"<< endl;
		cin>>thn;
		cout<<"Masukkan 5 digit terakhir NIM anda"<< endl;
		cin>>dg;
		cout<<"Anda adalah mahasiswa UDINUS "<< endl;
		cout<<"prodi Manajemen dengan NIM"<< endl;
		cout<<"---"<< "B11"<<"."<<thn<<"."<<dg<<"---"<< endl;
	}
	
		if (kodepro==4)
	{
		cout<<"Kode prodi			: B21"<< endl;
		cout<<"Masukkan tahun mulai aktif menjadi mahasiswa UDINUS"<< endl;
		cin>>thn;
		cout<<"Masukkan 5 digit terakhir NIM anda"<< endl;
		cin>>dg;
		cout<<"Anda adalah mahasiswa UDINUS "<< endl;
		cout<<"prodi Akutansi dengan NIM"<< endl;
		cout<<"---"<< "B21"<<"."<<thn<<"."<<dg<<"---"<< endl;
	}
	 return 0;
}
