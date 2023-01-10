//judul : simulasi loop
// 17 sept

#include <iostream>
using namespace std;

//kamus
    int a, b, c, d, e;
    int y[4];
    int x, cari, z;

//deskripsi
int main()
{
    cout << "Masukkan nilai a:"; cin >> a;
    cout << "Masukkan nilai b:"; cin >> b;
    cout << "Masukkan nilai c:"; cin >> c;
    cout << "Masukkan nilai d:"; cin >> d;
    cout << "Masukkan nilai e:"; cin >> e;
    cout << endl;

    cout << "Input data untuk array p:"; cin >> y[4];
    cout << "Input data untuk array q:"; cin >> y[3];
    cout << "Input data untuk array r:"; cin >> y[2];
    cout << "Input data untuk array s:"; cin >> y[1];
    cout << "Input data untuk array t:"; cin >> y[0];
    cout << "======================================= \n";

    /*inputan array data [] diatas boleh / dipersilahkan
    kalau aka dibuat loop*/

    cout << "Nilai bilangan a adalah " << a << endl;
    cout << "Nilai bilangan b adalah " << b << endl;
    cout << "Nilai bilangan c adalah " << c << endl;
    cout << "Nilai bilangan d adalah " << d << endl;
    cout << "Nilai bilangan e adalah " << e << endl;
    cout << endl;

    cout << "Nilai data array : \n";
    cout << "data array r = " << y[2] << endl;
    cout << "data array s = " << y[1] << endl;
    cout << "data array t = " << y[0] << endl;
    cout << "data array p = " << y[4] << endl;
    cout << "data array q = " << y[3] << endl;
    cout << "======================================= \n";

    cout << "Cari angka [p/q/r/s/t] = "; cin >> cari;

    z = 0;
    while (z <= 4)
    {
        if (cari == y[x])
        {
            cout << "ketemu di indeks ke - " << z << endl;
        }
        else
        {
            cout << "ga ketemu \n";
        }
        z=z+1;
    }

    //looping
    x=0;
    do
    {
        cout << "Isi data indeks " << x << " = " << y[x] << endl;
        x = x+1;
    }
    while (x < 5);
    cout << "======================================= \n";


return 0;
}
