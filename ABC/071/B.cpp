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
    bool flag = true;
    for (char c = 'a'; c <= 'z'; c++)
    {
        if ((int)S.find(c) < 0)
        {
            cout << c << endl;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "None" << endl;
    }
    return 0;
}