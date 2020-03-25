#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, C, K;
    cin >> N >> C >> K;
    vector<int> T(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    sort(T.begin(), T.end());
    int ans = 1, t = T[0], c = 0;
    for (int i = 0; i < N; i++)
    {
        if (c == C)
        {
            c = 0;
            ans++;
            t = T[i];
        }
        if (T[i] <= t + K)
        {
            c++;
        }
        else
        {
            t = T[i];
            ans++;
            c = 1;
        }
    }
    cout << ans << endl;

    return 0;
}