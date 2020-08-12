#include <bits/stdc++.h>
using namespace std;

bool ck[2000001];

int main()
{
    long long sum = 0;
    for (long long i = 2; i < 2000000; i++)
    {
        if (ck[i])
            continue;
        sum += i;
        for (long long j = i * i; j <= 2000000; j += i)
            ck[j] = true;
    }
    cout << sum;
}