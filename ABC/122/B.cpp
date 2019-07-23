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
    string S;
    cin >> S;
    int tmp = 0;
    int ans = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if ((S[i] == 'A') || (S[i] == 'T') || (S[i] == 'C') || (S[i] == 'G'))
        {
            tmp++;
        }
        else
        {
            if (ans < tmp)
            {
                ans = tmp;
            }
            tmp = 0;
        }
    }
    if (ans < tmp)
    {
        ans = tmp;
    }
    cout << ans << endl;
    return 0;
}