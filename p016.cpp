#include <bits/stdc++.h>
using namespace std;

int num[500];

void two()
{
    for (int i = 0; i < 500; i++)
    {
        num[i] *= 2;
    }
}

void op()
{
    for (int i = 0; i < 499; i++)
    {
        num[i + 1] += num[i] / 10;
        num[i] %= 10;
    }
}

int main()
{
    num[0] = 1;
    for (int i = 0; i < 1000; i++)
    {
        two();
        op();
    }

    int sum = 0;
    for (int i = 0; i < 500; i++)
        sum += num[i];

    cout << sum;
}