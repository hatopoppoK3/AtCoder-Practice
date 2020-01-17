#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, total = 0;
    cin >> N;
    vector<int> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
        total += p[i];
    }
    vector<bool> dp(total + 1, false);
    dp[0] = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = total - p[i]; j >= 0; j--)
        {
            dp[j + p[i]] = dp[j + p[i]] | dp[j];
        }
    }
    cout << count(dp.begin(), dp.end(), true) << endl;

    return 0;
}