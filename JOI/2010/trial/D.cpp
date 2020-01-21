#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, B;
    cin >> N;
    vector<int> A(N - 1, 0);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
    }
    cin >> B;
    vector<vector<ll>> dp(N - 1, vector<ll>(21, 0));
    dp[0][A[0]] = 1;
    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            if ((j + A[i] >= 0) && (j + A[i] <= 20))
            {
                dp[i][j] += dp[i - 1][j + A[i]];
            }
            if ((j - A[i] >= 0) && (j - A[i] <= 20))
            {
                dp[i][j] += dp[i - 1][j - A[i]];
            }
        }
    }
    cout << dp[N - 2][B] << endl;

    return 0;
}