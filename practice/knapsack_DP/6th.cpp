#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, K, B;
    cin >> N >> K;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cin >> B;
    vector<vector<int>> dp(N + 1, vector<int>(B + 1, N + 1));
    dp[0][0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            if (j - A[i - 1] >= 0)
            {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - A[i - 1]] + 1);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[N][B] <= K)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}