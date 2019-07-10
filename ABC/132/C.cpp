#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    int ans = 0;
    ans = d[N / 2] - d[N / 2 - 1];
    if (ans >= 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}