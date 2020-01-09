#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> weigth(N), values(N);
    for (int i = 0; i < N; i++)
    {
        cin >> weigth[i] >> values[i];
    }
    vector<vector<int>> DP(N + 1, vector<int>(W + 1, 0));
    for (int w = 0; w <= W; w++)
    {
        DP[0][w] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (weigth[i] <= w)
            {
                DP[i + 1][w] = max(DP[i][w - weigth[i]] + values[i], DP[i][w]);
            }
            else
            {
                DP[i + 1][w] = DP[i][w];
            }
        }
    }
    cout << DP[N][W] << endl;

    return 0;
}