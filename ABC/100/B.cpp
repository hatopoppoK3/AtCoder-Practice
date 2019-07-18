#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int D, N;
    cin >> D >> N;
    int ans = 0;
    if (N == 100)
    {
        ans = floor(pow(100, D)) * (N + 1);
    }
    else
    {
        ans = floor(pow(100, D)) * N;
    }
    cout << ans << endl;
    return 0;
}