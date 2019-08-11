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
    ll x;
    cin >> N >> x;
    vector<ll> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= x)
        {
            x -= A[i];
            ans++;
        }
        else if (x < A[i])
        {
            x = 0;
            break;
        }
    }
    if (x == 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans - 1 << endl;
    }

    return 0;
}