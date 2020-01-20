#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int W, N, K;
    cin >> W >> N >> K;
    vector<int> A(N, 0), B(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }
    vector<vector<vector<int>>> dp(W + 1, vector<vector<int>>(K + 1, vector<int>(N + 1, 0)));
    for (int i = 1; i <= W; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                if (A[k - 1] <= i)
                {
                    dp[i][j][k] = max(dp[i][j][k - 1], dp[i - A[k - 1]][j - 1][k - 1] + B[k - 1]);
                }
                else
                {
                    dp[i][j][k] = dp[i][j][k - 1];
                }
            }
        }
    }
    cout << dp[W][K][N] << endl;

    return 0;
}