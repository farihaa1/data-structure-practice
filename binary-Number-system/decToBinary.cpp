#include<iostream>
using namespace std;
int decToBinary(int n){
    int rem, pow=1, bin=0;
    while(n>0){
        rem = n%2;
        n /= 2;
        bin = bin + rem*pow;
        pow *= 10;
    }
    return bin;
}
int main(){
    int n;
    cin >> n;
    int bin = decToBinary(n);
    cout<< "Binary Number: " << bin;
}