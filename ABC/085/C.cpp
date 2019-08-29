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
    int N, Y;
    cin >> N >> Y;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (i + j <= N)
            {
                int k = (N - i - j);
                if (10000 * i + 5000 * j + k * 1000 == Y)
                {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;

    return 0;
}