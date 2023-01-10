//judul : array
#include <iostream>
using namespace std;

//kamus
int a, cari;
int data[7];

//diskripsi
int main()
{
//    int data[7] ={11, 2, 3, 12, 13, 14, 19};
//    while (a < 7)
//    {
//        cout << data[a] << " " ;
//        a = a + 1;
//    }
    a =1;
    while(a < 8)
    {
        cout << "Masukkan data : " ; cin >> data[a];
        a = a + 1;
    }
    cout << "Mau cari apa ? " ; cin >> cari;
    a = 1;
    while(a < 8)
    {
        if (data[a] == cari)
        {
            cout << "NIII KETEMU YAAA " << cari << " Di sini yaa : " << a;
        }
        a = a + 1;
    }
    return 0;
}
