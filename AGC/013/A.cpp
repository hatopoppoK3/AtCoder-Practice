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
    int ans = 0, idx = 1;
    while (idx <= N)
    {
        int tmp1 = idx;
        int tmp2 = idx;
        while ((A[tmp1 - 1] <= A[tmp1]) && (tmp1 < N))
        {
            tmp1++;
        }
        while ((A[tmp2 - 1] >= A[tmp2]) && (tmp2 < N))
        {
            tmp2++;
        }
        ans++;
        idx = max(tmp1, tmp2) + 1;
    }
    cout << ans << endl;

    return 0;
}