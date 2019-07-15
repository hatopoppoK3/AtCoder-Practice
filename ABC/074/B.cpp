#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> X(N);
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        if (X[i] < abs(X[i] - K))
        {
            ans += 2 * X[i];
        }
        else
        {
            ans += 2 * abs(X[i] - K);
        }
    }
    cout << ans << endl;
    return 0;
}