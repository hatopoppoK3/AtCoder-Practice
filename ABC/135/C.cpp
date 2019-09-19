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
    vector<int> A(N + 1), B(N);
    for (int i = 0; i <= N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= B[i])
        {
            B[i] -= A[i];
            ans += A[i];
            A[i] = 0;
            if (A[i + 1] <= B[i])
            {
                ans += A[i + 1];
                A[i + 1] = 0;
            }
            else
            {
                A[i + 1] -= B[i];
                ans += B[i];
            }
        }
        else
        {
            A[i] -= B[i];
            ans += B[i];
        }
    }
    cout << ans << endl;

    return 0;
}