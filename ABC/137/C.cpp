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
    map<string, ll> A;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        A[s]++;
    }
    ll ans = 0;
    for (auto a : A)
    {
        ans += (a.second * (a.second - 1)) / 2;
    }
    cout << ans << endl;

    return 0;
}