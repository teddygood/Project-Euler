#include <bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        scanf("%1d", arr + i);
    }
    int ans = 0;
    for (int i = 0; i + 4 < 1000; i++)
    {
        int tmp = 1;
        for (int j = 0; j < 5; j++)
        {
            tmp *= arr[i + j];
        }
        ans = max(tmp, ans);
    }
    cout << ans;
}