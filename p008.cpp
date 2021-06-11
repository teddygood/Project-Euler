#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arr[1005];

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        scanf("%1d", arr + i); 
    }
    ll ans = 0;
    for (int i = 0; i + 13 < 1000; i++)
    {
        ll tmp = 1;
        for (int j = 0; j < 13; j++)
        {
            tmp *= arr[i + j];
        }
        ans = ans > tmp ? ans : tmp;
    }
    cout << ans;
}