#include <iostream>

using namespace std;

int max(int a, int b)
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else if (a < b)
    {
        max = b;
    }
    else
    {
        max = a;
    }
    return max;
}

int min(int a, int b)
{
    int min;
    if (a > b)
    {
        min = b;
    }
    else if (a < b)
    {
        min = a;
    }
    else
    {
        min = a;
    }
    return min;
}

int second_max(int a, int b, int c)
{
    int sec_max;
    if (a > b && a > c)
    {
        if (b > c)
        {
            sec_max = b;
        }
        else
        {
            sec_max = c;
        }
    }
    if (b > a && b > c)
    {
        if (a > c)
        {
            sec_max = a;
        }
        else
        {
            sec_max = c;
        }
    }
    if (c > b && c > a)
    {
        if (b > a)
        {
            sec_max = b;
        }
        else
        {
            sec_max = a;
        }
    }
    return sec_max;
}

int pythagoras(int x, int y, int z)
{
    int p = 0;
    int a = max(x, (max(y, z)));
    int b = min(x, (min(y, z)));
    int c = second_max(x, y, z);
    int hyp = a * a;
    int sides = (b * b) + (c * c);
    if (hyp == sides)
    {
        p = 1;
    }
    return p;
}

int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    int k = pythagoras(x, y, z);
    if (k == 1)
    {
        cout << "Yes it's a triplet" << endl;
    }
    else if (k == 0)
    {
        cout << "No it's not a triplet" << endl;
    }
}