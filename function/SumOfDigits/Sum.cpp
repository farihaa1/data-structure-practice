#include <iostream>
using namespace std;

int SumOfDigits(int n)
{
    int rem ;
    int sum = 0;
    for (int i = 1; n > 0; i++)
    {
        rem = n % 10;
        sum += rem;
        n = n/10;
    }
    return sum;
}
int main(){
    cout << SumOfDigits(123) << endl;
}