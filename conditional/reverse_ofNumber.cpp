#include <iostream>
using namespace std;
int main(){
    int n, ld, rev;
    cout<<"Enter a number: ";
    cin>>n;
    rev = 0;
    while(n!= 0){
        ld = n%10;
        rev = ld+ rev*10;
        n /=10;
    }
    cout<<"Rev num is: "<<rev;
}