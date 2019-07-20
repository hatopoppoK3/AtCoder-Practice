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
    int N;
    cin >> N;
    bool flag = false;
    for (int i = 0; i <= N; i += 4)
    {
        for (int j = 0; j <= N; j += 7)
        {
            if (i + j == N)
            {
                flag = true;
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