#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;

    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int area = maxArea(height);
    cout << "max container" << " " << area;
}

// If you want to impress in interviews, mention:

// Time Complexity: O(n)
// Space Complexity: O(1)

// Why two pointers? Because brute force would be O(n^2), and you’re not about that life.