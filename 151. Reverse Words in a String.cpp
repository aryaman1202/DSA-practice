class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> words;
        while (s[0] == ' ')
        {
            s.erase(0, 1);
        }
        int n = s.size();
        int y = n - 1;
        while (s[y] == ' ')
        {
            s.erase(y, 1);
            y = s.size() - 1;
        }
        n = s.size();
        int l = 0, r = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == ' ' && s[i + 1] == ' ')
            {
                s.erase(i, 1);
                n = n - 1;
                i--;
            }
        }
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                r++;
            }
            if (s[i] == ' ' || i == n - 1)
            {
                string str = s;
                str = str.substr(l, r);
                words.push(str);
                l = i + 1;
                r = 0;
                continue;
            }
            r++;
        }
        s = s.erase(0, n);
        while (!words.empty())
        {
            string str = words.top();
            words.pop();
            s.append(str);
            s = s + " ";
        }
        s.pop_back();
        return s;
    }
};