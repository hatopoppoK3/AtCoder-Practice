#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<ll> A(3 * N, 0);
    for (int i = 0; i < 3 * N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<ll>());
    ll ans = 0;
    for (int i = 1; i < 2 * N; i += 2)
    {
        ans += A[i];
    }
    cout << ans << endl;

    return 0;
}