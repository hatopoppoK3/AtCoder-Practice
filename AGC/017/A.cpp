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
    int N, P;
    cin >> N >> P;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        A[i] = A[i] & 1;
    }
    long long ans = 0;
    if (!(count(A.begin(), A.end(), 1)))
    {
        if (!P)
        {
            ans = pow(2, N);
        }
    }
    else
    {
        ans = pow(2, N - 1);
    }
    cout << ans << endl;

    return 0;
}