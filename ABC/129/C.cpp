#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<bool> flag(N + 1, true);
    vector<ll> dp(N + 1, 0);
    for (int i = 0; i < M; i++)
    {
        int index;
        cin >> index;
        flag[index] = false;
    }
    dp[0] = 1;
    if (flag[1])
    {
        dp[1] = dp[0];
    }
    else
    {
        dp[1] = 0;
    }
    for (int i = 2; i <= N; i++)
    {
        if (flag[i])
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
        }
        else
        {
            dp[i] = 0;
        }
    }
    cout << dp[N] % 1000000007 << endl;

    return 0;
}