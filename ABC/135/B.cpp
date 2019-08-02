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
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int pivot = i;
        for (int j = i + 1; j < N; j++)
        {
            if (P[i] > P[j])
            {
                pivot = j;
            }
        }
        if (i != pivot)
        {
            ans++;
            swap(P[i], P[pivot]);
        }
    }
    if (ans >= 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}