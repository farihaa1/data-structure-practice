#include <iostream>
using namespace std;

int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); // clear the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of 1 bits = " << countOnes(n);

    return 0;
}
