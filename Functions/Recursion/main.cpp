#include <iostream>

using namespace std;

/*Finding sum of n numbers using recursion*/

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int prevSum = sum(n - 1);
//     return n + prevSum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int s = sum(n);
//     cout << s << endl;
//     return 0;
// }

/*Finding factorial of a number using recursion*/

// int factorial(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int fact = factorial(n);
//     cout << fact << endl;
//     return 0;
// }

/*Finding n to the power p*/

// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     return n * power(n, p - 1);
// }
// int main()
// {
//     int n;
//     int p;
//     cin >> n >> p;
//     int exp = power(n, p);
//     cout << exp << endl;
//     return 0;
// }

/*Find nth fibonacci number*/

// int fibonacci(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//     {
//         cout << 0 << " ";
//     }
//     else if (n == 2)
//     {
//         cout << 1 << " ";
//     }
//     else if (n > 2)
//     {
//         int k = fibonacci(n);
//         cout << k << " ";
//     }
//     return 0;
// }

/*To check if an array is sorted or not using recursion*/

// bool sortOrNot(int arr[], int n)
// {
//     bool ans = true;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             ans = false;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int arr[5] = {1, 3, 2, 5, 8};
//     int n = sizeof(arr) / sizeof(int);
//     cout << sortOrNot(arr, n);
// }

/**/

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    dec(n - 1);
}
void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    dec(n);
    cout << endl;
    inc(n);
    return 0;
}