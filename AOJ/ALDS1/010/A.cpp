#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<ll> ans(45, 1);
    ans[0] = 1;
    ans[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        ans[i] = ans[i - 2] + ans[i - 1];
    }
    cout << ans[N] << endl;

    return 0;
}