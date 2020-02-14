#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<ll> A(N, 0), dist(N + 1, 0);
    cin >> A[0];
    dist[0] = abs(A[0]);
    ll total = dist[0];
    for (int i = 1; i < N; i++)
    {
        cin >> A[i];
        dist[i] = abs(A[i] - A[i - 1]);
        total += dist[i];
    }
    dist[N] = abs(A[N - 1]);
    total += dist[N];
    for (int i = 0; i < N; i++)
    {
        ll ans = total;
        ans -= (dist[i + 1] + dist[i]);
        if (i == 0)
        {
            ans += abs(A[i + 1]);
        }
        else if (i == N - 1)
        {
            ans += abs(A[N - 2]);
        }
        else
        {
            ans += abs(A[i - 1] - A[i + 1]);
        }
        cout << ans << endl;
    }

    return 0;
}