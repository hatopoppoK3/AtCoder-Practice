#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<double, double>> XY(N);
    for (int i = 0; i < N; i++)
    {
        pair<double, double> xy;
        cin >> xy.first >> xy.second;
        XY[i] = xy;
    }
    vector<vector<double>> dist(N);
    for (int i = 0; i < N; i++)
    {
        vector<double> tmp(N);
        for (int j = 0; j < N; j++)
        {
            tmp[j] = sqrt(pow((XY[i].first - XY[j].first), 2) + pow((XY[i].second - XY[j].second), 2));
        }
        dist[i] = tmp;
    }
    double ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            ans += dist[i][j];
        }
    }
    cout << setprecision(12) << ans / N << endl;

    return 0;
}