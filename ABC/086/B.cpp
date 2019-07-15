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
    string a, b;
    cin >> a >> b;
    float ab = stof(a + b);
    if (!(sqrt(ab) - ceil(sqrt(ab))))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}