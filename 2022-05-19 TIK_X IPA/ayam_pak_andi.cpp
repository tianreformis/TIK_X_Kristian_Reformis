#include <iostream>

using namespace std;

int main(){
    int umur;
    string keterangan;

    cout<<"Masukkan umur ayam = ";cin>>umur;
    if (umur >= 1 && umur <=3){
        keterangan = "Kandang 1";
    }
    else if (umur >= 4 && umur<=6){
        keterangan = "Kandang 2";
    }
    else if (umur >= 7 && umur <=10){
        keterangan = "Kandang 3";
    }
    else if (umur <0 && umur > 10){
        keterangan = "Tidak dimasukkan ke Kandang";
    }

    cout<<"Umur Ayam = "<<umur<<endl;
    cout<<"Kandang Ayam = "<<keterangan<<endl;

    return 0;
}

/*
    1. Ayam dikelompokkan berdasarkan umur.
    2. Siapkan 3 kandang.
    3. Jika umur 1 – 3 bulan = Kandang 1
    4. Jika umur 4 – 6 bulan = Kandang 2
    5. Jika umur 7 – 10 bulan = Kandang 3
    6. Ayam < 1 atau >10 bulan tidak dimasukkan ke kandang.

*/