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
    string S, T;
    cin >> S >> T;
    bool flag = false;
    for (int i = 0; i < S.size(); i++)
    {
        S.insert(S.begin(), S[S.size() - 1]);
        S.pop_back();
        if (S == T)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}