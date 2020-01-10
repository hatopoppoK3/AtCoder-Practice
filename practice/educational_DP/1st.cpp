#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> h(N), dp(N, 1000000000);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    dp[0] = 0;
    for (int i = 1; i < N; i++)
    {
        dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1)
        {
            dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }
    cout << dp[N - 1] << endl;

    return 0;
}