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
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    sort(H.begin(), H.end());
    int ans = *max_element(H.begin(), H.end());
    for (int i = 0; i <= N - K; i++)
    {
        ans = min(ans, abs(H[i] - H[K - 1 + i]));
    }
    cout << ans << endl;

    return 0;
}