//judul
//10 okt 2022
#include <iostream>
using namespace std;

//kamus
char ksusu, kukuran;
int jb, hs, jmlpemb, pjk, totpemb;\
float po;
string kosusu, koukuran;

//deskripsi
int main()
{
    cout << "PROGRAM PENJUALAN SUSU \n";
    cout << "Masukkan kode susu [1/2/3]     : "; cin >> ksusu;
    cout << "Masukkan kode ukuran [S/M/L]   : "; cin >> kukuran;
    cout << "Masukkan jumlah beli           : "; cin >> jb;

    if (ksusu == '1')
    {
        kosusu = "Indomilk ";
        if (kukuran == 'S'|| kukuran == 's')
        {
            koukuran = "Small ";
            hs = 5000;
        }
        else if (kukuran == 'M'|| kukuran == 'm')
        {
            koukuran = "Medium ";
            hs = 7500;
        }
        else if (kukuran == 'L'|| kukuran == 'l')
        {
            koukuran = "Large ";
            hs = 9500;
        }
        else
        {
            cout << "kode ukuran salah \n";
        }
    }
    else if (ksusu == '2')
    {
        kosusu = "Dancow";
        if (kukuran == 'S'|| kukuran == 's')
        {
            koukuran = "Small ";
            hs = 5000;
        }
        else if (kukuran == 'M'|| kukuran == 'm')
        {
            koukuran = "Medium ";
            hs = 7500;
        }
        else if (kukuran == 'L'|| kukuran == 'l')
        {
            koukuran = "Large ";
            hs = 9500;
        }
        else
        {
            cout << "kode ukuran salah \n";
        }
    }
    else if (ksusu == '3')
    {
        kosusu = "Sustagen";
        if (kukuran == 'S'|| kukuran == 's')
        {
            koukuran = "Small ";
            hs = 5000;
        }
        else if (kukuran == 'M'|| kukuran == 'm')
        {
            koukuran = "Medium ";
            hs = 7500;
        }
        else if (kukuran == 'L'|| kukuran == 'l')
        {
            koukuran = "Large ";
            hs = 9500;
        }
        else
        {
            cout << "kode ukuran salah \n";
        }
    }
    else
    {
        cout << "kode salah ";
    }

    if (jb < 25)
    {

    }

    cout << "STRUK PEMBAYARAN \n";
    cout << "Merk Barang        : " << kosusu << endl;
    cout << "Jenis Ukuran       : " << koukuran << endl;
    cout << "Jumlah Beli        : " << jb << endl;
    cout << "Harga Barang       : Rp " << hs << endl;
    cout << "Jumlah Pembayaran  : Rp " << jmlpemb << endl;
    cout << "Potongan           : Rp " << po << endl;
    cout << "Pajak              : Rp " << pjk << endl;
    cout << "Total Pembayaran   : Rp " << totpemb << endl;
return 0;
}
