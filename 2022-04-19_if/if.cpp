//5 seragam //argumen
//hari selasa kamis //syarat 
//Seragam Varian = hasil

#include <iostream>
using namespace std;

int main(){
    string hari = "Minggu";

    if (hari == "Senin"){
        cout<<"Seragam Putih Abu";
    }
    else if (hari == "Selasa"){
        cout<<"Seragam Varian";
    }
    else if (hari == "Rabu"){
        cout<<"Batik";
    }
    else {
        cout<<"seragam tidak ada,Hari salah";
    }
    return 0;
}