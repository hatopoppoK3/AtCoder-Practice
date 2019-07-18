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
    string S;
    cin >> S;
    bool flag;
    int tmp = S.find('C');
    if ((2 <= tmp) && (tmp<=(S.size()-2)))
    {
        if (S[0] == 'A')
        {
            flag = true;
            for (int i = 1; i < S.size(); i++)
            {
                if (i != tmp)
                {
                    if ((S[i] < 'a') || (S[i] > 'z'))
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
    }
    else
    {
        flag = false;
    }
    if (flag)
    {
        cout << "AC" << endl;
    }
    else
    {
        cout << "WA" << endl;
    }

    return 0;
}