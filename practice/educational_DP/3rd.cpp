#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<ll>> X(N, vector<ll>(3, 0));
    vector<vector<ll>> dp(N + 1, vector<ll>(3, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> X[i][j];
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j != k)
                {
                    dp[i][k] = max(dp[i][k], dp[i - 1][j] + X[i - 1][k]);
                }
            }
        }
    }
    cout << *max_element(dp[N].begin(), dp[N].end()) << endl;

    return 0;
}