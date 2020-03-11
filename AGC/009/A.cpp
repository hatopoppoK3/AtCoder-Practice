#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long double> A(N, 0), B(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }
    ll ans = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        ans += ceil((ans + A[i]) / B[i]) * B[i] - (ans + A[i]);
    }
    cout << ans << endl;

    return 0;
}