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
    int ans = pow(3, N);
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp & 1)
        {
            A[i] = 1;
        }
        else
        {
            A[i] = 2;
        }
    }
    int tmp = 1;
    for (int i = 0; i < N; i++)
    {
        tmp *= A[i];
    }
    cout << ans - tmp << endl;

    return 0;
}