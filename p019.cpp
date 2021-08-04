#include <bits/stdc++.h>
using namespace std;

int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int n)
{
    return (n % 4 == 0 && n % 100) || n % 400 == 0;
}

int main()
{
    int cnt = 0;
    int st = (0 + 365) % 7; // 1900/12/01
    for (int y = 1901; y < 2001; y++)
    {
        for (int m = 0; m < 12; m++)
        {
            if (st == 6)
                cnt++;
            st += mon[m] + (m == 1 && isLeap(y) ? 1 : 0);
            st %= 7;
        }
    }
    cout << cnt;
}