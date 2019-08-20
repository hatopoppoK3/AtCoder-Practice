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
    if (S == "keyence")
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        for (unsigned int i = 0; i < S.size(); i++)
        {
            for (unsigned int j = i; j < S.size(); j++)
            {
                string str = "";
                for (unsigned int k = 0; k < S.size(); k++)
                {
                    if (i <= k && k <= j)
                    {
                        continue;
                    }
                    else
                    {
                        str.push_back(S[k]);
                    }
                }
                if (str == "keyence")
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}
