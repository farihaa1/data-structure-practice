#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    
    
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + col - 1;
        
        while (col <= n)
        {
            cout << ch<<" ";
            col++;
            ch++;
        }
        row++;
        cout<<endl;
    }
}