#include <iostream>
using namespace std;
int main(){
    int n, ld,sum;
    cout<<"Enter the digits: ";
    cin>>n;
    sum = 0;
    while(n!=0){
        ld=n%10;
        if(ld%2==0){
            sum += ld;
        }
        n /=10;
    }
    cout<<"sum is: "<<sum;
}