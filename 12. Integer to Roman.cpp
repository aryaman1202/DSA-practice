class Solution
{
public:
    string intToRoman(int num)
    {
        string str = "";
        while (true)
        {
            if (num == 0)
            {
                return str;
            }
            if (num >= 1000)
            {
                str.push_back('M');
                num -= 1000;
            }
            if (num < 1000 && num >= 500)
            {
                if (num >= 900)
                {
                    str.push_back('C');
                    str.push_back('M');
                    num -= 900;
                    continue;
                }
                str.push_back('D');
                num -= 500;
            }
            if (num < 500 && num >= 100)
            {
                if (num >= 400)
                {
                    str.push_back('C');
                    str.push_back('D');
                    num -= 400;
                    continue;
                }
                str.push_back('C');
                num -= 100;
            }
            if (num < 100 && num >= 50)
            {
                if (num >= 90)
                {
                    str.push_back('X');
                    str.push_back('C');
                    num -= 90;
                    continue;
                }
                str.push_back('L');
                num -= 50;
            }
            if (num < 50 && num >= 10)
            {
                if (num >= 40)
                {
                    str.push_back('X');
                    str.push_back('L');
                    num -= 40;
                    continue;
                }
                str.push_back('X');
                num -= 10;
            }
            if (num < 10 && num >= 5)
            {
                if (num >= 9)
                {
                    str.push_back('I');
                    str.push_back('X');
                    num -= 9;
                    continue;
                }
                str.push_back('V');
                num -= 5;
            }
            if (num < 5 && num >= 1)
            {
                if (num >= 4)
                {
                    str.push_back('I');
                    str.push_back('V');
                    num -= 4;
                    continue;
                }
                str.push_back('I');
                num -= 1;
            }
        }
    }
};