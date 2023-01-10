//judul : input a b c
#include <iostream>
using namespace std;

//kamus
float a, b, c, jml, jmlh;

//diskripsi
int main()
{
    cout << "Masukkan Nilai A : " << endl;
    cin >> a ;
    cout << "Masukkan Nilai B : " << endl;
    cin >> b ;
    cout << "Masukkan nilai C : " << endl;
    cin >> c;

    jmlh = a*b;
    cout << "Hasil A Kali B : " << jmlh;
    cout << endl;
    jml = a + (b * c);
    cout << "A+B*C adalah : " << jml << endl;

    if(jmlh > jml)
    {
        cout << "Maka Nilai terbesarnya adalah : " << jmlh << endl;
    }else if(jmlh < jml)
    {
        cout << "Maka nilai terbesarnya adalah : " << jml << endl;
    }
}
