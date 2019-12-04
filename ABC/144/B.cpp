#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++)
    {
        if (N % i == 0)
        {
            int tmp = N / i;
            if ((1 <= tmp) && (tmp <= 9))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}