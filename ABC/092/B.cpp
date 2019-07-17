#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> A(N);
    int ans = X;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
        {
            ans += D / A[i];
        }
        else if (D % A[i] == 0)
        {
            ans += D / A[i];
        }
        else
        {
            ans += D / A[i] + 1;
        }
    }
    cout << ans << endl;
    return 0;
}