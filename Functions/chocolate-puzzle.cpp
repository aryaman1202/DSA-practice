/*Suppose a chocolate costs Rs 1, and with three wrappers we get an extra chocolate. How many no of chocolates can a person get if he has Rs n with him.*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int wrap = n;
    int total = n;
    while (wrap >= 2)
    {
        int a = wrap % 3;
        wrap = wrap / 3;
        total = total + wrap;
        wrap = wrap + a;
    }
    cout << total << endl;
    return 0;
}