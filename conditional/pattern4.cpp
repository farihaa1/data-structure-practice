#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int count;
    
    while(i<n){
        count=i;
        int j=0;
        while(j<=i){
            cout<<count+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

}