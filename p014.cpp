#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAXN = 1e6;

int dp[MAXN + 5]; // dp[i]: i가 1까지 도달하는 길이
map<ll, int> dp2;

int f(ll ith)
{
    int &ret = ith > MAXN ? dp2[ith] : dp[ith];
    if (ret)
        return ret;
    if (ith & 1)
        return ret = f(3 * ith + 1) + 1;
    return ret = f(ith / 2) + 1;
}

int main()
{
    dp[1] = 1;
    int mx_idx = 0;
    for (ll i = 2; i <= MAXN; i++)
    {
        dp[i] = f(i);
        if (dp[mx_idx] < dp[i])
        {
            mx_idx = i;
        }
    }
    cout << mx_idx << endl;
    cout << dp[mx_idx];
}