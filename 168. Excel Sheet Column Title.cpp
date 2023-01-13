class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        map<int, char> m;
        char ch = 'A';
        int i = 1;
        while (i != 26)
        {
            m[i] = ch;
            i++;
            ch++;
        }
        m[0] = 'Z';
        string str = "";
        while (columnNumber != 0)
        {
            int a = columnNumber % 26;
            str.push_back(m[a]);
            if (a == 0)
            {
                columnNumber = columnNumber / 26;
                columnNumber -= 1;
                continue;
            }
            columnNumber = columnNumber / 26;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};