#include <bits/stdc++.h>
using namespace std;

int sq(int a)
{
    return a * a;
}

int main()
{
    // 1st
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum1 += i;
        sum2 += i * i;
    }
    cout << abs(sum1 * sum1 - sum2) << endl;

    // 2nd
    int ssum1 = ((100 + 1) * 100 / 2);
    int ssum2 = (100) * (100 + 1) * (2 * 100 + 1) / 6;
    cout << abs(ssum1 - ssum2) << endl;
}