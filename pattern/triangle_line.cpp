/*
1 1 1 1 1
  2 2 2 2
    3 3 3
      4 4
        5
*/




#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int num=5;
    for (int i = 1; i < n; i++)
    {   
        for (int j = 1; j < i; j++)
        {
            cout << " " << '\t';
        }

        for (int j = 1; j < n - i; j++)
        {
            cout << num << '\t';
            
        }
        num--;
        cout<<endl;
    }

    return 0;
}