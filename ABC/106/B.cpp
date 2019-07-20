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
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i += 2)
    {
        int tmp = 0;
        for (int j = 1; j <= i; j++)
        {
            if (!(i % j))
            {
                tmp++;
            }
        }
        if (tmp == 8)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}