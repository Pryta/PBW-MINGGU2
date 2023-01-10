//judul
//program aritmatika
//25 sept 2022
//Pryta Yonifa Putri
//A11.2022.14360

//kamus
#include <iostream>
using namespace std;

int x, z, h;
string p;
//p	: pilihan
//x : variabel
//z : variabel
//h : hasil

//deskripsi
int main()
{
	cout<< "Program Aritmatika " << endl;
	cout<< "=====================================" << endl;
	cout<< "Pilih program perhitungan dibawah ini" << endl;
	cout<< "a. Perkalian" << endl;
	cout<< "b. Pembagian" << endl;
	cout<< "c. Pengurangan" << endl;
	cout<< "d. Penjumlahan" << endl;
	
	cout<< "Masukkan Pilihan" << endl;
	cin>> p;
	
	if (p=="a")
	{
		cout<< "Perkalian" << endl;
		cout<< "Masukkan bilangan "; cin>> x;
		cout<< "Masukkan bilangan "; cin>> z;
		
		h=x*z;
		
		cout<< "Hasil x dikali z : " << h << endl;
		
		if (h%2==0)
		{
			cout<< " Hasil dari perkalian x dan z merupakan bilangan genap " << endl;
		}
		else {
			cout<< " Hasil dari perkalian x dan z merupakan bilangan ganjil " << endl;
		}
	}
		if (p=="b")
	{
		cout<< "Pembagian" << endl;
		cout<< "Masukkan bilangan "; cin>> x;
		cout<< "Masukkan bilangan "; cin>> z;
		
		h=x/z;
		
		cout<< "Hasil x dibagi z : " << h << endl;
		
		if (h%2==0)
		{
			cout<< " Hasil dari pembagian x dan z merupakan bilangan genap " << endl;
		}
		else{
			cout<< " Hasil dari pembagian x dan z merupakan bilangan ganjil " << endl;
		}	
			
	}
		if (p=="c")
	{
		cout<< "Pengurangan" << endl;
		cout<< "Masukkan bilangan "; cin>> x;
		cout<< "Masukkan bilangan "; cin>> z;
		
		h=x-z;
		
		cout<< "Hasil x dikurangi z : " << h << endl;
		
		if (h%2==0)
		{
			cout<< " Hasil dari pengurangan x dan z merupakan bilangan genap " << endl;
		}
		else{
			cout<< " Hasil dari pengurangan x dan z merupakan bilangan ganjil " << endl;
		}
	}
		if (p=="d")
	{
		cout<< "Penjumlahan" << endl;
		cout<< "Masukkan bilangan "; cin>> x;
		cout<< "Masukkan bilangan "; cin>> z;
		
		h=x+z;
		
		cout<< "Hasil x ditambah z : " << h << endl;
		
		if (h%2==0)
		{
			cout<< " Hasil dari penjumlahan x dan z merupakan bilangan genap " << endl;
		}
		else{
			cout<< " Hasil dari penjumlahan x dan z merupakan bilangan ganjil " << endl;
		}
		
	}
	
	return 0;	
}

