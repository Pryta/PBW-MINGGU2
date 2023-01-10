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

    jamMasuk aku;

//deskripsi
int main() {
    cout << "Pendataan Waktu Masuk Siswa \n";
    cout << endl;

    aku.jam = 10;
    aku.menit = 17;
    aku.detik = 59;

    cout << aku.jam << ":" << aku.menit << ":" << aku.detik;
    cout << endl;

return 0;
}

