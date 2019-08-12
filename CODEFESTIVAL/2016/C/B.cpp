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
    int K, T;
    cin >> K >> T;
    vector<int> A(T);
    for (int i = 0; i < T; i++)
    {
        cin >> A[i];
    }
    int ans = *max_element(A.begin(), A.end()) * 2 - K - 1;
    if (ans < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}