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
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//         else
//         {
//             continue;
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//         else
//         {
//             continue;
//         }
//     }
//     cout << "Min: " << min << endl;
//     cout << "Max: " << max << endl;
//     return 0;
// }

/*Finding all pairs of numbers that adds up to a given no*/

void findPair(int arr[], int key, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = sizeof(arr) / sizeof(int);
    int key = 6;
    findPair(arr, key, n);
    return 0;
}