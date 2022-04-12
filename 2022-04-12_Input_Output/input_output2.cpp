#include <iostream>
#include <stdio.h> 

using namespace std;
int main() { 
    string nama;
    int umur, kelas, tahun_lahir;
    cout<<"Masukkan Nama = ";cin>>nama;
    cout<<"Masukkan Kelas = ";cin>>kelas;
    cout<<"Masukkan Tahun lahir = ";cin>>tahun_lahir;
    umur = 2022 - tahun_lahir;

    cout<<"Nama Anda = "<<nama<<endl;
    cout<<"Kelas Anda = "<<kelas<<endl;
    cout<<"Umur Anda = "<<umur<<" Tahun"<<endl; 
    return 0;
}
