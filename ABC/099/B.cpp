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
    int a, b;
    cin >> a >> b;
    int A = 0;
    for (int i = 1; i < b - a; i++)
    {
        A += i;
    }
    cout << A - a << endl;
    return 0;
}