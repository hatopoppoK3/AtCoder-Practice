#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    vector<pair<int, int>> cnt(N + 1, pair<int, int>(0, 0));
    for (int i = 1; i <= N; i++)
    {
        if (S[i - 1] == 'W')
        {
            cnt[i].first = cnt[i - 1].first + 1;
            cnt[i].second = cnt[i - 1].second;
        }
        else
        {
            cnt[i].first = cnt[i - 1].first;
            cnt[i].second = cnt[i - 1].second + 1;
        }
    }
    int ans = N;
    for (int i = 1; i <= N; i++)
    {
        int tmp = 0;
        tmp += cnt[i - 1].first;
        tmp += cnt[N].second - cnt[i].second;
        ans = min(ans, tmp);
    }
    cout << ans << endl;

    return 0;
}