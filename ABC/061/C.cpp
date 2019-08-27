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
    int N;
    ll K, total = 0;
    cin >> N >> K;
    vector<pair<int, int>> A(N);
    for (int i = 0; i < N; i++)
    {
        pair<int, int> a;
        cin >> a.first >> a.second;
        A[i] = a;
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++)
    {
        total += A[i].second;
        if (K <= total)
        {
            cout << A[i].first << endl;
            return 0;
        }
    }

    return 0;
}