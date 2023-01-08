class Solution
{
public:
    bool valid(string s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int left = 0, right = s.length() - 1;
        while (left < right - 1)
        {
            if (s[left] != s[right])
            {
                if (valid(s, left, right - 1))
                {
                    return true;
                }
                if (valid(s, left + 1, right))
                {
                    return true;
                }
                return false;
            }
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};