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
    vector<vector<int>> C(3);
    for (int i = 0; i < 3; i++)
    {
        vector<int> c(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> c[j];
        }
        C[i] = c;
    }
    vector<int> Atotal(3, 0);
    for (int i = 0; i < 3; i++)
    {
        Atotal[i] += (C[0][i] + C[1][i] - 2 * C[2][i]);
    }
    bool Aflag = false, Bflag = false;
    for (int i = -100; i <= 100; i++)
    {
        for (int j = -100; j <= 100; j++)
        {
            for (int k = -100; k <= 100; k++)
            {
                int tmp = i + j - 2 * k;
                if ((tmp == Atotal[0]) && (tmp == Atotal[1]) && (tmp == Atotal[2]))
                {
                    Aflag = true;
                    break;
                }
            }
            if (Aflag)
            {
                break;
            }
        }
        if (Aflag)
        {
            break;
        }
    }
    vector<int> Btotal(3, 0);
    for (int i = 0; i < 3; i++)
    {
        Btotal[i] += (C[i][0] + C[i][1] - 2 * C[i][2]);
    }
    for (int i = -100; i <= 100; i++)
    {
        for (int j = -100; j <= 100; j++)
        {
            for (int k = -100; k <= 100; k++)
            {
                int tmp = i + j - 2 * k;
                if ((tmp == Btotal[0]) && (tmp == Btotal[1]) && (tmp == Btotal[2]))
                {
                    Bflag = true;
                    break;
                }
            }
            if (Bflag)
            {
                break;
            }
        }
        if (Bflag)
        {
            break;
        }
    }
    if (Aflag && Bflag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}