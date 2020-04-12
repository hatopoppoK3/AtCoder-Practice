#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int K;
    cin >> K;
    ll ans = 0;
    for (int i = 1; i <= K; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            int a = __gcd(i, j);
            for (int k = 1; k <= K; k++)
            {
                ans += __gcd(a, k);
            }
        }
    }
    cout << ans << endl;

    return 0;
}