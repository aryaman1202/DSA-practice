/*Finding Pascal's Triangle*/
#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n != 0)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i == 1 || i == 2)
            {
                if (i >= j)
                {
                    cout << "1 ";
                }
            }
            else
            {
                if (i >= j)
                {
                    int n = i - 1;
                    int r = j - 1;
                    int a = factorial(n);
                    int b = factorial(r);
                    int c = factorial(n - r);
                    int comb = a / (b * c);
                    cout << comb << " ";
                }
            }
        }
        cout << endl;
    }
    // int n, r;
    // cout << "Enter n: ";
    // cin >> n;
    // cout << "Enter r: ";
    // cin >> r;
    // int a = factorial(n);
    // int b = factorial(r);
    // int c = factorial(n - r);
    // int comb = a / (b * c);
    // cout << "Result: " << comb;
    return 0;
}