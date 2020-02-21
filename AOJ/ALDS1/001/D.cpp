#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int x = A[0], ans = -1000000000;
    for (int i = 1; i < N; i++)
    {
        ans = max(ans, A[i] - x);
        x = min(x, A[i]);
    }
    cout << ans << endl;

    return 0;
}