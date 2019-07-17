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
    int N, ans = 0;
    string S;
    cin >> N >> S;
    for (int i = 1; i < N; i++)
    {
        string str1 = S.substr(0, i);
        string str2 = S.substr(i, N);
        int tmp = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            if ((count(str1.begin(), str1.end(), c) > 0) && (count(str2.begin(), str2.end(), c) > 0))
            {
                tmp++;
            }
        }
        if (ans < tmp)
        {
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}