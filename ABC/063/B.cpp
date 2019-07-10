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
    bool judge = true;
    for (int i = 0; i < S.size() - 1; i++)
    {
        for (int j = i + 1; j < S.size(); j++)
        {
            if (S[i] == S[j])
            {
                judge = false;
                break;
            }
        }
    }
    if (judge)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}