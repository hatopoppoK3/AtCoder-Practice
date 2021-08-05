#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> P(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    sort(P.begin(), P.end());
    cout << accumulate(P.begin(), P.begin() + K, 0) << endl;

    return 0;
}