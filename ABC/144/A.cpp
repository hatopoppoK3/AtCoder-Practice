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
    if ((A <= 9) && (B <= 9))
    {
        cout << A * B << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}