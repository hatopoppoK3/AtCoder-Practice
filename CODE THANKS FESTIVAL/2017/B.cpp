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
    string S;
    cin >> S;
    int ans = 0;
    for (unsigned int i = 0; i < S.size(); i++)
    {
        string tmp = S.substr(0, i);
        reverse(tmp.begin(), tmp.end());
        string T = S + tmp;
        bool flag = true;
        for (unsigned int j = 0; j < T.size(); j++)
        {
            if (T[j] != T[T.size() - 1 - j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}