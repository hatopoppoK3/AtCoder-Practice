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
    ll A, B, C, ans = 0;
    cin >> A >> B >> C;
    if (C <= (A + B))
    {
        ans = B + C;
    }
    else
    {
        ans = A + B * 2 + 1;
    }
    cout << ans << endl;

    return 0;
}