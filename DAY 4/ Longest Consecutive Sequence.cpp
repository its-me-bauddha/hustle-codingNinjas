#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n)
{
    // Write your code here.

    if (n == 0)
        return 0;

    sort(nums.begin(), nums.end());

    int miniNum = INT_MIN;
    int longest = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] - 1 == miniNum)
        {
            count++;
            miniNum = nums[i];
        }
        else if (nums[i] != miniNum)
        {
            count = 1;
            miniNum = nums[i];
        }
        longest = max(count, longest);
    }

    return longest;
}