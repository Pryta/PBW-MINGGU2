//judul
// - dasar type bentukan
// - kasus jam waktu tanggal
// - merekam waktu masuk ke lab per siswa

#include <iostream>
using namespace std;

//kamus
    //data yang berulang ulang diringkas menggunakan tipe data bentukan
    struct jamMasuk {
        int jam, menit, detik;
    };

    struct tanggal {
        int tgl, tahun;
        string bulan;
    };

    struct waktu

//deskripsi
int main() {
    cout << "Pendataan Waktu Masuk Siswa \n";
    cout << endl;

    cout << "Masukkan Waktu Aku Masuk !" << endl;
    cout << "Jam    = "; cin >> aku.jam;
    cout << "Menit  = "; cin >> aku.menit;
    cout << "Detik  = "; cin >> aku.detik;
    cout << endl;

    cout << "Aku masuk jam = " << aku.jam << ":" << aku.menit << ":" << aku.detik;
    cout << endl;

return 0;
}
