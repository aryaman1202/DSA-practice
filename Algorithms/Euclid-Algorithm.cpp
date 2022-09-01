#include <iostream>
using namespace std;

/*Finding prime factorisation of a number*/
// bool prime(int n)
// {
//     bool bl;
//     int p = 0;
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             p++;
//             break;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     if (p == 0)
//     {
//         bl = true;
//     }
//     else
//     {
//         bl = false;
//     }
//     return bl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     while (n != 1)
//     {
//         if (n == 2 || n == 3)
//         {
//             cout << n << " ";
//             n = 1;
//             break;
//         }
//         if (prime(n))
//         {
//             cout << n << " ";
//             n = 1;
//             break;
//         }
//         for (int i = 2; i <= n / 2; i++)
//         {
//             if (n % i == 0)
//             {
//                 n = n / i;
//                 cout << i << " ";
//                 break;
//             }
//         }
//     }
//     return 0;
// }

/*Euclid Algorithm to find GCD/HCF*/

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int rem = 1;
    while (rem != 0)
    {
        int mx = max(a, b);
        int mn = min(a, b);
        rem = mx % mn;
        a = mn;
        b = rem;
    }
    cout << a << endl;
    return 0;
}