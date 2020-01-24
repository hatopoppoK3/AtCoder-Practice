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
    vector<vector<bool>> dp(N + 1, vector<bool>(B + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= N; i++)
    {
        for (int b = 0; b <= B; b++)
        {
            if (b - A[i - 1] >= 0)
            {
                dp[i][b] = (dp[i - 1][b] | dp[i - 1][b - A[i - 1]]);
            }
            else
            {
                dp[i][b] = dp[i - 1][b];
            }
        }
    }
    if (dp[N][B])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}