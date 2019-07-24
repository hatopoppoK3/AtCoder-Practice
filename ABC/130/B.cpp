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
    int N, X;
    cin >> N >> X;
    vector<int> L(1, 0);
    for (int i = 1; i < N + 1; i++)
    {
        int l;
        cin >> l;
        L.push_back(L[i - 1] + l);
    }
    int ans = 0;
    for (int i : L)
    {
        if (i <= X)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}