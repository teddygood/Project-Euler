#include <bits/stdc++.h>
using namespace std;

// 방향벡터
int dx[4] = {0, 1, 1, 1}, dy[4] = {1, 1, 0, -1};
int arr[30][30];

int main()
{
    for (int i = 3; i < 23; i++)
    {
        for (int j = 3; j < 23; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    // 양 사이드에 여유분 주기
    for (int i = 3; i < 23; i++)
    {
        for (int j = 3; j < 23; j++)
        {
            for (int k = 0; k < 4; k++) // 방향
            {
                int tmp = 1; // arr[i][j]를 기준으로 k번째 방향으로 간 경우
                for (int n = 0; n < 4; n++) // 몇번째 칸으로 갔는가
                {
                    int ii = i + dx[k] * n, jj = j + dy[k] * n; // i, j에서 k방향으로 n칸만큼 간 것을 의미
                    tmp *= arr[ii][jj];
                }
                ans = max(ans, tmp);
            }
        }
    }
    cout << ans;
}