#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e7;

bool ck[N];

void era()
{
    ck[0] = ck[1] = true;
    for (int i = 2; i < N; i++)
    {
        if (ck[i])
            continue;
        for (int j = 2 * i; j < N; j += i)
            ck[j] = true;
    }
}

int main()
{
    era();
    for (int i = 3;; i += 2)
    {
        if (!ck[i])
            continue;
        bool pro = true;
        for (int j = 1; 2 * j * j < i; j++)
        {
            if (!ck[i - 2 * j * j])
            {
                pro = false;
                break;
            }
        }
        if (pro)
        {
            cout << i << endl;
            return 0;
        }
    }
}