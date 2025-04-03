// kadane's Algorithm

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "Max Sum :" << maxSum;
    return 0;
}



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum = INT8_MIN;
//     for (int start = 0; start < n; start++)
//     {
//         int currSum = 0;
//         for (int end = start; end < n; end++)
//         {
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }

//     cout << "Max Sum :" << maxSum;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int start = 0; start < n; start++){
//         for(int end = start; end<n ;end++){
//             for(int i = start; i<=end; i++){
//                 cout << arr[i];
//             }
//             cout <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
// 1 12 123 1234 12345
// 2 23 234 2345
// 3 34 345
// 4 45
// 5