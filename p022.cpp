#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void init()
{
    string s;
    string com;
    int ck = 0;
    cin >> s;
    for (auto i : s)
    {
        if (i == ',')
            com = "";
        else if (i == '\"')
        {
            ck ^= 1; // 1 0 1 0 1
            if (ck == 0)
                v.push_back(com);
        }
        else
            com += i;
    }
}

int score(string s)
{
    int ret = 0;
    for (auto i : s)
        ret += i - 'A' + 1;
    return ret;
}

void process()
{
    int sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        sum += (i + 1) * score(v[i]);
    cout << sum;
}

int main()
{
    init();
    process();
}