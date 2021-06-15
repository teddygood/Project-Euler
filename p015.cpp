#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Combination
int main()
{
    ll ans = 1;
    for (ll i = 1; i <= 20; i++)
    {
        ans *= 40 - i + 1;
        ans /= i;
    }
    cout << ans;
}