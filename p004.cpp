#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    for (int i = 100; i < 1000; i++)    
    {
        for (int j = i; j < 1000; j++)
        {
            int tmp = i * j;
            string s = to_string(tmp);
            string rs = s;
            reverse(s.begin(), s.end());
            if (s == rs)
            {
                ans = max(ans, tmp);
            }
        }
    }
    cout << ans;
}