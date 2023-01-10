//judul
//struk belanja susu
//pryta yonifa putri
//23 okt 2022

#include <iostream>
//kamus
char us;
int ks, jb, jp, hb;
float ptng, pjk, tp;

//deskripsi
main ()
{
    cout << "PROGRAM PENJUALAN SUSU" << endl << endl;
    cout << "Masukkan Kode Susu [1/2/3]     : "; cin >> ks;
    cout << "Masukkan Ukuran Susu [S/M/L]   : "; cin >> us;
    cout << "Masukkan Jumlah Beli           : "; cin >> jb;
    cout << endl << endl;

    cout << "STRUK PEMBAYARAN" << endl << endl;

    switch (ks)
    {
    case 1:
        {
            cout << "Merk Barang        : Susu Indomilk" << endl;
            switch (toupper(us))
            {
            case 'S':
                {
                    cout << "Jenis Ukuran       : Small" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 5000" << endl;
                    hb=5000;
                    break;
                }
            case 'M':
                {
                    cout << "Jenis Ukuran       : Medium" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 7500" << endl;
                    hb=7500;
                    break;
                }
            case 'L':
                {
                    cout << "Jenis Ukuran       : Large" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 9500" << endl;
                    hb=9500;
                    break;
                }
            default:
                {
                    cout << "INPUT SALAH";
                    break;
                }
            }
            break;
        }
    case 2:
        {
            cout << "Merk Barang        : Susu Dancow" << endl;
            switch (toupper(us))
            {
            case 'S':
                {
                    cout << "Jenis Ukuran       : Small" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 4500" << endl;
                    hb=4500;
                    break;
                }
            case 'M':
                {
                    cout << "Jenis Ukuran       : Medium" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 6500" << endl;
                    hb=6500;
                    break;
                }
            case 'L':
                {
                    cout << "Jenis Ukuran       : Large" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 8500" << endl;
                    hb=8500;
                    break;
                }
            default:
                {
                    cout << "INPUT SALAH";
                    break;
                }
            }
            break;
        }
    case 3:
        {
            cout << "Merk Barang        : Susu Sustagen" << endl;
            switch (toupper(us))
            {
            case 'S':
                {
                    cout << "Jenis Ukuran       : Small" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 9500" << endl;
                    hb=9500;
                    break;
                }
            case 'M':
                {
                    cout << "Jenis Ukuran       : Medium" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 15500" << endl;
                    hb=15500;
                    break;
                }
            case 'L':
                {
                    cout << "Jenis Ukuran       : Large" << endl;
                    cout << "Jumlah Beli        : " << jb << endl;
                    cout << "Harga Barang       : Rp 19500" << endl;
                    hb=19500;
                    break;
                }
            default:
                {
                    cout << "INPUT SALAH";
                    break;
                }
            }
            break;
        }
    default:
        {
            cout << "INPUT SALAH";
            break;
        }
    }

    jp=jb*hb;
    cout << "Jumlah Pembayaran  : Rp " << jp << endl;
    if (jb>25)
    {
        ptng=jp/100*5;
        cout << "Potongan           : Rp " << ptng << endl;
        pjk=jp/100*10;
        cout << "Pajak              : Rp " << pjk << endl;
        tp=jp+pjk-ptng;
        cout << "Total Pembayaran   : Rp " << tp << endl;
    }
    else
    {
        cout << "Potongan           : Rp -" << endl;
        pjk=jp/100*10;
        cout << "Pajak              : Rp " << pjk << endl;
        tp=jp+pjk;
        cout << "Total Pembayaran   : Rp " << tp << endl;
    }
    return 0;
}
