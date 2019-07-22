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
    int N, T;
    double A;
    cin >> N >> T >> A;
    vector<pair<double, int>> H(N);
    for (int i = 0; i < N; i++)
    {
        double tmp;
        cin >> tmp;
        double n = (T - tmp * 0.006) - A;
        H[i].first = abs(n);
        H[i].second = i;
    }
    sort(H.begin(), H.end());
    cout << H.front().second + 1 << endl;
    return 0;
}