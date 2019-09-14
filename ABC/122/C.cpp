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
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<int> A(N, 0);
    for (int i = 0; i < N - 1; i++)
    {
        if ((S[i] == 'A') && (S[i + 1] == 'C'))
        {
            A[i + 1] = A[i] + 1;
        }
        else
        {
            A[i + 1] = A[i];
        }
    }
    for (int i = 0; i < Q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << A[r - 1] - A[l - 1] << endl;
    }

    return 0;
}