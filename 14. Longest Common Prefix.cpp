class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        int a = strs[0].size();
        int b = strs[n - 1].size();
        int m = min(a, b);
        int l = 0;
        string str = "";
        for (int i = 0; i < m; i++)
        {
            if (strs[0][l] == strs[n - 1][l])
            {
                str.push_back(strs[0][l]);
                l++;
                continue;
            }
            break;
        }
        return str;
    }
};