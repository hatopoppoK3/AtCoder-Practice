#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, B;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cin >> B;
    vector<vector<ll>> dp(N + 1, vector<ll>(B + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int b = 0; b <= B; b++)
        {
            if (b - A[i - 1] >= 0)
            {
                dp[i][b] = dp[i - 1][b] + dp[i - 1][b - A[i - 1]];
            }
            else
            {
                dp[i][b] = dp[i - 1][b];
            }
            dp[i][b] %= 1000000009;
        }
    }
    cout << dp[N][B] << endl;

    return 0;
}