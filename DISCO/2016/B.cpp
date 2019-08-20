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
    long double R;
    int N, M;
    cin >> R >> N >> M;
    long double height = 2 * R / N;
    long double ans = 0;
    for (int i = 0; i <= N + M; i++)
    {
        long double first, second;
        long double k1 = fabs(R - height * i);
        long double k2 = fabs(R - height * (i - M));
        first = sqrt(R * R - k1 * k1) * 2;
        second = sqrt(R * R - k2 * k2) * 2;
        if ((i - M) <= 0)
        {
            second = 0;
        }
        if (N <= i)
        {
            first = 0;
        }
        ans += max(first, second);
    }
    cout << fixed << ans << endl;

    return 0;
}