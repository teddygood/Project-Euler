#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4;

int d[MAXN + 1];

int main()
{
    int tot = 0;
    for (int i = 1; i <= MAXN; i++)
    {
        for (int j = 2 * i; j <= MAXN; j += i)
        {
            d[j] += i;
        }
    }
    for (int i = 1; i <= MAXN; i++)
    {
        if (d[i] <= MAXN && i == d[d[i]] && i != d[i])
            tot += i;
    }
    cout << tot << endl;
}