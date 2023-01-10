#include <iostream>
using namespace std;

struct siswa{
    string nama;
    string nim;
    char nilai;
};

int main(){
    struct siswa siswa1, siswa2;
    siswa1.nim = "111202214360";
    siswa1.nama = "pryta";
    siswa1.nilai = 'B';

    cout << "NIM : " << siswa1.nim << endl;
    cout << "Nama : " << siswa1.nama << endl;
    cout << "Nilai : " << siswa1.nilai << endl;

    cout << "\n============================\n" << endl;

    siswa2.nim = "111202214361";
    siswa2.nama = "nasya";
    siswa2.nilai = 'B';

    cout << "NIM : " << siswa2.nim << endl;
    cout << "Nama : " << siswa2.nama << endl;
    cout << "Nilai : " << siswa2.nilai << endl;


}
