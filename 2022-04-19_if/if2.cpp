#include <iostream> 
#include <stdio.h> 

using namespace std;

int main() { 
    int angka;
    cout<<"Masukkan Angka = "; cin>>angka;
    if (angka % 2 == 0){
        cout<<"Bilangan Genap";
    }
    else {
        cout<<"Bilangan Ganjil";
    }   
    
    return 0;
}