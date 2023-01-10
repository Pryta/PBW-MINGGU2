#include <iostream>
using namespace std;

int main(){
    int nilai[] = {8, 9, 5, 6, 3, 4, 7};
    int length = sizeof(nilai)/sizeof(*nilai);
    int temp;
    for(int a = 1; a < length; a++){
        for(int b =0; b < length-a; b++){
            if(nilai[b] < nilai[b+1]){
                temp = nilai[b];
                nilai[b] = nilai[b+1];
                nilai[b+1] = temp;
            }
        }
    }
    cout << "hasil sorting: " << endl;
    for(int x = 0; x<length; x++){
        cout << " " << nilai[x] << endl;
    }
}
