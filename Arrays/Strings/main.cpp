#include <iostream>
#include <cstring>

using namespace std;

// int sizeOfString(char arr[])
// {
//     int n = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         n++;
//     }
//     return n;
// }
// int main()
// {
//     char arr[100];
//     cin >> arr;
//     cout << arr << endl;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     int n = sizeOfString(arr);
//     bool pal = true;

//     for (int i = 0; i <= n / 2; i++)
//     {
//         if (arr[i] != arr[n - 1 - i])
//         {
//             pal = false;
//             break;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     if (pal)
//     {
//         cout << "It's a palindrome." << endl;
//     }
//     else
//     {
//         cout << "It is not a palindrome." << endl;
//     }
//     return 0;
// }

/*Find the largest word in a sentence*/

int main()
{
    string fullName;
    getline(cin, fullName);

    int i = 0;
    int maxLen = 0, currLen = 0;
    int start = 0, maxstart = 0;

    while (1)
    {
        if (fullName[i] != ' ' && fullName[i] != '\0')
        {
            currLen++;
        }
        else
        {
            if (maxLen < currLen)
            {
                maxLen = currLen;
                maxstart = start;
            }
            currLen = 0;
            start = i + 1;
        }
        if (fullName[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << fullName[i + maxstart];
    }

    return 0;
}