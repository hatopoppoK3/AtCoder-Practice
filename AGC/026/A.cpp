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
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 1; i < N; i++)
    {
        if (A[i - 1] == A[i])
        {
            ans++;
            A[i] = -A[i];
        }
    }
    cout << ans << endl;

    return 0;
}