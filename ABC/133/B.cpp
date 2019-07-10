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
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N);
    for (int i = 0; i < N; i++)
    {
        vector<int> tmp(D);
        for (int j = 0; j < D; j++)
        {
            cin >> tmp[j];
        }
        X[i] = tmp;
    }
    int ans = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int dist = 0;
            for (int k = 0; k < D; k++)
            {
                dist += pow((X[i][k] - X[j][k]), 2);
            }
            if (sqrt(dist) == (int)sqrt(dist))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}