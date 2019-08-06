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
    int N;
    cin >> N;
    int ans = N;
    string s, t;
    cin >> s >> t;
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        bool tmp = true;
        for (int j = 0; j < (N - i); j++)
        {
            if (s[j + i] != t[j])
            {
                tmp = false;
                break;
            }
        }
        if (tmp)
        {
            ans += i;
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << ans << endl;
    }
    else
    {
        cout << 2 * N << endl;
    }

    return 0;
}