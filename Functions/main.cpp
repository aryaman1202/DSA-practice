#include <iostream>

using namespace std;

int main()
{
    int n, p = 0;
    cin >> n;
    int s = n;
    int arm = 0;
    int rev = 0;
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
    if (p == 0)
    {
        cout << "Type: Prime" << endl;
    }
    else
    {
        cout << "Type: Composite" << endl;
    }
    while (n != 0)
    {
        int a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }
    cout << "Reverse: " << rev << endl;
    if (rev == s)
    {
        cout << "Palindrome: Yes" << endl;
    }
    else
    {
        cout << "Palindrome: No" << endl;
    }
    n = s;
    while (n != 0)
    {
        int b = n % 10;
        arm = arm + b * b * b;
        n = n / 10;
    }
    cout << "Cube of numbers: " << arm << endl;
    if (arm == s)
    {
        cout << "Armstrong: Yes";
    }
    else
    {
        cout << "Armstrong: No";
    }
    return 0;
}
