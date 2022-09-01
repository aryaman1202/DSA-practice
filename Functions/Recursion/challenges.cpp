#include <iostream>
#include <cstring>

using namespace std;

// void reverse(string str)
// {
//     if (str.length() == 0)
//     {
//         return;
//     }
//     string ros = str.substr(1);
//     reverse(ros);
//     cout << str[0];
// }

// int main()
// {
//     string str;
//     cin >> str;
//     reverse(str);
//     return 0;
// }

/*Replace pi in the string with 3.14*/

// void replacePi(string str)
// {
//     if (str.length() == 0)
//     {
//         return;
//     }
//     if (str[0] == 'p' && str[1] == 'i')
//     {
//         cout << "3.14";
//         replacePi(str.substr(2));
//     }
//     else
//     {
//         cout << str[0];
//         replacePi(str.substr(1));
//     }
// }
// int main()
// {
//     string str;
//     cin >> str;
//     replacePi(str);
//     return 0;
// }

/*Generate all substrings of a string*/

// void subString(char str[], int n)
// {
//     for (int len = 1; len <= n; len++)
//     {
//         for (int i = 0; i <= n - len; i++)
//         {
//             int j = i + len - 1;
//             for (int k = i; k <= j; k++)
//                 cout << str[k];

//             cout << endl;
//         }
//     }
// }

// int main()
// {
//     char str[] = "abc";
//     subString(str, strlen(str));
//     return 0;
// }

/*Print all possible permutations of a string*/

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(&a[l], &a[i]);

            // Recursion called
            permute(a, l + 1, r);

            // backtrack
            swap(&a[l], &a[i]);
        }
    }
}

// Driver Code
int main()
{
    string str = "ABCD";
    int n = str.size();
    permute(str, 0, n - 1);
    return 0;
}
