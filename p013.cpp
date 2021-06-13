#include <bits/stdc++.h>
using namespace std;

int a[53];

int main()
{
    for (int i = 0; i < 100; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 50; j++)
        {
            a[j + 2] += s[j] - '0';
        }
    }
    for (int i = 51; i > 0; i--)
    {
        a[i - 1] += a[i] / 10;
        a[i] %= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
    }
}