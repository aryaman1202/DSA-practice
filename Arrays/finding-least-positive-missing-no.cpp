/*You are given an array arr[] of N integers including zero. find smallest positive number missing from array.*/

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
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    bool check[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        check[arr[i]] = true;
    }
    for (int i = 0; i < max + 1; i++)
    {
        if (check[i] == false)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}