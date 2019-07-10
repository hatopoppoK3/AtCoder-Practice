#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    string S;
    cin >> S;
    S.erase(S.end() - 3, S.end() - 1);
    for (int i = 0; i < S.size(); i += 2)
    {
        bool flag = true;
        for (int j = 0; j < (S.size() - i) / 2; j++)
        {
            if (S[j] != S[j + (S.size() - i) / 2])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << S.size() - i << endl;
            break;
        }
    }

    return 0;
}