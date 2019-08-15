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
    int X, Y;
    cin >> X >> Y;
    bool flag = false;
    while (true)
    {
        if (X <= Y)
        {
            Y -= 3;
            X -= 1;
        }
        else
        {
            X -= 3;
            Y -= 1;
        }
        if ((X == 0) && (Y == 0))
        {
            flag = true;
            break;
        }
        else if ((X <= 2) && (Y <= 2))
        {
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
