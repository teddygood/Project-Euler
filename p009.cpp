#include <bits/stdc++.h>
using namespace std;

int sq(int a)
{
    return a * a;
}

int main()
{
    for (int a = 1; a <= 1000 / 3; a++)
    {
        for (int b = a + 1; a + b <= 1000; b++)
        {
            int c = 1000 - a - b;
            if (sq(a) + sq(b) == sq(c))
            {
                cout << a << " " << b << " " << c << endl;
                cout << a * b * c;
            }
        }
    }
}