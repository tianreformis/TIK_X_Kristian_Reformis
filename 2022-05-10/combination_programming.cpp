/*
Program Kasir Sederhana

Barang =
1. Nasi Goreng (10000)
2. Capcay = (13000)
3. Mie Goreng = (8000)

Sub Total = harga * Jumlah Beli
jika jumlah beli > 5 diskon 5% produk apa saja

Total = sub total - diskon
*/

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    cout << "=======Menu========" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Capcay" << endl;
    cout << "3. Mie Goreng" << endl;
    cout << "===========-=======" << endl;
    string keterangan;
    int harga, jumlahbeli, subtotal;

    int pilihan;
    cout << "Pilihan Anda = [1 - 3] ";
    cin >> pilihan;
    if (pilihan == 1)
    {
        keterangan = "Nasi Goreng";
        harga = 10000;
        cout << "Masukkan Jumlah Beli [Dalam Angka] = ";
        cin >> jumlahbeli;
        subtotal = harga * jumlahbeli;        
    }
    else if (pilihan == 2)
    {
        keterangan = "Capcay";
        harga = 13000;
        cout << "Masukkan Jumlah Beli [Dalam Angka] = ";
        cin >> jumlahbeli;
        subtotal = harga * jumlahbeli;        
    }
    else {
        cout<<"Menu tidak ada";
    }
    cout << "Anda Membeli = " << keterangan << endl;
    cout << "Dengan Harga = " << harga << endl;
    cout << "Sub Total = " << subtotal << endl;
    int diskon, total;
    if (jumlahbeli > 5){
        diskon = subtotal * 0.05;
    }
    else {
        diskon = 0;
    }
    total = subtotal - diskon;
    cout<<"Diskon = "<<diskon<<endl;
    cout<<"Total = "<<total<<endl;
    


    return 0;
}