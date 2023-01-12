class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> v;
        vector<string> vs = strs;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            sort(strs[i].begin(), strs[i].end());
        }
        map<string, set<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[strs[i]].insert(i);
        }
        // sort(strs.begin(),strs.end());
        // unique(strs.begin(), strs.end());
        map<string, set<int>>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
        {
            vector<string> str;
            set<int> s = it->second;
            for (auto i = s.begin(); i != s.end(); i++)
            {
                int j = *i;
                str.push_back(vs[j]);
            }
            v.push_back(str);
        }
        return v;
    }
};