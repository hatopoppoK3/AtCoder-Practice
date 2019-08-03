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
    vector<long long> abc(3);
    cin >> abc[0] >> abc[1] >> abc[2];
    sort(abc.begin(), abc.end());
    if (abc[2] & 1)
    {
        cout << abc[0] * abc[1] << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}