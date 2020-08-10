#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    // 1st
    for (int i = 2520;; i++)
    {
        bool ck = true;
        for (int j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                ck = false;
                break;
            }
        }
        if (ck)
        {
            cout << i;
            break;
        }
    }

    // GCD, LCM
    // 2nd
    int ans = 1;
    for (int i = 1; i <= 20; i++)
    {
        ans = lcm(ans, i);
    }
    cout << ans;
}