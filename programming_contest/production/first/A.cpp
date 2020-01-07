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
    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> ans(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        ll tmp = 0;
        for (int j = i; j < N; j++)
        {
            tmp += A[j];
            ans[j - i] = max(ans[j - i], tmp);
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}