#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    bool judge = false;
    for (int i = 1; i <= 100; i++)
    {
        if ((A * i) % B == C)
        {
            judge = true;
            break;
        }
    }
    if (judge)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
