#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;
    vector<pair<int, int>> X(N);
    for (int i = 0; i < N; i++)
    {
        pair<int, int> tmp;
        cin >> tmp.first >> tmp.second;
        X[i] = tmp;
    }
    sort(X.begin(), X.end());
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        if (X[i].second <= T)
        {
            flag = true;
            cout << X[i].first << endl;
            break;
        }
    }
    if (!flag)
    {
        cout << "TLE" << endl;
    }
    return 0;
}