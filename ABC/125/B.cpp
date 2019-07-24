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
    vector<int> V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if (V[i] - tmp > 0)
        {
            ans += V[i] - tmp;
        }
    }
    cout << ans << endl;
    return 0;
}