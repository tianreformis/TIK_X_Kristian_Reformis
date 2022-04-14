#include <iostream>

using namespace std;
int main()
{
    /* 
    cin input nama
    cin input umur 
    cin Input tahun lahir

    tampilkan nama
    tampilkan umur
    tampilkan tahun lahir
    */ 
   string nama, namaDepan;
   int umur, tahunLahir;

   cout<<"Masukkan Nama Depan= "; cin>>namaDepan;
   cout<<"Masukkan Nama Lengkap = "; getline (cin, nama);//getline mengambil string dengan spasi
   cout<<"Masukkan Umur = ";cin>>umur;
   cout<<"Masukkan Tahun Lahir = ";cin>>tahunLahir;

   cout<<"Nama Depan"<<namaDepan<<endl;
   cout<<"Nama Lengkap = "<<nama<<endl;
   cout<<"Umur = "<<umur<<endl;
   cout<<"Tahun Lahir = "<<tahunLahir<<endl;
   

      
    return 0;
}
