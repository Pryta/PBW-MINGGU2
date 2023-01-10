//judul
//menhitung lama latihan mengetik
//19 sept 20222

#include <iostream>
using namespace std;

//kamus
int jam_awal, menit_awal, detik_awal;
int jam_akhir, menit_akhir, detik_akhir;
int total_durasi, total_detik_awal, total_detik_akhir;
int HH, MM, DD;

//deskripsi
 main ()
{
    cout << " jam awal = ";
    cin >> jam_awal;
    cout << " menit awal = ";
    cin >> menit_awal;
    cout << " detik akhir = ";
    cin >>  detik_awal;

    cout << " jam_akhir = ";
    cin >> jam_akhir;
    cout << " menit_akhir = ";
    cin >> menit_akhir;
    cout << " detik akhir = ";
    cin >> detik_akhir;


    total_detik_awal = ( (jam_awal * 3600 ) + ( menit_awal * 60 ) +  menit_awal );
    total_detik_akhir = ( (jam_akhir * 3600 ) + ( menit_akhir * 60 ) +  detik_akhir );
    total_durasi = total_detik_akhir - total_detik_awal ;

    //konversikan  kembali ke HH MM DD mod div
    HH = total_durasi / 3600;
    MM = ( total_durasi % 3600 ) / 60;
    DD = ( total_durasi % 3600 ) % 60;

    cout << " jam mulaiku latihan " << jam_awal << menit_awal << detik_awal << endl;
    cout << " jam berakhir latihan " << jam_akhir << menit_akhir << detik_akhir << endl;
    cout << " jadi aku latihan mengetik selama = " << HH << "  : " << MM << " : " <<DD;

}
