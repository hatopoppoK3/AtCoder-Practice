#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;
    bool flag = true;
    for (int i = 0; i < S.size(); i++)
    {
        if (i == A)
        {
            if (S[i] != '-')
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (!(('0' <= S[i]) && (S[i] <= '9')))
            {
                flag = false;
                break;
            }
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