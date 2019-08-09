#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
#include <cstdlib>
using namespace std;
using ll = long long int;

int main()
{
    int N;
    cin >> N;
    vector<ll> A(N + 1, 0);
    map<ll, ll> B;
    B[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        ll tmp;
        cin >> tmp;
        A[i] = A[i - 1] + tmp;
        B[A[i]]++;
    }
    ll ans = 0;
    for (auto i : B)
    {
        ans += (i.second * (i.second - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}