#include <bits/stdc++.h>
using namespace std;

int arr[200];

void times(int n)
{
    for (int i = 0; i < 200; i++)
        arr[i] *= n;
}

void op()
{
    for (int i = 0; i < 199; i++)
    {
        arr[i + 1] += arr[i] / 10;
        arr[i] %= 10;
    }
}

int main()
{
    int sum = 0;
    arr[0] = 1;

    for (int i = 2; i <= 100; i++)
    {
        times(i);
        op();
    }
    for (int i = 0; i < 200; i++)
        sum += arr[i];
    cout << sum;
}