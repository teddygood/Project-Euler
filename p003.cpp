#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll num = 600851475143;
    ll p = 2; // �������� �Ҽ�
    ll ans = 0;
    while (num >= p * p)   // �ð� ���⵵ sprt(n) num != 1�� ���� -> �׷��� num ����ŭ ���� �ʿ䰡 ����
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
