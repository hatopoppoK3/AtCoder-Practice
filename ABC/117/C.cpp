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
    int N, M;
    cin >> N >> M;
    vector<int> X(M), ans(M - 1);
    for (int i = 0; i < M; i++)
    {
        cin >> X[i];
    }
    if (M <= N)
    {
        cout << 0 << endl;
        return 0;
    }
    sort(X.begin(), X.end());
    for (int i = 1; i < M; i++)
    {
        ans[i - 1] = abs(X[i] - X[i - 1]);
    }
    sort(ans.begin(), ans.end());
    cout << accumulate(ans.begin(), ans.end() - N + 1, 0) << endl;

    return 0;
}