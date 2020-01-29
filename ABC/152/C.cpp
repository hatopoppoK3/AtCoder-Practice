#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    int ans = 0;
    vector<int> A(N, 0);
    A[0] = P[0];
    for (int i = 1; i < N; i++)
    {
        A[i] = min(A[i - 1], P[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == P[i])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}