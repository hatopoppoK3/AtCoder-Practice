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
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N), B(M);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    if (N != M)
    {
        if (N < M)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << "Y" << endl;
        }
        return 0;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
            {
                if (A[i] < B[i])
                {
                    cout << "X" << endl;
                }
                else
                {
                    cout << "Y" << endl;
                }
                return 0;
            }
        }
    }
    cout << "Same" << endl;

    return 0;
}