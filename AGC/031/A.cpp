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
    string S;
    cin >> N >> S;
    ll ans = 1;
    for (char c = 'a'; c <= 'z'; c++)
    {
        ans *= (count(S.begin(), S.end(), c) + 1);
        ans %= 1000000007;
    }
    ans = (ans - 1) % 1000000007;
    cout << ans << endl;
    return 0;
}