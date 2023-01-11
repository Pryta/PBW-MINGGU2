//judul
//input krs
//pryta yonifa putri
//A11.2022.14360
//12 okt 2022

#include <iostream>
using namespace std;

//kamus
string nama, prodi, nim, jn, tp, pd, matkul1, matkul2, matkul3, matkul4, matkul5, matkul6, matkul7;
float pnt1, nt1, pnu1, nu1, pnuas1, nuas1, pnt2, nt2, pnu2, nu2, pnuas2, nuas2, pnt3, nt3, pnu3, nu3, pnuas3, nuas3, pnt4, nt4, pnu4, nu4, pnuas4, nuas4, pnt5, nt5, pnu5, nu5, pnuas5, nuas5;
float pnt6, nt6, pnu6, nu6, pnuas6, nuas6, pnt7, nt7, pnu7, nu7, pnuas7, nuas7;
float nl1, nl2, nl3, nl4, nl5, nl6, nl7, na;
int sks1, sks2, sks3, sks4, sks5, sks6, sks7 ;
//jn:jenis
//pd:prodi
//tp: teori/praktik
//pnt:presentase nilai tugas7
//nt: nilai tugas
//pnu: presentase nilai uts
//nu:nilai uts
//pnuas: presentase nilai uas
//nuas: nilai uas
//na:nilai akhir

