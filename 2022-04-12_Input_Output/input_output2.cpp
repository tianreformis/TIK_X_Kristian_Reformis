#include <iostream>
#include <stdio.h> 

using namespace std;
int main() { 
    string nama,keterangan;
    int umur, kelas, tahun_lahir, jk;
    cout<<"Masukkan Nama = ";cin>>nama;
    cout<<"Masukkan Kelas = ";cin>>kelas;
    cout<<"Masukkan Tahun lahir = ";cin>>tahun_lahir;
    umur = 2022 - tahun_lahir;
    cout<<"Pilih Jenis kelamin = [1]LK [2] PR =";cin>>jk;

    if (jk == 1)  {
        keterangan = "Laki - Laki";
    }
    else if (jk == 2){
        keterangan = "Perempuan";
    }
    else {
        keterangan = "Jenis kelamin tidak diketahui";
    }


    cout<<"Nama Anda = "<<nama<<endl;
    cout<<"Kelas Anda = "<<kelas<<endl;
    cout<<"Umur Anda = "<<umur<<" Tahun"<<endl; 
    cout<<"Jenis Kelamin = "<<keterangan<<endl; 
    return 0;
}
