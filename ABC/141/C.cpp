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
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(N, (K - Q));
    for (int i = 0; i < Q; i++)
    {
        int tmp;
        cin >> tmp;
        A[tmp - 1]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}