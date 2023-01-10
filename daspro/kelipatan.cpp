//judul
//menghitung kelipatan angka 6
//Pryta Yonifa Putri
//A11.2022.14360
//6 okt 2022

#include <iostream>
using namespace std;

//kamus
int p, x=6;

//deskripsi
int main()
{
    p = 100;
    cout << " maka kelipatan nilai 6 dari 0-100 " << endl;
    cout << x <<" ";
    do {
    x++;
    if(x%6==0){
        cout << x <<" ";
    }
    }while(x<=p);
    return 0;
}

