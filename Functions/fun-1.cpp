/*Finding all prime numbers between two numbers*/

#include <iostream>

using namespace std;

int prime(int n)
{
    int p = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            p = p + 1;
        }
        else
        {
            continue;
        }
    }
    return p;
}

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    for (int i = x; i <= y; i++)
    {
        int k = prime(i);
        if (k == 0)
        {
            cout << i << ", ";
        }
    }
    return 0;
}