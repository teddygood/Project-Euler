#include <bits/stdc++.h>
using namespace std;

const int N = 15;

int dp[N + 5][N + 5];

int main()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int x;
            cin >> x;
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + x;
        }
    }

    int mx = 0;

    for (int i = 1; i <= N; i++)
        mx = max(dp[N][i], mx);

    cout << mx;
}