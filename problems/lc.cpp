#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            right = mid - 1;
        else if (nums[mid] < target)
            left = mid + 1;
    }
    return left;
}

int main()
{
    vector<int> test = {1, 3, 5, 6};

    int i = searchInsert(test, 2);

    cout << i << endl;

    return 0;
}
