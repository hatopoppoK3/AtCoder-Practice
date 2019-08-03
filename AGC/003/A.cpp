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
    set<char> ans(S.begin(), S.end());
    pair<int, int> output;
    output.first = 0;
    output.second = 0;
    for (char c : ans)
    {
        if (c == 'N')
        {
            output.second++;
        }
        else if (c == 'S')
        {
            output.second--;
        }
        else if (c == 'E')
        {
            output.first++;
        }
        else
        {
            output.first--;
        }
    }
    if (!((output.first) || (output.second)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}