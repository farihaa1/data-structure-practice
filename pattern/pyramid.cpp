/*
# # # # 1 
# # # 1 2 1
# # 1 2 3 2 1  
# 1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
        for(int j=5-i-1; j>0 ;j--){
            cout<<" ";
        }
        for(int j=1; j<=i+1;j++){
            cout<<j<<" ";
        }
        for(int j = i; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

