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
    vector<int> A(N), L(N, 0), R(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < N; i++)
    {
        if (L[i - 1] < A[i - 1])
        {
            L[i] = A[i - 1];
        }
        else
        {
            L[i] = L[i - 1];
        }
        if (R[i - 1] < A[N - i])
        {
            R[i] = A[N - i];
        }
        else
        {
            R[i] = R[i - 1];
        }
    }
    reverse(R.begin(), R.end());
    for (int i = 0; i < N; i++)
    {
        cout << max(L[i], R[i]) << endl;
    }

    return 0;
}