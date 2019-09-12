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
    int N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> A(N);
    ll ans = 0;
    ll m = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end());
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        while (A[i].second != 0)
        {
            m++;
            ans += A[i].first;
            A[i].second--;
            if (M <= m)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}