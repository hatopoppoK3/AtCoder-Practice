#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), DP(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        DP[i + 1] = max(DP[i], DP[i] + A[i]);
    }
    cout << DP[N] << endl;

    return 0;
}