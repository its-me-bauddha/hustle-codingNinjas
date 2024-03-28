#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    // Write your code here
    vector<int> hash(256, -1);
    int left = 0;
    int right = 0;

    int n = input.size();
    int len = 0;
    while (right < n)
    {
        int index = input[right];
        if (hash[index] != -1)
            left = max(hash[index] + 1, left);
        hash[index] = right;

        len = max(len, right - left + 1);
        right++;
    }
    return len;
}