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
    int A, B;
    cin >> A >> B;
    if (2 * B >= A)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << A - 2 * B << endl;
    }

    return 0;
}