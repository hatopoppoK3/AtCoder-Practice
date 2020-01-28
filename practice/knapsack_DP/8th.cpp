#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int X, Y;
    string S, T;
    cin >> S >> T;
    X = S.size();
    Y = T.size();
    vector<vector<int>> dp(X + 1, vector<int>(Y + 1, 0));
    for (int i = 1; i <= X; i++)
    {
        for (int j = 1; j <= Y; j++)
        {
            if (S[i - 1] == T[j - 1])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
            dp[i][j] = max(dp[i][j], dp[i][j - 1]);
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }
    cout << dp[X][Y] << endl;

    return 0;
}