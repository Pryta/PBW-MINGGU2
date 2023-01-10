//judul

#include <iostream>
using namespace std;

//kamus
    string kata;
    int n, i;
    bool palindrome = true;

//deskripsi
int main () {
    cout << "Menentukan kalimat palindrome";
    cout << endl << endl;

    cout << "Masukkan kata : "; getline(cin, kata);
    n = kata.length();  //meghitung panjang kata

    i = 0;
    while (i < n)
    {
        if (kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
        i = i+1;
    }
    cout << endl;

    cout << "Hasil :\n";
    if (palindrome == true)
    {
        cout << "Palindrome \n";
    }
    else
    {
        cout << "Bukan Palindrome \n";
    }
return 0;
}
