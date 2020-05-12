#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, M, X;
    cin >> N >> M >> X;
    vector<vector<int>> A(N, vector<int>(M + 1, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            cin >> A[i][j];
        }
    }
    int ans = 100000000;
    for (int i = 1; i < (1 << N); i++)
    {
        int score = 0;
        vector<int> x(M, 0);
        for (int j = 0; j < N; j++)
        {
            if ((i >> j) & 1)
            {
                for (int k = 0; k < M; k++)
                {
                    x[k] += A[j][k + 1];
                }
                score += A[j][0];
            }
        }
        bool flag = true;
        for (int j = 0; j < M; j++)
        {
            if (x[j] < X)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = min(ans, score);
        }
    }
    if (ans == 100000000)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}