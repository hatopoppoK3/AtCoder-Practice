#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> D(N);
    for (int i = 0; i < N; i++)
    {
        cin >> D[i];
    }
    int ans = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            ans += D[i] * D[j];
        }
    }
    cout << ans << endl;

    return 0;
}