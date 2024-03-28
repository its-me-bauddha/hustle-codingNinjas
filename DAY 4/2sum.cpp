string read(int n, vector<int> book, int target)
{
    // Write your code here.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        int x = target - book[i];
        // hash.count -> returs 1 if the value is present in the hash array
        if (hash.count(x))
        {
            return "YES";
        }
        hash[book[i]] = i;
    }
    return "NO";
}