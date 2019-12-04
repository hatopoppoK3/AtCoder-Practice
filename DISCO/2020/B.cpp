#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<ll> A(N);
    cin >> A[0];
    ll total = A[0];
    for (int i = 1; i < N; i++)
    {
        cin >> A[i];
        total += A[i];
        A[i] += A[i - 1];
    }
    ll ans = total;
    for (int i = 0; i < N - 1; i++)
    {
        ll tmp = total - A[i];
        if (abs(tmp - A[i]) < ans)
        {
            ans = abs(tmp - A[i]);
        }
    }
    cout << ans << endl;

    return 0;
}