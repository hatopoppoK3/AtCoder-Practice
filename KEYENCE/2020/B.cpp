#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> P(N, pair<int, int>(0, 0));
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        P[i].first = x + y;
        P[i].second = x - y;
    }
    sort(P.begin(), P.end());
    int ans = 0;
    int flag = -P[N - 1].first;
    for (int i = 0; i < N; i++)
    {
        if (flag <= P[i].second)
        {
            ans++;
            flag = P[i].first;
        }
    }
    cout << ans << endl;

    return 0;
}