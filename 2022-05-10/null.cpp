/*
Program Kasir Sederhana

Barang = 
1. Nasi Goreng (10000)
2. Capcay = (13000)
3. Mie Goreng = (8000)

Sub Total = Barang * Jumlah Beli
jika jumlah beli > 5 diskon 5% produk apa saja

Total = sub total - diskon
*/

#include <iostream>

using namespace std;
int main (){
    int harga, subtotal, total, jumlahbeli, diskon, pilihan, jumlahbayar, kembalian;
    string keterangan;

    cout<<"========MENU========="<<endl;
    cout<<"1. Nasi Goreng"<<endl;
    cout<<"2. Capcay"<<endl;
    cout<<"3. Mie Goreng"<<endl;
    cout<<"====================="<<endl;

    cout<<"Masukkan Pilihan = "; cin>>pilihan;
    if (pilihan == 1){
        keterangan = "Nasi Goreng";
        harga=10000;        
    }
    else if (pilihan == 2){
        keterangan = "Capcay";
        harga=13000;        
    }
    else (){
        cout<<"Pilihan Tidak ada";
    }

    cout<<"Masukkan Jumlah Beli = ";cin>>jumlahbeli;    
    subtotal = harga *jumlahbeli;
    cout<<"Anda Membeli     = "<<keterangan<<endl;
    cout<<"Dengan Harga     = "<<harga<<endl;
    cout<<"Dengan Jumlah    = "<<jumlahbeli<<endl;
    cout<<"Sub Total        = "<<subtotal<<endl;
    if (jumlahbeli > 5){
        diskon = subtotal * 0.05;
    }
    else {
        diskon = 0;
    }
    cout<<"Diskon           = "<<diskon<<endl;
    total = subtotal - diskon;
    cout<<"Total            = "<<total<<endl<<endl<<endl;
    cout<<"Masukkan Jumlah Bayar = ";cin>>jumlahbayar;
    if (jumlahbayar < total){
        cout<<"Uang Tidak Mencukupi";
    }
    else {
        kembalian = jumlahbayar - total;
        cout<<"Kembalian        = "<<kembalian;
    }
    

    return 0;
}