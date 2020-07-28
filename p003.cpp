#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll num = 600851475143;
    ll p = 2; // 나누어줄 소수
    ll ans = 0;
    while (num >= p * p)   // 시간 복잡도 sprt(n) num != 1도 가능 -> 그러나 num 수만큼 돌릴 필요가 없다
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
