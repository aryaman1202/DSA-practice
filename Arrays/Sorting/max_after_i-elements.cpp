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
    int mx = arr[0];
    cout << mx << endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            mx = arr[i];
        }
        cout << mx << endl;
    }
    return 0;
}