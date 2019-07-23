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
    int ans = 0;
    int tmp = 9;
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        int tmp2;
        cin >> tmp2;
        if (tmp2 % 10)
        {
            if ((tmp2 % 10) < tmp)
            {
                tmp = tmp2 % 10;
            }
            ans += ((tmp2 / 10) * 10 + 10);
            flag = false;
        }
        else
        {
            ans += tmp2;
        }
    }
    if (flag)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans + tmp - 10 << endl;
    }
    return 0;
}