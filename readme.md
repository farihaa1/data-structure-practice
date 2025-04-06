# 🚀 C++ Problem Solving Collection

Welcome to a clean, organized collection of beginner-to-intermediate level C++ problems! Whether you're prepping for interviews or just flexing those coding muscles, this guide’s got you. Each section contains:

- ✅ **Problem Summary**
- 💡 **Code**
- 📘 **Algorithm**
- 🧪 **Dry Run**
- ⏱️ **Complexity**

Let’s get into it. 👇

---

## 🧊 Container With Most Water (Two Pointer Method)

### ✅ Problem

Given an array of non-negative integers representing vertical lines, find two lines that together with the x-axis form a container, such that it holds the **most water**.

### 💡 Code

````cpp
int maxArea(vector<int> &height) {
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

📘 Algorithm

1. Set two pointers at each end of the array.
2. While lp < rp:
3. Calculate width and height.
4. Update maxWater.
5. Move the shorter line inward.

🧪 Dry Run
Input: [1,8,6,2,5,4,8,3,7]
First area: min(1, 7) * 8 = 8
Final max area: 49

⏱️ Complexity
Time: O(n)
Space: O(1)


## Kadane’s Algorithm

Kadane's Algorithm is used to find the maximum sum of a contiguous subarray in an array of integers. Its an efficient way to solve the Maximum Subarray Problem in O(n) time.

### 💡 Code
```cpp
````
