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
    int N;
    cin >> N;
    vector<int> L(2 * N);
    for (int i = 0; i < 2 * N; i++)
    {
        cin >> L[i];
    }
    sort(L.begin(), L.end());
    int ans = 0;
    for (int i = 1; i < 2 * N; i += 2)
    {
        ans += min(L[i], L[i - 1]);
    }
    cout << ans << endl;
    return 0;
}