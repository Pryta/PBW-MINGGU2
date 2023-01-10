#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int data[8];
    int i, j, temp;
    cout << "mengurutkan angka dari yang terkecil"<< endl;
    for(i=0; i<6; i++)
    {
        cout << "masukkan angka ke" << (i+1) << ":";
        cin >> data[i];
    }
    cout << "data sebelum diurutkan: " << endl;
    for(i=0; i<6; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    for (i=0; i<9; i++)
    {
        for(j=i+1; j<6; j++)
        {
            if(data[i]>data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    cout << "data setelah diurutkan: "<< endl;
    for(i=0; i<6; i++)
    {
        cout << data[i] << " ";
    }
    getch();
}
