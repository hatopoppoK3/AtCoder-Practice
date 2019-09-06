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
    string S, T;
    cin >> S >> T;
    vector<unsigned int> A(26, 0), B(26, 0);
    for (char c = 'a'; c <= 'z'; c++)
    {
        A[c - 'a'] = count(S.begin(), S.end(), c);
        B[c - 'a'] = count(T.begin(), T.end(), c);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < 26; i++)
    {
        if (A[i] != B[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}