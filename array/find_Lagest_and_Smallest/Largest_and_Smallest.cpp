#include <iostream>
using namespace std;

int main(){
    int nums[] = {12, -2, 3, 5, 100 ,-100};
    int size = sizeof(nums)/sizeof(int);

    int min = nums[0] ;
    int max = nums[0];

    for(int i =0; i<size; i++){
        if(nums[i]<min){
            min=nums[i];
        }
        if(nums[i]>max){
            max = nums[i];
        }
    }
    cout<<"min " << min <<endl;
    cout<<"max " << max <<endl;
}