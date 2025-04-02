#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;    // input the number of rows;
    int row = 1; // start from the first row
    // loop for each row
    while (row < n)
    {
        int count = row; // initialize the count with the row number
        int col = 1;     // start from the first row

        // loop to print each numbers of row
        while (col <= row)
        {
            cout << count << " ";
            count--;
            col++;
        }
        cout << endl;
        row++;
    }
}