#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> x(N), y(M);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i].first >> x[i].second;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> y[i].first >> y[i].second;
    }
    for (int i = 0; i < N; i++)
    {
        int index = 0;
        int ans = abs(x[i].first - y[0].first) + abs(x[i].second - y[0].second);
        for (int j = 1; j < M; j++)
        {
            if ((abs(x[i].first - y[j].first) + abs(x[i].second - y[j].second)) < ans)
            {
                ans = abs(x[i].first - y[j].first) + abs(x[i].second - y[j].second);
                index = j;
            }
        }
        cout << index + 1 << endl;
    }

    return 0;
}