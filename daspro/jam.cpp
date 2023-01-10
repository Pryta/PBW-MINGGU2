//judul

//kamus
int jawal, mawal, dawal;
int jakhir, makhir, dakhir;
int totdurasi, totdawal, totdakhir;
int HH, MM, DD;
int jawall, jakhirr;
char ulang;

//deskripsi
int main()
{
    do
    {
        cout << "jam awal :";
        cin >> jawall >> mawal >> dawal;
        cout << "jam akhir:";
        cin >> jakhirr >> makhir >> dakhir;
        cout << endl;

        if(jawall > 12)
        {
            jawal = jawall - 12;
            jakhir = jakhirr - 12;

            totdawal = (jawal*3600)+(mawal*60)+dawal;
            totalhir = (jakhir*3600)+(makhir*60)+dakhir;
            totdurasi= (totdakhir-totdawal);
        }
        totdawal = (jawall*3600)+(mawal*60)+dawal;
        totalhir = (jakhirr*3600)+(makhir*60)+dakhir;
        totdurasi= (totdakhir-totdawal);

        HH  = (totdurasi / 3600);
        MM  = (totdurasi % 3600)/60;
        DD  = (totdurasi % 3600)%60;

        cout<<"jadi total durasi belajar adalah" << HH << "jam" << MM << "menit" << DD << "detik";
        cout << endl << endl;
    }
    return 0;
}

