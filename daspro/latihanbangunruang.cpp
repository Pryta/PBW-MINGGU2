//judul
//menghitung bangun ruang
//pryta yonifa putri
//A11.2022.14360
//9 sept 2022

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//kamus
float v, lp, p, l, t, s, r, phi, gp;
int br;
string a, b, c, d, e;
//v : volume
//lp: luas permukaan
//p : panjang
//l : lebar
//t : tinggi
//r : jari-jari
//s : sisi
//gp: garis pelukis
//br: bangun ruang
//phi: 3.14

//deskripsi
int main()
{
	cout << "Menghitung volume & luas permukaan bangun ruang" << endl << endl;

    cout << "Bangun ruang" << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Tabung" << endl;
    cout << "4. Bola" << endl;
    cout << "5. Kerucut" << endl << endl;

    cout << "Pilih bangun ruang yang ingin dihitung : ";
	cin >> br;

	if (br==1) {
        cout << "Bangun Ruang           : Kubus" << endl;
        cout << "Masukkan nilai sisi    : ";
		cin >> s;

        v=s*s*s;
        lp=s*s*6;

        cout << "OUTPUT" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Sisi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << setw(15) << "Kubus" << setw(15) << s << setw(15) << v << setw(25) << lp << endl;
    }
	if (br==2)
	{
    	cout << "Bangun Ruang           : Balok" << endl;
        cout << "Masukkan nilai panjang : "; 
		cin >> p;
        cout << "Masukkan nilai lebar   : "; 
		cin >> l;
        cout << "Masukkan nilai tinggi  : "; 
		cin >> t;

        v=p*l*t;
        lp=(p*l+l*t+p*t)*2;

        cout << "OUTPUT" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Panjang (cm)" << setw(15) << "Lebar (cm)" << setw(15) << "Tinggi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << setw(15) << "Balok" << setw(15) << p << setw(15) << l << setw(15) << t << setw(15) << v << setw(25) << lp << endl;
    }    
     if (br==3) 
	 {
        cout << "Bangun Ruang               : Tabung" << endl;
        cout << "Masukkan nilai jari-jari   : "; cin >> r;
        cout << "Masukkan nilai tinggi      : "; cin >> t;

        phi=3.14;
        v=phi*r*r*t;
        lp=phi*r*2*t;
        
        cout << "OUTPUT" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Jari-jari (cm)" << setw(15) << "Tinggi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << setw(15) << "Tabung" << setw(15) << r << setw(15) << t << setw(15) << v << setw(25) << lp << endl;
	}
	if (br==4) 
	{
        cout << "Bangun Ruang               : Bola" << endl;
        cout << "Masukkan nilai jari-jari   : "; cin >> r;

        phi=3.14;
        v=(4*phi*r*r*r)/3;
        lp=4*phi*r*r;

        cout << "OUTPUT" << endl << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Jari-jari (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << setw(15) << "Bola" << setw(15) << r << setw(15) << v << setw(25) << lp << endl;
    }
    if (br==5) 
	{
        cout << "Bangun Ruang               : Bola" << endl;
        cout << "Masukkan nilai jari-jari   : "; cin >> r;

        phi=3.14;
        v=(4*phi*r*r*r)/3;
        lp=4*phi*r*r;

        cout << "OUTPUT" << endl << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Jari-jari (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << setw(15) << "Bola" << setw(15) << r << setw(15) << v << setw(25) << lp << endl;
    }
}

