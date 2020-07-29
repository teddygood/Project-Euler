#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll num = 600851475143;
    ll p = 2; 
    ll ans = 0;
    while (num >= p * p)   
    {                       
        if (num % p == 0)
        {
            ans = p;
            num /= p;
        }
        else
            p++;
    }
    if (num != 1)
        cout << num;
    else
        cout << ans;
}
