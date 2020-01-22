#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> w(N, 0), v(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }
    int total = accumulate(v.begin(), v.end(), 0);
    vector<vector<ll>> dp(N + 1, vector<ll>(total + 1, 1000000001));
    dp[0][0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= total; j++)
        {
            if (v[i - 1] <= j)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i - 1]] + w[i - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= total; i++)
    {
        if (dp[N][i] <= W)
        {
            ans = max(ans, i);
        }
    }
    cout << ans << endl;

    return 0;
}