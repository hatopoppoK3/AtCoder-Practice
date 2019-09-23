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
    int N, K;
    cin >> N >> K;
    vector<char> D(K);
    for (int i = 0; i < K; i++)
    {
        cin >> D[i];
    }
    int ans = N;
    while (true)
    {
        bool flag = true;
        string S = to_string(ans);
        for (char s : S)
        {
            if (count(D.begin(), D.end(), s) > 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << S << endl;
            return 0;
        }
        else
        {
            ans++;
        }
    }

    return 0;
}