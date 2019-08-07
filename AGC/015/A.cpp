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
    long long N, A, B;
    cin >> N >> A >> B;
    if (A > B)
    {
        cout << 0 << endl;
    }
    else if (N == 1)
    {
        if (A == B)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        cout << (N - 2) * (B - A) + 1 << endl;
    }
    return 0;
}