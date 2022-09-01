#include <iostream>

using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int curr = 0;

//     for (int i = 0; i < n; i++)
//     {
//         curr = 0;
//         for (int j = i; j < n; j++)
//         {
//             curr += arr[j];
//             cout << curr << endl;
//         }
//     }

//     return 0;
// }

/*Given an unsorted array of size n, find a continous sub array which adds to a given number S*/

// int main()
// {
//     int n, s;
//     cin >> n;
//     cin >> s;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter;

//     for (int i = 0; i < n; i++)
//     {
//         counter = 0;
//         for (int j = i; j <= n; j++)
//         {
//             counter += arr[j];
//             if (s == counter)
//             {
//                 cout << i << " " << j << endl;
//             }
//         }
//     }
//     return 0;
// }

/*Print all the subarrays of a given array and also display the subarray with greatest sum.*/

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int a[n];
//         int l = 0;
//         for (int j = i; j < n; j++)
//         {
//             a[l] = arr[j];
//             l++;
//             for (int k = 0; k < l; k++)
//             {
//                 cout << a[k] << " ";
//             }
//             cout << endl;
//         }
//     }

//     int curr;
//     int sum[(n * (n + 1)) / 2];
//     int l = 0;
//     for (int i = 0; i < n; i++)
//     {
//         curr = 0;
//         for (int j = i; j < n; j++)
//         {
//             curr += arr[j];
//             sum[l] = curr;
//             l++;
//         }
//     }

//     int max = sum[0];
//     int p = 0;
//     for (int i = 1; i < l; i++)
//     {
//         if (max < sum[i])
//         {
//             max = sum[i];
//             p = i;
//         }
//     }

//     cout << "Max sum: " << max << endl;
//     cout << "Subarray is: ";

//     int x = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int a[n];
//         int q = 0;
//         for (int j = i; j < n; j++)
//         {
//             a[q] = arr[j];
//             q++;
//             if (x == p)
//             {
//                 for (int k = 0; k < q; k++)
//                 {
//                     cout << a[k] << " ";
//                 }
//             }
//             x++;
//         }
//     }
//     return 0;
// }