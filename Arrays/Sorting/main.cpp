#include <iostream>
using namespace std;

/*Printing all unique numbers which are divisible by given two numbers in a given range*/
int main()
{
    int n, a, b, counter = 0;
    cin >> n;
    cin >> a;
    cin >> b;
    int arr1[n];
    int l = 0;
    for (int i = a; i <= n; i++)
    {
        if (i % a == 0)
        {
            arr1[l] = i;
            l++;
            counter++;
        }
    }
    for (int i = b; i <= n; i++)
    {
        if (i % b == 0)
        {
            arr1[l] = i;
            l++;
            counter++;
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << counter << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (arr1[i] > arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    cout << arr1[0] << " ";
    for (int i = 0; i < l - 1; i++)
    {
        if (arr1[i] == arr1[i + 1])
        {
            continue;
        }
        else
        {
            cout << arr1[i + 1] << " ";
        }
    }
    return 0;
}
