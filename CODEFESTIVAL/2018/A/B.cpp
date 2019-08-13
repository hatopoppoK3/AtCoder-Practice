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
    int N, M, A, B;
    cin >> N >> M >> A >> B;
    vector<int> ans(N, B);
    for (int i = 0; i < M; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            ans[j - 1] = A;
        }
    }
    cout << accumulate(ans.begin(), ans.end(), 0) << endl;

    return 0;
}