#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> H(N, 0);
    vector<ll> dp(N + 1, 1 << 30);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    dp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (i + j <= N)
            {
                dp[i + j] = min(dp[i + j], dp[i] + abs(H[i] - H[i + j]));
            }
        }
    }
    cout << dp[N - 1] << endl;

    return 0;
}