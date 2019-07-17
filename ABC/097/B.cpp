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
    int X;
    cin >> X;
    int ans = 1;
    for (int i = 1; i <= ceil(sqrt(X)); i++)
    {
        for (int j = 2; j < 10; j++)
        {
            int tmp = pow(i, j);
            if ((tmp <= X) && (ans < tmp))
            {
                ans = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}