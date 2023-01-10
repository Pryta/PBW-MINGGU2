//judul
//program menghitung lama belajar
//pryta yonifa putri
//A11.2022.14360
//12 sept 2022

#include <iostream>
using namespace std;

//kamus
//x=sisa result dibagi 3600
int jamawal, menitawal, detikawal, jamakhir, menitakhir, detikakhir, jamhasil, menithasil, detikhasil, sum1, sum2, result, x;
char y, tmp;
//kon:konversi

//deskripsi
int  main()
{
    do{
    system("cls");
	cout<< "menghitung lama waktu belajar"<< endl;
	cout<< "jam mulai: ";
	cin>> jamawal >> y >> menitawal >> y >> detikawalsai: ";;

	cout<< "jam sele
	cin>> jamakhir >> y >> menitakhir >> y >> detikakhir;

	if (jamawal > 23 || menitawal > 59 || detikawal > 59)
	{
		cout<<"penulisan jam salah";
		return 0;
	}

	else if (jamakhir > 23 || menitakhir > 59 || detikakhir > 59)
	{
		cout<<"penulisan jam salah";
		return 0;
	}
        if (jamawal < jamakhir)
	{
		sum1 = jamawal*3600 + menitawal*60 + detikawal;
		sum2 = jamakhir*3600 + menitakhir*60 + detikakhir;
		result = sum2 - sum1;
		jamhasil = result / 3600;
		x = result % 3600;
		menithasil = x / 60;
		detikhasil = x % 60;
	}
		if (jamawal > jamakhir)
	{
		sum1 = jamawal*3600 + menitawal*60 + detikawal;
		sum2 = (jamakhir + 24)*3600 + menitakhir*60 + detikakhir;
		result = sum2 - sum1;
		jamhasil = result / 3600;
		x = result % 3600;
		menithasil = x / 60;
		detikhasil = x % 60;
	}

	cout<<"Jadi, lama waktu belajarku adalah " << jamhasil << ":" << menithasil << ":" << detikhasil;

    cout << "\n\nApakah ingin mengulang proses [1=Ya | 0=Exit] ? ";
    cin >> tmp;

    }while(tmp != 0);
}
