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
    int n = N;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (N % sum)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}