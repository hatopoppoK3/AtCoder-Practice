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
    vector<pair<long double, string>> A(N);
    long double ans = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first >> A[i].second;
        if (A[i].second == "BTC")
        {
            ans += A[i].first * 380000.0;
        }
        else
        {
            ans += A[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}