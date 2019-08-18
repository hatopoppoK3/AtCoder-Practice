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
    int N, X;
    string S;
    cin >> N >> X >> S;
    vector<int> T(N);
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            ans += T[i];
        }
        else
        {
            ans += min(T[i], X);
        }
    }
    cout << ans << endl;

    return 0;
}