#include <iostream>
using namespace std;

int main(){
    int number1 = 0;
    while (number1++ <10 ){
        cout<<" 1 "<<" * "<<number1 <<" = "<<number1 * 1<<endl;   
    }
    cout<<endl;
    int number2 = 0;
    while (number2++ <10 ){
        cout<<" 2 "<<" * "<<number2 <<" = "<<number2 * 2<<endl;   
    }
    cout<<endl;
    int number = 0;
    while (number++ <10 ){
        cout<<number * 3<<" ";   
    }
    cout<<endl;
    int number4;
    while (number4++ <10 ){
        cout<<number4 * 4<<" ";   
    }
    cout<<endl;
    int number5;
    while (number5++ <10 ){
        cout<<number5 * 4<<" ";   
    }
    return 0;
}