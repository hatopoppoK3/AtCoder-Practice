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
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = A; i <= B; i++)
    {
        string tmp = to_string(i);
        bool flag = true;
        for (int j = 0; j < tmp.size() / 2; j++)
        {
            if (tmp[j] != tmp[(tmp.size() - 1) - j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}