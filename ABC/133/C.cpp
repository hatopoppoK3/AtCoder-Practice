#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;
    if ((R - L) >= 2019)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = 2018;
        for (int i = L; i < R; i++)
        {
            int lmod = i % 2019;
            for (int j = i + 1; j <= R; j++)
            {
                int rmod = j % 2019;
                int tmp = (lmod * rmod) % 2019;
                if (tmp < ans)
                {
                    ans = tmp;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}