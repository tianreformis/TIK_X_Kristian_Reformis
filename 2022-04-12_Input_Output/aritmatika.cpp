#include <iostream>
#include <stdio.h>

using namespace std;

int main() { 
    int nilai_a, nilai_b;
    cout<<"Masukkan angka  pertama = ";cin>>nilai_a;
    cout<<"Masukkan angka  kedua = ";cin>>nilai_b;

    int hasilkali, hasiltambah, hasilkurang;
    float hasilbagi;
    hasilkali = nilai_a * nilai_b;
    hasilbagi = nilai_a / nilai_b;
    hasiltambah = nilai_a + nilai_b;
    hasilkurang = nilai_a - nilai_b;

    cout<<"Hasil dari "<<nilai_a<<" * "<<nilai_b<<" adalah = "<<hasilkali<<endl;
    cout<<"Hasil dari "<<nilai_a<<" / "<<nilai_b<<" adalah = "<<hasilbagi<<endl;
    cout<<"Hasil dari "<<nilai_a<<" - "<<nilai_b<<" adalah = "<<hasilkurang<<endl;
    cout<<"Hasil dari "<<nilai_a<<" + "<<nilai_b<<" adalah = "<<hasiltambah<<endl;
    
}//end of function