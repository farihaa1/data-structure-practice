#include <iostream>
using namespace std;

int NNumOfFact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main(){
    cout << NNumOfFact(5) <<endl;
}