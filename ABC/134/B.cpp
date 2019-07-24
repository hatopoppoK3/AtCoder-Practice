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
using namespace std;

int main()
{
    int N, D, ans = 0;
    cin >> N >> D;
    while (N > 0)
    {
        N -= 2 * D + 1;
        ans++;
    }
    cout << ans << endl;
    return 0;
}