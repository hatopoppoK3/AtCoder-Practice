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
    vector<int> dist(N);
    for (int i = 0; i < N; i++)
    {
        cin >> dist[i];
    }
    sort(dist.begin(), dist.end());
    int sum = 0;
    for (int i = 1; i < dist.size(); i++)
    {
        sum += (dist[i] - dist[i - 1]);
    }
    cout << sum << endl;
    return 0;
}