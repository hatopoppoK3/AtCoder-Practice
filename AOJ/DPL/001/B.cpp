#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    vector<pair<int, int>> A(N, pair<int, int>(0, 0));
    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j >= A[i - 1].second)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - A[i - 1].second] + A[i - 1].first);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[N][W] << endl;

    return 0;
}