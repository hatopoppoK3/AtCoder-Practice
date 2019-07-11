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
    vector<long long> ans(N + 1);
    ans[0] = 2;
    ans[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        ans[i] = ans[i - 2] + ans[i - 1];
    }
    cout << ans[N] << endl;
    return 0;
}