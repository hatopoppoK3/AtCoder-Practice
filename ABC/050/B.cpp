#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> T(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        int total = 0;
        for (int j = 0; j < N; j++)
        {
            if ((p.first - 1) == j)
            {
                total += p.second;
            }
            else
            {
                total += T[j];
            }
        }
        cout << total << endl;
    }

    return 0;
}