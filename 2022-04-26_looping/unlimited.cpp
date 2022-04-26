#include <iostream>
using namespace std;

int main(){
    int number1 = 0;
    int batasbawah;
    cout<<"Masukkan batas = "; cin>>batasbawah;
    while (number1++ <batasbawah){
        cout<<" 1 "<<" * "<<number1 <<" = "<<number1 * 1<<endl;   
    }
    return 0;
}