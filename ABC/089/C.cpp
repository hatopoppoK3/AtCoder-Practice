#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
#include <cstdlib>
#include <map>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    vector<ll> cnt(5, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        if (S[i][0] == 'M')
        {
            cnt[0]++;
        }
        if (S[i][0] == 'A')
        {
            cnt[1]++;
        }
        if (S[i][0] == 'R')
        {
            cnt[2]++;
        }
        if (S[i][0] == 'C')
        {
            cnt[3]++;
        }
        if (S[i][0] == 'H')
        {
            cnt[4]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                ans += cnt[i] * cnt[j] * cnt[k];
            }
        }
    }
    cout << ans << endl;

    return 0;
}
