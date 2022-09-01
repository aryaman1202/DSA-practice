#include <iostream>
using namespace std;

int main()

/*Converting all lowercase letters to uppercase and vice-versa in the string*/
// {
//     string str = "abDfEHhjFJfk";
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }
//     cout << str << endl;
//     return 0;
// }

/*Forming biggest numeric string from a numeric string numbers*/

// {
//     string str = "34519";
//     for (int i = 0; i < str.length(); i++)
//     {
//         for (int j = i + 1; j < str.length(); j++)
//         {
//             if (str[i] < str[j])
//             {
//                 char t = str[i];
//                 str[i] = str[j];
//                 str[j] = t;
//             }
//         }
//     }
//     int x = stoi(str);
//     cout << x << endl;
//     return 0;
// }

/**/

{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    int max_len = 0, curr_length = 1;
    int k = 0;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            curr_length++;
        }
        else
        {
            if (max_len < curr_length)
            {
                k = i;
                max_len = curr_length;
                curr_length = 0;
            }
        }
    }
    cout << max_len << endl;
    cout << k << endl;
    string s = str.substr(k - max_len, max_len);
    cout << s << endl;
    return 0;
}