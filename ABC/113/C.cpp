#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> PY(N, vector<int>());
    vector<int> P(M, 0), Y(M, 0);
    for (int i = 0; i < M; i++)
    {
        cin >> P[i] >> Y[i];
        PY[P[i] - 1].push_back(Y[i]);
    }
    for (int i = 0; i < N; i++)
    {
        sort(PY[i].begin(), PY[i].end());
    }
    for (int i = 0; i < M; i++)
    {
        stringstream ans1, ans2;
        ans1 << setw(6) << setfill('0') << to_string(P[i]);
        ans2 << setw(6) << setfill('0') << to_string(lower_bound(PY[P[i] - 1].begin(), PY[P[i] - 1].end(), Y[i]) - PY[P[i] - 1].begin() + 1);
        cout << ans1.str() << ans2.str() << endl;
    }

    return 0;
}