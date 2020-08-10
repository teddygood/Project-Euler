#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 500000;

int ck[MAX_N];

void era()
{
    for (int i = 2; i < MAX_N; i++)
    {
        if (ck[i])
            continue;
        for (int j = 2 * i; j < MAX_N; j += i)
            ck[j] = 1; // 소수는 0 합성수는 1
    }
}

int main()
{
    era();
    int cnt = 0;
    for (int i = 2; i < MAX_N; i++)
    {
        if (ck[i] == 0)
            cnt++;
        if (cnt == 10001){
            cout << i;
            return 0;
        }
    }
}
