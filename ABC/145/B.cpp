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
    string S;
    cin >> N >> S;
    if (N & 1)
    {
        cout << "No" << endl;
        return 0;
    }
    string x, y;
    x = S.substr(0, N / 2);
    y = S.substr(N / 2, N);
    if (x == y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}