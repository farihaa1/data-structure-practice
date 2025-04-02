#include<iostream>
using namespace std;

int binToDec (int n){
    int pow=1, dec=0, rem;
    while(n>0){
        rem = n%10;
        n /= 10;
        dec = dec + rem*pow;
        pow *= 2;
    }
    return dec;
}
int main(){
    int bin, dec; 
    cout << "enter binary number: ";
    cin >> bin;
    dec = binToDec(bin);
    cout << "decimal number: ";
    cout << dec;
}