/*An arithmetic array is an array that contains atleast two integers and the diff between consecuitive integers
is equal. Given an n-size array find the length of the longest contigous arithmetic subarray.*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 2;
    int pd = arr[1] - arr[0];
    int curr = 2;
    int j = 2;

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}

// Finding min index of the first repeating number in array
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int rep_ele[n];
//     int l = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 rep_ele[l] = i;
//                 l++;
//             }
//         }
//     }
//     int min = rep_ele[0];
//     for (int i = 1; i < l; i++)
//     {
//         if (min > rep_ele[i])
//         {
//             min = rep_ele[i];
//         }
//     }
//     cout << min << endl;
//     return 0;
// }