//deskripsi
int main()
{
	cout<<"--------------------------------------------------------------------------------"<< endl;
	cout<<"			        KARTU RENCANA STUDI 										"<< endl;
	cout<<"			   UNIVERSITAS DIAN NUSWANTORO 								"<< endl;
	cout<<"--------------------------------------------------------------------------------"<< endl;
	
	cout<<"Nama\t:"; getline(cin, nama);
	cout<<"NIM\t:"; getline (cin, nim);
	cout<<"Prodi\t:"; getline (cin, pd);
	cout<< endl;
	
	cout<<"Mata Kuliah ke-1 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul1);
	cout<<"SKS				:"; cin>> sks1;
	cout<<"T/P (teori/praktik)		:"; cin>> tp;
	
	do{	
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt1;
		cout<<"Nilai Tugas			:"; cin >> nt1;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu1;
		cout<<"Nilai UTS			:"; cin >> nu1;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas1;
		cout<<"Nilai UAS			:"; cin >> nuas1;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt1;
		cout<<"Nilai Tugas				:"; cin >> nt1;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu1;
		cout<<"Nilai UTS				:"; cin >> nu1;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas1;
		cout<<"Nilai UAS				:"; cin >> nuas1;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt1;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt1;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu1;
		cout<<"Nilai UTS (teori)				:"; cin >> nu1;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas1;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas1;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt1;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt1;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu1;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu1;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas1;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas1;
	}
	if (pnt1+pnu1+pnuas1 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt1+pnu1+pnuas1 !=100);
	cout << endl;
	
	cout<<"Mata Kuliah ke-2 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul2);
	cout<<"SKS				:"; cin>> sks2;
	cout<<"T/P (teori/praktik)	:"; cin>> tp;
	
	do{
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt2;
		cout<<"Nilai Tugas				:"; cin >> nt2;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu2;
		cout<<"Nilai UTS				:"; cin >> nu2;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas2;
		cout<<"Nilai UAS				:"; cin >> nuas2;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt2;
		cout<<"Nilai Tugas				:"; cin >> nt2;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu2;
		cout<<"Nilai UTS				:"; cin >> nu2;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas2;
		cout<<"Nilai UAS				:"; cin >> nuas2;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt2;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt2;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu2;
		cout<<"Nilai UTS (teori)				:"; cin >> nu2;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas2;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas2;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt2;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt2;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu2;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu2;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas2;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas2;
	}
	if (pnt2+pnu2+pnuas2 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt2+pnu2+pnuas2 !=100);
	cout << endl;
	
	cout<<"Mata Kuliah ke-3 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul3);
	cout<<"SKS				:"; cin>> sks3;
	cout<<"T/P (teori/praktik)	:"; cin>> tp;
	
	do{
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt3;
		cout<<"Nilai Tugas				:"; cin >> nt3;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu3;
		cout<<"Nilai UTS				:"; cin >> nu3;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas3;
		cout<<"Nilai UAS				:"; cin >> nuas3;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt3;
		cout<<"Nilai Tugas				:"; cin >> nt3;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu3;
		cout<<"Nilai UTS				:"; cin >> nu3;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas3;
		cout<<"Nilai UAS				:"; cin >> nuas3;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt3;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt3;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu3;
		cout<<"Nilai UTS (teori)				:"; cin >> nu3;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas3;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas3;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt3;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt3;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu3;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu3;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas3;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas3;
	}
	if (pnt3+pnu3+pnuas3 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt3+pnu3+pnuas3 !=100);
	cout << endl;
	
	
	cout<<"Mata Kuliah ke-4 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul4);
	cout<<"SKS				:"; cin>> sks4;
	cout<<"T/P (teori/praktik)	:"; cin>> tp;
	
	do{
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt4;
		cout<<"Nilai Tugas				:"; cin >> nt4;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu4;
		cout<<"Nilai UTS				:"; cin >> nu4;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas4;
		cout<<"Nilai UAS				:"; cin >> nuas4;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt4;
		cout<<"Nilai Tugas				:"; cin >> nt4;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu4;
		cout<<"Nilai UTS				:"; cin >> nu4;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas4;
		cout<<"Nilai UAS				:"; cin >> nuas4;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt4;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt4;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu4;
		cout<<"Nilai UTS (teori)				:"; cin >> nu4;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas4;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas4;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt4;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt4;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu4;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu4;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas4;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas4;
	}
	if (pnt4+pnu4+pnuas4 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt4+pnu4+pnuas4 !=100);
	cout << endl;
	
	
	cout<<"Mata Kuliah ke-5 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul5);
	cout<<"SKS				:"; cin>> sks5;
	cout<<"T/P (teori/praktik)	:"; cin>> tp;
	
	do{
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt5;
		cout<<"Nilai Tugas				:"; cin >> nt5;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu5;
		cout<<"Nilai UTS				:"; cin >> nu5;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas5;
		cout<<"Nilai UAS				:"; cin >> nuas5;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt5;
		cout<<"Nilai Tugas				:"; cin >> nt5;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu5;
		cout<<"Nilai UTS				:"; cin >> nu5;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas5;
		cout<<"Nilai UAS				:"; cin >> nuas5;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt5;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt5;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu5;
		cout<<"Nilai UTS (teori)				:"; cin >> nu5;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas5;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas5;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt5;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt5;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu5;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu5;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas5;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas5;
	}
	if (pnt5+pnu5+pnuas5 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt5+pnu5+pnuas5 !=100);
	cout << endl;
	
	cout<<"Mata Kuliah ke-6 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul6);
	cout<<"SKS				:"; cin>> sks6;
	cout<<"T/P (teori/praktik)	:"; cin>> tp;
	
	do{
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt6;
		cout<<"Nilai Tugas				:"; cin >> nt6;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu6;
		cout<<"Nilai UTS				:"; cin >> nu6;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas6;
		cout<<"Nilai UAS				:"; cin >> nuas6;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt6;
		cout<<"Nilai Tugas				:"; cin >> nt6;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu6;
		cout<<"Nilai UTS				:"; cin >> nu6;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas6;
		cout<<"Nilai UAS				:"; cin >> nuas6;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt6;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt6;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu6;
		cout<<"Nilai UTS (teori)				:"; cin >> nu6;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas6;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas6;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt6;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt6;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu6;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu6;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas6;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas6;
	}
	if (pnt6+pnu6+pnuas6 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt6+pnu6+pnuas6 !=100);
	cout << endl;
	
	cout<<"Mata Kuliah ke-7 "<< endl;
	cout<<"Nama Mata Kuliah		:"; getline (cin, matkul7);
	cout<<"SKS				:"; cin>> sks7;
	cout<<"T/P (teori/praktik)	:"; cin>> tp;
	
	do{
	if(jn=="T" || jn== "t")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt7;
		cout<<"Nilai Tugas				:"; cin >> nt7;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu7;
		cout<<"Nilai UTS				:"; cin >> nu7;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas7;
		cout<<"Nilai UAS				:"; cin >> nuas7;
	}
	else
	if (jn=="P" || jn=="p")
	{
		cout<<"Presentase Nilai Tugas	:"; cin >> pnt7;
		cout<<"Nilai Tugas				:"; cin >> nt7;
		cout<<"Presentasi Nilai UTS		:"; cin >> pnu7;
		cout<<"Nilai UTS				:"; cin >> nu7;
		cout<<"Presentase Nilai UAS		:"; cin >> pnuas7;
		cout<<"Nilai UAS				:"; cin >> nuas7;
	}
	else
	{
		cout<<"Presentase Nilai Tugas (teori)	:"; cin >> pnt7;
		cout<<"Nilai Tugas (teori)				:"; cin >> nt7;
		cout<<"Presentasi Nilai UTS (teori)		:"; cin >> pnu7;
		cout<<"Nilai UTS (teori)				:"; cin >> nu7;
		cout<<"Presentase Nilai UAS (teori)		:"; cin >> pnuas7;
		cout<<"Nilai UAS (teori)				:"; cin >> nuas7;
		cout<< endl;
		cout<<"Presentase Nilai Tugas (praktik)		:"; cin >> pnt7;
		cout<<"Nilai Tugas (praktik)				:"; cin >> nt7;
		cout<<"Presentasi Nilai UTS (praktik)		:"; cin >> pnu7;
		cout<<"Nilai UTS (praktik)					:"; cin >> nu7;
		cout<<"Presentase Nilai UAS (praktik)		:"; cin >> pnuas7;
		cout<<"Nilai UAS (praktik)					:"; cin >> nuas7;
	}
	if (pnt7+pnu7+pnuas7 !=100); {
		cout<< "Input presentase salah"<< endl;
		cout<< "Masukkan ulang inputan"<< endl;
		}
	}while (pnt7+pnu7+pnuas7 !=100);
	cout << endl;
	
	cout<<"--------------------------------------------------------------------------------"<< endl;
	cout<<"			        KARTU HASIL STUDI 										"<< endl;
	cout<<"			   UNIVERSITAS DIAN NUSWANTORO 								"<< endl;
	cout<<"--------------------------------------------------------------------------------"<< endl;
	
	cout<<"Nama		:"<< nama << endl;
	cout<<"NIM		:"<< nim << endl;
	cout<<"Prodi	:"<< pd << endl;
	
	cout<<"Nama Mata Kuliah			:"<< matkul1 << endl;
	nl1 = ((nt1*pnt1/100)+(nu1*pnu1/100)+(nuas1*pnuas1/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl1 << endl;
	
	cout<<"Nama Mata Kuliah			:"<< matkul2 << endl;
	nl2 = ((nt2*pnt2/100)+(nu2*pnu2/100)+(nuas2*pnuas2/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl2 << endl;

	cout<<"Nama Mata Kuliah			:"<< matkul3 << endl;
	nl3 = ((nt3*pnt3/100)+(nu3*pnu3/100)+(nuas3*pnuas3/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl3 << endl;
	
	cout<<"Nama Mata Kuliah			:"<< matkul4 << endl;
	nl4 = ((nt4*pnt4/100)+(nu4*pnu4/100)+(nuas4*pnuas4/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl4 << endl;
	
	cout<<"Nama Mata Kuliah			:"<< matkul5 << endl;
	nl5 = ((nt5*pnt5/100)+(nu5*pnu5/100)+(nuas5*pnuas5/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl5 << endl;
	
	cout<<"Nama Mata Kuliah			:"<< matkul6 << endl;
	nl6 = ((nt6*pnt6/100)+(nu6*pnu6/100)+(nuas6*pnuas6/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl6 << endl;
	
	cout<<"Nama Mata Kuliah			:"<< matkul7 << endl;
	nl7 = ((nt7*pnt7/100)+(nu7*pnu7/100)+(nuas7*pnuas7/100));
	cout<<"Nilai Akhir Mata Kuliah	:"<< nl7 << endl;
	
	cout<<"Nilai Akhir				:"<< na << endl;
	
	return 0; 

}
