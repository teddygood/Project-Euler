#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f1 = 1, f2 = 1;
    int sum = 0;
    while (f1 + f2 <= 4000000)
    {
        int tmp = f1 + f2;
        if (tmp % 2 == 0)
            sum += tmp;
        f1 = f2;
        f2 = tmp;
    }
    cout << sum;
}