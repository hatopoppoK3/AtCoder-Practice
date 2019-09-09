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
    int N, ans = 0;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    for (int i = 1; i < N; i++)
    {
        if (H[i - 1] > H[i])
        {
            ans += (H[i - 1] - H[i]);
        }
    }
    ans += H[N - 1];
    cout << ans << endl;

    return 0;
}